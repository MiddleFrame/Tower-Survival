"""Animate immutable cutouts with rigid transforms, never scanline displacement."""
from pathlib import Path
import math,json,hashlib,base64
import numpy as np
from PIL import Image,ImageDraw
import rig_base as rig

ROOT=Path(__file__).resolve().parent
N=128
Y,X=np.indices((N,N))
cast=Image.open(ROOT.parent/'ExpressiveTrial-20260912/cast-key-128.png').convert('RGBA')
cache={}

def scale2x(a):
    p=np.pad(a,((1,1),(1,1),(0,0)),mode='edge')
    b,d,e,f,h=p[:-2,1:-1],p[1:-1,:-2],a,p[1:-1,2:],p[2:,1:-1]
    eq=lambda x,y:np.all(x==y,axis=2)
    active=~eq(b,h)&~eq(d,f)
    out=np.repeat(np.repeat(a,2,0),2,1)
    for oy,ox,c1,c2 in [(0,0,d,b),(0,1,b,f),(1,0,d,h),(1,1,h,f)]:
        out[oy::2,ox::2]=np.where((active&eq(c1,c2))[...,None],c1,e)
    return out

def transform(image,origin=(0,0),target=(0,0),angle=0):
    # Whole details share one transform; intermediate Scale2x adds no colors.
    # This is a simplified pixel-aware rotation, not full Aseprite RotSprite.
    angle=round(angle/3)*3
    tx,ty=map(round,target);ox,oy=origin
    if angle==0:
        f=Image.new('RGBA',(N,N));f.alpha_composite(image,(round(tx-ox),round(ty-oy)));return f
    key=id(image)
    if key not in cache:
        a=np.asarray(image)
        for _ in range(3):a=scale2x(a)
        cache[key]=(image,Image.fromarray(a))
    large=cache[key][1];r=math.radians(angle);c,s=math.cos(r),math.sin(r)
    return large.transform((N,N),Image.Transform.AFFINE,
      (8*c,8*s,8*(ox-c*tx-s*ty),-8*s,8*c,8*(oy+s*tx-c*ty)),resample=Image.Resampling.NEAREST)

def old_transform(image,origin=(0,0),target=(0,0),angle=0):
    return transform(image,origin,(target[0]+16,target[1]+16),angle)
rig.transform=old_transform

def poly(points):
    m=Image.new('1',(N,N));ImageDraw.Draw(m).polygon(points,fill=1);return np.asarray(m).astype(bool)

def cut(image,mask):
    a=np.array(image);a[~mask]=0;return Image.fromarray(a)

def patch(frame,image,at,to,radius=2):
    x,y=at;xx,yy=map(round,to)
    p=image.crop((x-radius,y-radius,x+radius+1,y+radius+1))
    frame.alpha_composite(p,(xx-radius,yy-radius))

# Split only at actual joints; legs in resting loops reuse the exact pixels.
regions={
 'arm':poly([(75,53),(81,51),(96,51),(98,32),(123,32),(123,71),(105,71),(96,64),(82,63),(75,60)]),
 'head':(Y<54)&(X>=43)&(X<=89),
 'cape':poly([(17,54),(41,52),(47,54),(43,62),(35,69),(15,69)]),
 'skirt':poly([(51,76),(66,76),(66,83),(65,91),(59,96),(54,89)]),
 'near_thigh':poly([(47,76),(54,77),(51,84),(49,90),(42,92),(40,87)]),
 'near_shin':poly([(41,86),(49,89),(41,98),(37,104),(28,105),(28,100)]),
 'near_foot':(Y>=101)&(X<45),
 'far_thigh':poly([(65,76),(69,74),(82,84),(81,89),(74,91),(72,86),(66,82)]),
 'far_shin':poly([(73,86),(81,87),(79,94),(78,103),(71,104),(70,98)]),
 'far_foot':(Y>=100)&(X>=68),
}
labels=np.full((N,N),'body',dtype='U20')
for name,m in regions.items():labels[m]=name
# Any remaining lower-leg pixels follow their limb, never the torso.
labels[(labels=='body')&(Y>=90)&(X<46)&(X>28)]='near_shin'
labels[(labels=='body')&(Y>=88)&(X>=70)]='far_shin'
parts={name:cut(cast,labels==name) for name in np.unique(labels)}
for name,im in parts.items():im.save(ROOT/'Parts'/('cast-'+name+'.png'))
legs={'near':((50,79),(45,88),(33,102)), 'far':((67,78),(77,86),(75,101))}

