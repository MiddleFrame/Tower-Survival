"""Coherent whole-pose movement, animated cloth, and a split casting lifecycle."""
from pathlib import Path
import base64
import hashlib
import json
import math
import numpy as np
from PIL import Image, ImageDraw
import rig_base as rig

ROOT=Path(__file__).resolve().parent
N=128
for folder in ['Atlases','Frames','Previews']:(ROOT/folder).mkdir(exist_ok=True)
normal=Image.new('RGBA',(N,N));normal.alpha_composite(rig.source,(16,16))
cast=Image.open(ROOT/'cast-key-128.png').convert('RGBA')
Y,X=np.indices((N,N))

def polygon(points):
    mask=Image.new('1',(N,N));ImageDraw.Draw(mask).polygon(points,fill=1)
    return np.asarray(mask).astype(bool)

def part(image,mask):
    a=np.array(image);a[~mask]=0;return Image.fromarray(a)

def cloth_masks(image,casting):
    a=np.asarray(image);r,g,b=a[...,:3].astype(float).transpose(2,0,1)
    cloth=(b>=r*.98)&(r>g*1.05)
    ink=a[...,:3].max(2)<90
    if casting:
        cape=polygon([(18,56),(43,48),(48,53),(43,60),(34,70),(16,68)])
        skirt=polygon([(53,74),(66,75),(68,84),(63,96),(55,91),(51,82)])
    else:
        cape=polygon([(40,52),(53,51),(58,57),(52,63),(40,63)])
        skirt=polygon([(53,78),(70,78),(71,87),(67,99),(59,97),(54,89)])
    nearby=np.zeros((N,N),bool)
    for oy in [-1,0,1]:
        for ox in [-1,0,1]:
            nearby |= np.roll(np.roll(cloth&~ink,oy,0),ox,1)
    return [cape&(cloth|(ink&nearby))&(a[...,3]>0),skirt&(cloth|(ink&nearby))&(a[...,3]>0)]

def wind(image,phase,casting=False,amplitude=3):
    a=np.array(image);masks=cloth_masks(image,casting)
    output=a.copy()
    for mi,mask in enumerate(masks):
        output[mask]=0
        yy,xx=np.where(mask)
        if not len(yy):continue
        layer=np.zeros_like(a)
        # Root edge fixed; coherent translations of complete pixel rows/columns.
        # Cloth moves before the entire pose is displaced, so its waistband follows.
        if mi==1:
            top=int(yy.min())
            for row in np.unique(yy):
                gain=max(0,min(1,(row-top-3)/12))
                dx=round(amplitude*gain*math.sin(phase-(row-top)*.22))
                xs=np.where(mask[row])[0];layer[row,xs+dx]=a[row,xs]
        else:
            right=int(xx.max())
            for col in np.unique(xx):
                gain=max(0,min(1,(right-col-2)/15))
                dy=round(amplitude*gain*math.sin(phase+(right-col)*.22))
                ys=np.where(mask[:,col])[0];layer[ys+dy,col]=a[ys,col]
        visible=layer[...,3]>0;output[visible]=layer[visible]
    return Image.fromarray(output)

def pose_motion(image,phase,lean=0,amount=1):
    # One continuous inverse displacement field; no independent waist/torso cut.
    # Above the hips the body moves together. The displacement fades at the feet.
    weight=np.clip((106-Y)/28,0,1)
    dx=(round(1.5*math.sin(phase))*amount+lean)*weight
    dy=round(2*math.sin(phase))*amount*weight
    sx=np.clip(np.rint(X-dx).astype(int),0,N-1)
    sy=np.clip(np.rint(Y-dy).astype(int),0,N-1)
    return Image.fromarray(np.asarray(image)[sy,sx])

cast_arm_mask=polygon([(75,53),(81,51),(96,51),(98,32),(123,32),(123,71),(105,71),(96,64),(82,63),(75,60)])
cast_arm=part(cast,cast_arm_mask)
cast_without_arm=part(cast,~cast_arm_mask)

