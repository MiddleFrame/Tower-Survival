from pathlib import Path
from PIL import Image
import numpy as np
import struct,json

HERE=Path(__file__).parent
report={}
for raw in sorted((HERE/'rig').glob('*.raw')):
    data=raw.read_bytes(); size,count=struct.unpack('<ii',data[:8])
    arr=np.frombuffer(data[8:],dtype=np.uint8).reshape(count,size,size,4)[:,::-1]
    folder=raw.with_suffix('');folder.mkdir(exist_ok=True)
    frames=[Image.fromarray(a.copy(),'RGBA') for a in arr]
    previews=[]
    for i,frame in enumerate(frames):
        frame.save(folder/f'frame-{i:02d}.png')
        bg=Image.new('RGBA',frame.size,(32,35,45,255));bg.alpha_composite(frame)
        previews.append(bg.convert('RGB').resize((size*3,size*3),Image.Resampling.NEAREST))
    duration=100 if raw.stem=='idle' else 70 if raw.stem in ('walk','run') else 60
    durations=[duration]*count
    if raw.stem in ('attack','hurt'):durations[-1]=450
    previews[0].save(HERE/f'rig-{raw.stem}.gif',save_all=True,append_images=previews[1:],duration=durations,loop=0,optimize=False)
    indices=[0,2,4,6,8,count-1]
    contact=Image.new('RGB',(size*2*3,size*2*2),(32,35,45))
    for k,index in enumerate(indices):contact.paste(previews[index].resize((size*2,size*2),Image.Resampling.NEAREST),((k%3)*size*2,(k//3)*size*2))
    contact.save(HERE/f'rig-{raw.stem}-contact.png')
    report[raw.stem]={'frames':count,'size':size,'opaque_colors':len(set(tuple(px) for a in arr for px in a.reshape(-1,4) if px[3])),'alpha':np.unique(arr[:,:,:,3]).tolist()}
(HERE/'rig-qa.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps(report,indent=2))
