"""Check native payload and the exact resting-leg regression reported by user."""
from pathlib import Path
import hashlib,json
import numpy as np
from PIL import Image,ImageDraw
ROOT=Path(__file__).resolve().parent
palette=json.loads((ROOT.parent/'UpdateTrial-20260909/qa.json').read_text())['palette_by_material']
allowed={tuple(bytes.fromhex(c[1:])) for colors in palette.values() for c in colors}
bone=[tuple(bytes.fromhex(c[1:])) for c in palette['bone']]
Y,X=np.indices((128,128))
report={'frames':0,'binary_alpha':True,'original_palette_only':True,'no_canvas_edge_clipping':True,'resting_lower_leg_pixel_changes':{}}
for p in (ROOT/'Frames').glob('*/*.png'):
    a=np.array(Image.open(p));assert a.shape==(128,128,4)
    assert set(np.unique(a[:,:,3]))=={0,255}
    assert {tuple(c) for c in a[:,:,:3][a[:,:,3]>0]}<=allowed
    assert not a[[0,-1],:,3].any() and not a[:,[0,-1],3].any()
    report['frames']+=1
for name in ['cast-ready','cast-hold']:
    extracted=[]
    for p in sorted((ROOT/'Frames'/name).glob('*.png')):
        a=np.array(Image.open(p));mask=np.zeros((128,128),bool)
        for c in bone:mask|=np.all(a[:,:,:3]==c,axis=2)
        mask&=(Y>=83)&(X<90)&(a[:,:,3]>0)
        extracted.append(np.where(mask[:,:,None],a,0))
    delta=[int(np.any(a!=extracted[0],axis=2).sum()) for a in extracted]
    assert not any(delta),(name,delta)
    report['resting_lower_leg_pixel_changes'][name]=delta
master=ROOT.parent/'UpdateTrial-20260909/skeleton-mage-idle-96.png'
report['master_sha256']=hashlib.sha256(master.read_bytes()).hexdigest()
assert report['master_sha256']=='e96cbf79b24eb270f3dbccb1688ca7e598dedc21c3fc358081aef32ddde247b3'
frames=[]
for i in range(12):
    board=Image.new('RGBA',(256,150),'#303947');d=ImageDraw.Draw(board)
    d.text((8,4),'Before: scanline warp',fill='white');d.text((136,4),'Now: rigid parts',fill='white')
    for n,folder in enumerate([ROOT.parent/'ExpressiveTrial-20260912',ROOT]):
        im=Image.open(folder/'Frames/cast-ready'/f'cast-ready-{i:02}.png')
        board.alpha_composite(im,(n*128,22))
    frames.append(board.convert('RGB').resize((768,450),Image.Resampling.NEAREST))
frames[0].save(ROOT/'Previews/ready-before-after.gif',save_all=True,append_images=frames[1:],duration=110,loop=0,disposal=2,optimize=False)
(ROOT/'verification.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report))