def leg(frame,name,shift=(0,0),root_shift=(0,0)):
    a,b,c=legs[name];root=(a[0]+root_shift[0],a[1]+root_shift[1]);end=(c[0]+shift[0],c[1]+shift[1])
    if shift==(0,0) and root_shift==(0,0):
        for suffix in ['thigh','shin','foot']:frame.alpha_composite(parts[name+'_'+suffix])
        return
    joint=rig.ik(root,end,math.dist(a,b),math.dist(b,c),side=1)
    for suffix,o,t,an in [('thigh',a,root,rig.point_angle(root,joint)-rig.point_angle(a,b)),('shin',b,joint,rig.point_angle(joint,end)-rig.point_angle(b,c))]:
        frame.alpha_composite(transform(parts[name+'_'+suffix],o,t,an))
    frame.alpha_composite(transform(parts[name+'_foot'],target=shift))
    for o,t in [(a,root),(b,joint),(c,end)]:patch(frame,cast,o,t,1)

def cast_pose(angle=0,phase=0,step=0,lift=0,lean=0,body_y=0):
    # No scaling or warping. In hold/ready, the legs remain byte-identical.
    frame=Image.new('RGBA',(N,N));dx=round(lean);dy=round(body_y)
    leg(frame,'near');leg(frame,'far',(round(step),round(lift)))
    for name,pivot,turn in [('cape',(43,56),9*math.sin(phase)),('body',(0,0),0),('head',(66,52),3*math.sin(phase)),('arm',(77,56),angle),('skirt',(59,77),6*math.sin(phase+.6)-3)]:
        frame.alpha_composite(transform(parts[name],pivot,(pivot[0]+dx,pivot[1]+dy),turn))
    patch(frame,cast,(77,56),(77+dx,56+dy),2)
    patch(frame,cast,(64,54),(64+dx,54+dy),1)
    return frame

def idle(i):
    p=i*math.tau/12;f=Image.new('RGBA',(N,N))
    for name in rig.parts:
        if name not in ['head','cloth','free_upper','free_lower','free_hand']:rig.put(f,name)
    rig.put(f,'cloth',origin=(45,64),target=(45,64),angle=6*math.sin(p))
    for name in ['free_upper','free_lower','free_hand']:
        rig.put(f,name,origin=(31,45),target=(31,45),angle=6*math.sin(p))
    rig.cap(f,(31,45),(31,45),2)
    rig.put(f,'head',origin=(48,40),target=(48,40),angle=3*math.sin(p-.5))
    rig.cap(f,(48,41),(48,41),1)
    return f

def walk(i):
    p=i*math.tau/12;f=Image.new('RGBA',(N,N));dy=round(.8*(1-math.cos(2*p)))
    for name,offset in [('far',0),('near',math.pi)]:
        points=rig.leg_data[name];ph=p+offset
        tx=(51 if name=='far' else 40)+4*math.cos(ph)
        ty=points[2][1]-2*max(0,-math.sin(ph))
        rig.limb(f,name,points,(points[0][0],points[0][1]+dy),(tx,ty),True)
    for name in ['body','staff','staff_arm']:rig.put(f,name,shift=(0,dy))
    rig.put(f,'cloth',origin=(45,64),target=(45,64+dy),angle=6*math.sin(p))
    for name in ['free_upper','free_lower','free_hand']:
        rig.put(f,name,origin=(31,45),target=(31,45+dy),angle=9*math.sin(p))
    rig.cap(f,(31,45),(31,45+dy),2)
    rig.put(f,'head',shift=(0,dy))
    return f

