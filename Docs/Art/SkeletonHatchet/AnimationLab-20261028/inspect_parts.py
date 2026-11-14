from pathlib import Path
from PIL import Image,ImageDraw
import numpy as np, struct
p=Path(__file__).parent
source=Image.open(p.parent/'skeleton-hatchet-approved-96.png').convert('RGBA')
d=(p/'rig/walk.raw.parts').read_bytes()
w,h=struct.unpack('<ii',d[:8]); ids=np.frombuffer(d[8:],dtype='<u2').reshape(h,w)
names=['Body','Head','Hair','ArmNearUpper','ArmNearLower','Weapon','ArmFarUpper','ArmFarLower','LegNearUpper','LegNearLower','FootNear','LegFarUpper','LegFarLower','FootFar']
canvas=Image.new('RGB',(96*3*4,110*3*4),(255,0,255))
for i,name in enumerate(names):
    a=np.array(source); a[(ids&(1<<i))==0]=0
    frame=Image.new('RGBA',source.size,(255,0,255,255));frame.alpha_composite(Image.fromarray(a))
    x,y=(i%4)*288,(i//4)*330
    canvas.paste(frame.resize((288,288),Image.Resampling.NEAREST).convert('RGB'),(x,y+35))
    ImageDraw.Draw(canvas).text((x+10,y+10),f'{i} {name}',fill=(0,0,0))
canvas.save(p/'parts-review.png')
