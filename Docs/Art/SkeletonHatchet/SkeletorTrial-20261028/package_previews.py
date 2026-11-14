from pathlib import Path
from PIL import Image,ImageDraw,ImageFont
import json,hashlib
import numpy as np
p=Path(__file__).parent
bg=(32,35,45,255)
font=ImageFont.truetype(r'C:\Windows\Fonts\segoeui.ttf',16)
report={'tool':'Skeletor actual GPU renders','source_preserved':True,'unity_imported':False,'accepted':False,'animations':{}}
pools={}
for action in ['walk','attack']:
    for algorithm in ['cleanedge','omniscale','nns']:
        name=action+'-'+algorithm
        originals=[Image.open(f).convert('RGBA') for f in sorted((p/name).glob('frame-*.png'))]
        assert len(originals)==12
        frames=[]
        for im in originals:
            back=Image.new('RGBA',im.size,bg);back.alpha_composite(im)
            frames.append(back.convert('RGB').resize((480,480),Image.Resampling.NEAREST))
        timing=[80]*12 if action=='walk' else [220,100,90,140,50,40,60,100,100,100,80,220]
        frames[0].save(p/(name+'.gif'),save_all=True,append_images=frames[1:],duration=timing,loop=0,optimize=False,disposal=2)
        pools[name]=frames
        sheet=Image.new('RGBA',(640,480),bg)
        for i,im in enumerate(originals):sheet.alpha_composite(im,((i%4)*160,(i//4)*160))
        sheet.convert('RGB').save(p/(name+'-all-native.png'))
        report['animations'][name]={'frames':len(frames),'cell':[160,160],'durations':timing,'alpha_values':sorted(set(v for im in originals for v in np.unique(np.array(im)[:,:,3]).tolist()))}
    comparison=[]
    for i in range(12):
        canvas=Image.new('RGB',(960,352),bg[:3]);draw=ImageDraw.Draw(canvas)
        for j,algorithm in enumerate(['cleanedge','omniscale','nns']):
            draw.text((320*j+10,8),'Skeletor: '+algorithm,font=font,fill='white')
            frame=pools[action+'-'+algorithm][i].resize((320,320),Image.Resampling.NEAREST)
            canvas.paste(frame,(320*j,32))
        comparison.append(canvas)
    comparison[0].save(p/('skeletor-'+action+'-comparison.gif'),save_all=True,append_images=comparison[1:],duration=timing,loop=0,disposal=2,optimize=False)
source=Image.open(p.parent/'skeleton-hatchet-approved-96.png').convert('RGBA')
baseline=Image.open(p/'unposed-baseline.png').convert('RGBA')
expected=Image.new('RGBA',baseline.size);expected.paste(source,(32,32))
a,b=np.array(baseline),np.array(expected)
assert np.array_equal(a[:,:,3],b[:,:,3])
assert np.array_equal(a[a[:,:,3]>0],b[b[:,:,3]>0])
report['unposed_pixels_exact']=True
(p/'qa.json').write_text(json.dumps(report,indent=2))
print('Packaged six Skeletor sequences and two comparisons; baseline exact')