# Readiness has a narrower stance. A short forward foot placement accompanies
# the raising arm and a temporary upper-body anticipation, then settles.
enter=[]
for angle,step,lift,lean,dy,phase in [(48,-4,0,0,0,0),(45,-4,-1,-1,0,.4),(36,-3,-2,-1,1,.8),(27,-2,-2,0,1,1.2),(15,-1,-1,1,1,.8),(6,0,0,1,0,.4),(0,0,0,0,0,0)]:
    enter.append(cast_pose(angle,phase,step,lift,lean,dy))
exit_frames=[]
for angle,step,lift,lean,dy,phase in [(0,0,0,0,0,0),(6,0,-1,1,0,-.4),(18,-1,-2,0,1,-.8),(30,-2,-2,-1,1,-1.2),(39,-3,-1,-1,0,-.8),(45,-4,0,0,0,-.4),(48,-4,0,0,0,0)]:
    exit_frames.append(cast_pose(angle,phase,step,lift,lean,dy))

clips={
 'idle':{'frames':[idle(i) for i in range(12)],'ms':120,'loop':True},
 'walk':{'frames':[walk(i) for i in range(12)],'ms':90,'loop':True},
 'cast-ready':{'frames':[cast_pose(48+3*math.sin(i*math.tau/12),i*math.tau/12,step=-4) for i in range(12)],'ms':110,'loop':True},
 'cast-enter':{'frames':enter,'ms':100,'loop':False},
 'cast-hold':{'frames':[cast_pose(-3*math.sin(i*math.tau/12),i*math.tau/12) for i in range(12)],'ms':100,'loop':True},
 'cast-exit':{'frames':exit_frames,'ms':100,'loop':False},
}
release_names=[]
for held in range(12):
    name=f'cast-release-from-{held:02}';p=held*math.tau/12
    if p>math.pi:p-=math.tau
    poses=[]
    for j,(angle,lean) in enumerate([(0,0),(-3,1),(-6,2),(-3,1),(0,0),(0,0)]):
        fade=1-j/5
        poses.append(cast_pose(angle-3*math.sin(p)*fade,p*fade,lean=lean))
    clips[name]={'frames':poses,'ms':70,'loop':False,'release_frame':2};release_names.append(name)
clips['cast-release']={**clips[release_names[0]],'frames':list(clips[release_names[0]]['frames'])}

def remove_specks(frame):
    a=np.array(frame);seen=np.zeros((N,N),bool);visible=a[...,3]>0;removed=0
    for y,x in zip(*np.where(visible)):
        if seen[y,x]:continue
        queue=[(y,x)];seen[y,x]=True;component=[]
        while queue:
            yy,xx=queue.pop();component.append((yy,xx))
            for dy in [-1,0,1]:
                for dx in [-1,0,1]:
                    ny,nx=yy+dy,xx+dx
                    if 0<=ny<N and 0<=nx<N and visible[ny,nx] and not seen[ny,nx]:
                        seen[ny,nx]=True;queue.append((ny,nx))
        if len(component)<=3:
            for yy,xx in component:a[yy,xx]=0
            removed+=len(component)
    return Image.fromarray(a),removed

manifest={'status':'rigid_animation_trial_not_imported','cell':128,
 'cast_lifecycle':['cast-ready','cast-enter','cast-hold','cast-release','cast-exit','cast-ready'],
 'hold_duration':'controlled externally; loop cast-hold until requested release',
 'cast_carry_pose_changed':True,'clips':[]}
