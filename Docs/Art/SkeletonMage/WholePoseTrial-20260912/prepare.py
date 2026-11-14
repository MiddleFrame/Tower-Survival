"""Key and reduce a whole-pose sheet. No limb rig, mesh or scanline deformation."""
from pathlib import Path
import json,hashlib,base64
import numpy as np
from PIL import Image,ImageDraw
ROOT=Path(__file__).resolve().parent
SOURCE=ROOT/'idle-whole-pose-source.png'
source=np.array(Image.open(SOURCE).convert('RGB'))
palette=json.loads((ROOT.parent/'UpdateTrial-20260909/qa.json').read_text())['palette_by_material']
N=96
for folder in ['Frames','Previews']:(ROOT/folder).mkdir(exist_ok=True)
frames=[];offsets=[]
def key(a):
    r,g,b=a.astype(float).transpose(2,0,1)
    return (r>180)&(b>180)&(g<100)
for i in range(6):
    h,w=source.shape[:2];cell=source[i//3*h//2:(i//3+1)*h//2,i%3*w//3:(i%3+1)*w//3]
    out=np.zeros((N,N,4),np.uint8)
    for y in range(N):
        for x in range(N):
            cy=int((y+.5)*len(cell)/N);cx=int((x+.5)*cell.shape[1]/N)
            sample=cell[max(0,cy-1):cy+2,max(0,cx-1):cx+2]
            bg=key(sample)
            if bg.mean()<.5:out[y,x]=[*np.median(sample[~bg],axis=0).astype(np.uint8),255]
    rgb=out[:,:,:3].astype(float);r,g,b=rgb.transpose(2,0,1);visible=out[:,:,3]>0
    groups=np.full((N,N),'bone',dtype='U10')
    groups[r>g*1.28]='wood'
    groups[(b>=r*.98)&(r>g*1.05)]='cloth'
    yy,xx=np.indices((N,N))
    groups[(g>r*1.2)&(b>r*1.2)&(g>70)&(xx>60)&(yy<45)]='crystal'
    groups[(r<50)&(g<65)]='outline'
    groups[rgb.max(2)<70]='outline'
    for material,colors in palette.items():
        mask=visible&(groups==material);choices=np.array([list(bytes.fromhex(c[1:])) for c in colors])
        distance=((rgb[mask,None,:]-choices[None,:,:])**2).sum(2)
        out[:,:,:3][mask]=choices[np.argmin(distance,axis=1)]
    f=Image.fromarray(out)
    # One integer translation of the whole frame locks the supporting foot.
    bbox=f.getbbox();yy,xx=np.where((out[:,:,3]>0)&(np.indices((N,N))[0]>=bbox[3]-4)&(np.indices((N,N))[1]<50))
    anchor=(round(float(np.median(xx))),bbox[3])
    if i==0:reference=anchor
    dx,dy=reference[0]-anchor[0],reference[1]-anchor[1]
    aligned=Image.new('RGBA',(N,N));aligned.alpha_composite(f,(dx,dy))
    assert aligned.getbbox()[1]>0 and aligned.getbbox()[3]<96
    frames.append(aligned);offsets.append([dx,dy]);aligned.save(ROOT/'Frames'/f'idle-{i:02}.png')
atlas=Image.new('RGBA',(288,192));board=Image.new('RGB',(864,620),'#303947');draw=ImageDraw.Draw(board)
for i,f in enumerate(frames):
    atlas.alpha_composite(f,(i%3*N,i//3*N))
    z=f.resize((288,288),Image.Resampling.NEAREST);board.paste(z,(i%3*288,i//3*310+22),z)
    draw.text((i%3*288+8,i//3*310+5),str(i+1),fill='white')
atlas.save(ROOT/'idle-whole-pose-atlas.png');board.save(ROOT/'Previews/contact.png')
display=[]
sequence=[0,1,3,4,5]
durations=[200,180,180,220,200]
for index in sequence:
    f=frames[index]
    bg=Image.new('RGBA',(96,96),'#303947');bg.alpha_composite(f)
    display.append(bg.convert('RGB').resize((480,480),Image.Resampling.NEAREST))
display[0].save(ROOT/'Previews/idle.gif',save_all=True,append_images=display[1:],duration=durations,loop=0,disposal=2,optimize=False)
qa={'source_size':[source.shape[1],source.shape[0]],'cell':96,'frames':6,'whole_frame_offsets':offsets,'no_deformation':True,'palette_colors':len(set(tuple(c) for f in frames for c in np.array(f)[:,:,:3][np.array(f)[:,:,3]>0])),
'changed_rgba_positions_including_motion':[int(np.any(np.array(frames[i])!=np.array(frames[(i+1)%6]),axis=2).sum()) for i in range(6)],'source_sha256':hashlib.sha256(SOURCE.read_bytes()).hexdigest()}
(ROOT/'qa.json').write_text(json.dumps(qa,indent=2)+'\n')
clip={'cell':96,'columns':3,'frame_indices':sequence,'durations_ms':durations,'excluded_source_frame':2}
(ROOT/'manifest.json').write_text(json.dumps(clip,indent=2)+'\n')
(ROOT/'viewer-data.js').write_text('const SHEET="data:image/png;base64,'+base64.b64encode((ROOT/'idle-whole-pose-atlas.png').read_bytes()).decode()+'";\nconst CLIP='+json.dumps(clip)+';\n')
print(json.dumps(qa))