def rotate_local(image,origin,angle):
    t=math.radians(angle);c,s=math.cos(t),math.sin(t);x,y=origin
    return image.transform((N,N),Image.Transform.AFFINE,(c,s,x-c*x-s*y,-s,c,y+s*x-c*y),resample=Image.Resampling.NEAREST)

def casting_pose(angle,phase=0,lean=0):
    frame=cast_without_arm.copy();frame.alpha_composite(rotate_local(cast_arm,(77,56),angle))
    # Original shoulder pixels overlap the joint; no new body-colored fill.
    patch=cast.crop((73,53,80,60));frame.alpha_composite(patch,(73,53))
    frame=wind(frame,phase,True,3)
    return pose_motion(frame,phase,lean)

def idle(i):
    phase=i*math.tau/12
    frame=Image.new('RGBA',(N,N))
    for name in rig.parts:
        if name not in ['head','free_upper','free_lower','free_hand']:rig.put(frame,name)
    for name in ['free_upper','free_lower','free_hand']:
        rig.put(frame,name,origin=(31,45),target=(31,45),angle=4*math.sin(phase+.5))
    rig.cap(frame,(31,45),(31,45),2)
    rig.put(frame,'head',origin=(48,40),target=(48,40),angle=2*math.sin(phase-.5))
    rig.cap(frame,(48,41),(48,41),2)
    return pose_motion(wind(frame,phase,False,4),phase)

def walk(i):
    phase=i*math.tau/12
    # Continuous leg trajectories, full alternating contacts, max lift 3px.
    f=Image.new('RGBA',(128,128));dy=1+round(.8*(1-math.cos(phase*2)))
    for name,offset in [('far',0),('near',math.pi)]:
        p=rig.leg_data[name];ph=(phase+offset)%math.tau
        center=50 if name=='far' else 40
        tx=center+6*math.cos(ph)
        ty=p[2][1]-3*max(0,-math.sin(ph))
        rig.limb(f,name,p,(p[0][0],p[0][1]+dy),(tx,ty),True)
    rig.put(f,'body',shift=(0,dy));rig.cloth_frame(f,phase,dy)
    for name in ['staff','staff_arm']:rig.put(f,name,shift=(0,dy-1))
    for name in ['free_upper','free_lower','free_hand']:
        rig.put(f,name,origin=(31,45),target=(31,45+dy),angle=10*math.sin(phase))
    rig.put(f,'head',shift=(round(math.sin(phase)),dy))
    return wind(f,phase,False,3)

clips={
 'idle':{'frames':[idle(i) for i in range(12)],'ms':100,'loop':True},
 'walk':{'frames':[walk(i) for i in range(12)],'ms':80,'loop':True},
 'cast-ready':{'frames':[casting_pose(48,i*math.tau/12) for i in range(12)],'ms':100,'loop':True},
 'cast-enter':{'frames':[casting_pose(a) for a in [48,40,30,20,11,4,0]],'ms':80,'loop':False},
 'cast-hold':{'frames':[casting_pose(-3*math.sin(i*math.tau/12),i*math.tau/12) for i in range(12)],'ms':100,'loop':True},
 'cast-release':{'frames':[casting_pose(a,0,l) for a,l in [(0,0),(-3,1),(-6,3),(-4,2),(-1,1),(0,0)]],'ms':70,'loop':False,'release_frame':2},
 'cast-exit':{'frames':[casting_pose(a) for a in [0,4,11,20,30,40,48]],'ms':80,'loop':False},
}

# A release can begin on any held frame without snapping to phase zero.
release_names=[]
for held in range(12):
    name=f'cast-release-from-{held:02}'
    p=held*math.tau/12
    if p>math.pi:p-=math.tau
    poses=[]
    for j,(angle,lean) in enumerate([(0,0),(-3,1),(-6,3),(-4,2),(-1,1),(0,0)]):
        fade=1-j/5
        poses.append(casting_pose(angle-3*math.sin(p)*fade,p*fade,lean))
    clips[name]={'frames':poses,'ms':70,'loop':False,'release_frame':2}
    release_names.append(name)

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

manifest={'status':'expressive_animation_trial_not_imported','cell':128,
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