manifest['release_for_hold_frame']=release_names
qa=[]
for name,c in clips.items():
    frames=[];removed=[]
    for f in c['frames']:
        clean,n=remove_specks(f);frames.append(clean);removed.append(n)
    c['frames']=frames
    count=len(frames);cols=4;rows=math.ceil(count/cols)
    atlas=Image.new('RGBA',(cols*N,rows*N));folder=ROOT/'Frames'/name;folder.mkdir(exist_ok=True)
    board=Image.new('RGB',(cols*256,rows*278),'#303947');d=ImageDraw.Draw(board);display=[]
    for i,f in enumerate(frames):
        f.save(folder/f'{name}-{i:02}.png');atlas.alpha_composite(f,(i%cols*N,i//cols*N))
        enlarged=f.resize((256,256),Image.Resampling.NEAREST);x,y=i%cols*256,i//cols*278
        board.paste(enlarged,(x,y+22),enlarged);d.text((x+6,y+5),f'{name} {i+1}/{count}',fill='white')
        bg=Image.new('RGBA',(N,N),'#303947');bg.alpha_composite(f);display.append(bg.convert('RGB').resize((512,512),Image.Resampling.NEAREST))
        a=np.asarray(f);assert set(np.unique(a[...,3]))<={0,255}
        assert not (a[0,:,3].any() or a[-1,:,3].any() or a[:,0,3].any() or a[:,-1,3].any())
    atlas.save(ROOT/'Atlases'/f'{name}.png');board.save(ROOT/'Previews'/f'{name}-contact.png')
    duration=[c['ms']]*count
    if not c['loop']:duration[-1]=500
    display[0].save(ROOT/'Previews'/f'{name}.gif',save_all=True,append_images=display[1:],duration=duration,loop=0,disposal=2,optimize=False)
    spec={'name':name,'count':count,'columns':4,'cell':128,'ms':c['ms'],'loop':c['loop']}
    if 'release_frame' in c:spec['release_frame']=c['release_frame']
    manifest['clips'].append(spec)
    qa.append({'name':name,'frames':count,'removed_specks':removed,'bbox':[list(f.getbbox()) for f in frames]})

# The phase-zero boundaries are identical; arbitrary held phase can differ by a
# small pose displacement when the runtime requests release immediately.
def same(a,b):return np.array_equal(np.asarray(a),np.asarray(b))
assert same(clips['cast-enter']['frames'][-1],clips['cast-hold']['frames'][0])
assert same(clips['cast-hold']['frames'][0],clips['cast-release']['frames'][0])
assert same(clips['cast-release']['frames'][-1],clips['cast-exit']['frames'][0])
assert same(clips['cast-exit']['frames'][-1],clips['cast-ready']['frames'][0])
for i,name in enumerate(release_names):
    assert same(clips['cast-hold']['frames'][i],clips[name]['frames'][0])
    assert same(clips[name]['frames'][-1],clips['cast-exit']['frames'][0])

def chain(hold_frames):
    result=[]
    for name in ['cast-enter','cast-hold','cast-release','cast-exit']:
        if name=='cast-release':name=release_names[(hold_frames-1)%12]
        fs=clips[name]['frames'];steps=hold_frames if name=='cast-hold' else len(fs)
        label='cast-release' if name.startswith('cast-release-from') else name
        for i in range(steps):result.append((fs[i%len(fs)],clips[name]['ms'],label))
    return result
for secs in [1,3]:
    seq=chain(secs*10);display=[];duration=[]
    for f,ms,state in seq:
        b=Image.new('RGBA',(128,148),'#303947');b.alpha_composite(f,(0,20));ImageDraw.Draw(b).text((7,4),state,fill='white')
        display.append(b.convert('RGB').resize((512,592),Image.Resampling.NEAREST));duration.append(ms)
    duration[-1]+=500
    display[0].save(ROOT/'Previews'/f'cast-demo-{secs}s.gif',save_all=True,append_images=display[1:],duration=duration,loop=0,optimize=False,disposal=2)

(ROOT/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
(ROOT/'qa.json').write_text(json.dumps({'clips':qa,'phase_zero_boundaries_exact':True,'all_12_hold_release_boundaries_exact':True,'alpha_binary':True,
 'master_unchanged_sha256':hashlib.sha256(rig.MASTER.read_bytes()).hexdigest()},indent=2)+'\n')
data={**manifest,'images':{c['name']:'data:image/png;base64,'+base64.b64encode((ROOT/'Atlases'/f"{c['name']}.png").read_bytes()).decode() for c in manifest['clips']}}
(ROOT/'viewer-data.js').write_text('const DATA='+json.dumps(data)+';\n')
print('Built',sum(len(c['frames']) for c in clips.values()),'frames in',len(clips),'clips.')
