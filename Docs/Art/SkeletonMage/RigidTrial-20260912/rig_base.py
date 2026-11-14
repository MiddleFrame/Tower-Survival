"""Animate cutouts from the approved 96px master. No new pixels are painted.

Each moving part samples the same source with nearest-neighbour transforms.
Joint caps also come from the source. New poses are a rigging experiment, not
independently generated frames. Output never touches the previous trials.
"""
from pathlib import Path
import hashlib
import json
import math
import numpy as np
from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parent
MASTER = ROOT.parent / 'UpdateTrial-20260909' / 'skeleton-mage-idle-96.png'
source = Image.open(MASTER).convert('RGBA')
rgba = np.asarray(source)
H = 128
PAD = 16
for folder in ['Parts', 'Atlases', 'Frames', 'Previews']:
    (ROOT / folder).mkdir(exist_ok=True)

def poly(points):
    im = Image.new('1', (96, 96))
    ImageDraw.Draw(im).polygon(points, fill=1)
    return np.asarray(im).astype(bool)

labels = np.full((96, 96), 'body', dtype='U20')
regions = {
    'head': [(0,0),(66,0),(66,41),(0,41)],
    'staff_arm': [(53,44),(61,45),(64,52),(72,53),(74,63),(66,63),(61,60),(57,57)],
    'free_upper': [(30,42),(34,42),(35,46),(32,51),(31,55),(22,55),(22,50),(27,46)],
    'free_lower': [(23,55),(32,55),(33,65),(23,65)],
    'free_hand': [(23,65),(35,65),(36,78),(23,78)],
    'near_thigh': [(35,62),(41,62),(43,68),(45,71),(44,76),(38,78),(37,71),(34,66)],
    'near_shin': [(38,74),(44,74),(43,78),(38,83),(38,87),(31,87),(31,82),(35,77)],
    'near_foot': [(30,85),(37,85),(39,87),(42,88),(44,92),(43,94),(29,94)],
    'far_thigh': [(51,63),(55,63),(57,68),(60,70),(60,76),(54,78),(52,73),(51,68)],
    'far_shin': [(53,75),(59,74),(59,78),(56,81),(56,85),(50,86),(50,81)],
    'far_foot': [(50,83),(56,83),(59,85),(63,86),(65,90),(63,92),(49,90)],
}
for name, points in regions.items():
    labels[poly(points)] = name
rgb = rgba[..., :3].astype(int)
cloth = (rgb[...,2] >= rgb[...,0]*.98) & (rgb[...,0] > rgb[...,1]*1.05)
dark = rgb.max(axis=2) < 90
loin = poly([(37,62),(52,62),(54,70),(52,80),(46,82),(40,74)]) & (cloth | dark)
labels[loin] = 'cloth'
staff_region = poly([(69,22),(85,22),(85,43),(76,46),(69,92),(62,92),(68,64),(70,60),(72,43),(63,38),(63,29)])
bone = (rgb[...,0] > rgb[...,2]*1.2) & (rgb[...,1] > rgb[...,2]*1.15) & (rgb[...,1] > 100)
labels[staff_region & ~bone] = 'staff'
yy,xx=np.indices((96,96))
# Assign the complete outline of the staff and feet, including edge pixels
# outside the initial polygons, so no old-position fragments stay on the torso.
labels[(xx>=62)&(yy>=22)&~bone] = 'staff'
labels[(labels=='body')&(yy>=83)&(xx>=46)&(xx<62)] = 'far_foot'
labels[(labels=='body')&(yy>=85)&(xx<46)] = 'near_foot'

parts = {}
for name in np.unique(labels):
    a = np.zeros_like(rgba)
    a[labels == name] = rgba[labels == name]
    parts[name] = Image.fromarray(a)
    parts[name].save(ROOT / 'Parts' / (name + '.png'))

def transform(im, origin=(0,0), target=(0,0), angle=0):
    # Inverse affine maps output pixel centers into one immutable source bitmap.
    t = math.radians(angle); c, s = math.cos(t), math.sin(t)
    ox, oy = origin; tx, ty = target[0]+PAD, target[1]+PAD
    return im.transform((H,H), Image.Transform.AFFINE,
                        (c,s,ox-c*tx-s*ty,-s,c,oy+s*tx-c*ty),
                        resample=Image.Resampling.NEAREST)

def put(canvas, name, shift=(0,0), origin=(0,0), target=None, angle=0):
    canvas.alpha_composite(transform(parts[name], origin,
        target if target is not None else shift, angle))

def point_angle(a,b):
    return math.degrees(math.atan2(b[1]-a[1],b[0]-a[0]))

def cap(canvas, srcpoint, target, radius=2):
    # Reuse the existing joint patch to cover seams exposed by rigid rotation.
    x,y=srcpoint
    patch=source.crop((x-radius,y-radius,x+radius+1,y+radius+1))
    canvas.alpha_composite(patch,(round(target[0])+PAD-radius,round(target[1])+PAD-radius))

def ik(hip, target, upper, lower, side=1):
    vx,vy=target[0]-hip[0],target[1]-hip[1]
    d=math.hypot(vx,vy)
    assert abs(upper-lower)+.001 < d < upper+lower-.001, ('unreachable',hip,target,d,upper+lower)
    base=math.atan2(vy,vx)
    angle=math.acos(max(-1,min(1,(upper*upper+d*d-lower*lower)/(2*upper*d))))
    candidates=[(hip[0]+upper*math.cos(base+a),hip[1]+upper*math.sin(base+a)) for a in [-angle,angle]]
    return max(candidates,key=lambda p:p[0]*side)

leg_data={'near':((39,64),(42,74),(34,85)), 'far':((53,64),(57,74),(53,84))}
arm_data=((31,45),(25,55),(28,66))
qa=[]

def limb(canvas, prefix, points, newroot, endpoint, foot=False):
    a,b,c=points
    l1,l2=math.dist(a,b),math.dist(b,c)
    joint=ik(newroot,endpoint,l1,l2,side=1 if foot else -1)
    an1=point_angle(newroot,joint)-point_angle(a,b)
    an2=point_angle(joint,endpoint)-point_angle(b,c)
    first=prefix+('_thigh' if foot else '_upper')
    second=prefix+('_shin' if foot else '_lower')
    put(canvas,first,origin=a,target=newroot,angle=an1)
    put(canvas,second,origin=b,target=joint,angle=an2)
    cap(canvas,a,newroot,2)
    cap(canvas,b,joint,2)
    if foot:
        put(canvas,prefix+'_foot',shift=(round(endpoint[0]-c[0]),round(endpoint[1]-c[1])))
        cap(canvas,c,endpoint,1)
    else:
        put(canvas,'free_hand',origin=c,target=endpoint,angle=an2)
        cap(canvas,c,endpoint,1)
    return {'upper_length':math.dist(newroot,joint),'lower_length':math.dist(joint,endpoint),
            'root':newroot,'joint':joint,'end':endpoint}

def cloth_frame(canvas, phase=0, body_y=0):
    a=np.asarray(parts['cloth']); moved=np.zeros_like(a)
    for y in range(96):
        amount=round(math.sin(phase+(y-64)*.18)*max(0,min(1,(y-66)/10)))
        if amount>=0:moved[y,amount:]=a[y,:96-amount]
        else:moved[y,:amount]=a[y,-amount:]
    canvas.alpha_composite(transform(Image.fromarray(moved),target=(0,body_y)))

def render_idle(i):
    f=Image.new('RGBA',(H,H)); phase=i*2*math.pi/8
    dy=[0,0,-1,-1,-1,0,0,0][i]
    hand_dx=[0,0,1,1,1,0,-1,-1][i]
    for name in ['far_thigh','far_shin','far_foot','near_thigh','near_shin','near_foot']:
        put(f,name)
    put(f,'body',shift=(0,dy))
    put(f,'staff');put(f,'staff_arm')
    put(f,'free_upper');put(f,'free_lower',shift=(hand_dx,0));put(f,'free_hand',shift=(hand_dx,0))
    cloth_frame(f,phase)
    put(f,'head')
    return f

def render_walk(i):
    f=Image.new('RGBA',(H,H));dy=[1,2,1,1,1,2,1,1][i]
    near_x=[34,37,41,45,46,43,39,36];near_y=[85,83,82,84,85,85,85,85]
    far_x=[56,53,49,46,44,46,50,54];far_y=[84,84,84,84,84,82,81,83]
    joints={}
    for name,x,y in [('far',far_x[i],far_y[i]),('near',near_x[i],near_y[i])]:
        p=leg_data[name]
        joints[name]=limb(f,name,p,(p[0][0],p[0][1]+dy),(x,y),True)
    put(f,'body',shift=(0,dy))
    cloth_frame(f,i*math.pi/4,dy)
    for name in ['staff','staff_arm']:
        put(f,name,shift=(0,dy-1))
    swing=[0,1,2,1,0,-1,-2,-1][i]
    # The free arm moves from immutable cutouts, in a restrained pendulum.
    for name in ['free_upper','free_lower','free_hand']:
        put(f,name,origin=(31,45),target=(31,45+dy),angle=swing*3)
    put(f,'head',shift=(0,dy))
    qa.append({'clip':'walk','frame':i,'joints':joints,'foot_lift_near':85-near_y[i],'foot_lift_far':84-far_y[i]})
    return f

def render_cast(i):
    f=Image.new('RGBA',(H,H))
    for name in ['far_thigh','far_shin','far_foot','near_thigh','near_shin','near_foot','body','staff','staff_arm']:
        put(f,name)
    cloth_frame(f,0)
    # Shoulder is fixed. Wrist targets stay within the original two-bone reach.
    wrists=[(28,66),(30,64),(35,61),(42,55),(50,49),(50,49),(45,54),(36,61),(30,65),(28,66)]
    q=limb(f,'free',arm_data,arm_data[0],wrists[i])
    put(f,'head')
    qa.append({'clip':'cast','frame':i,'joints':{'free_arm':q}})
    return f

