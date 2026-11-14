from pathlib import Path
import sys
from PIL import Image
import numpy as np
out=Path(__file__).parent
scratch=Path(sys.argv[1])
sys.path.insert(0,str(scratch/'pixel-art-fixer/python'))
sys.path.insert(0,str(scratch/'proper-pixel-art'))
from pixelfixer.reconstruct import reconstruct
from pixelfixer.api import process
from proper_pixel_art import pixelate_video,PixelateConfig,ColorConfig,PaletteConfig,MeshConfig
for name,size in [('walk',96),('hurt',128)]:
    folder=out/f'rife-{name}-fixer';folder.mkdir(exist_ok=True)
    frames=[]
    for i,path in enumerate(sorted((out/f'rife-{name}-high').glob('*.png'))):
        image=Image.fromarray(reconstruct(np.array(Image.open(path).convert('RGBA')),384/size,384/size,size,size,use_phase=False,use_snap=False))
        image.save(folder/f'frame-{i:02}.png')
        frames.append(image.convert('RGB').resize((480,480),Image.Resampling.NEAREST))
    times=[90]*len(frames)
    if name=='hurt':times[-1]=450
    frames[0].save(out/f'rife-{name}-fixer.gif',save_all=True,append_images=frames[1:],duration=times,loop=0,optimize=False)
    print(name,'fixer',len(frames),flush=True)
config=PixelateConfig(pixel_width=4,initial_upscale_factor=1,scale_result=5,mesh=MeshConfig(crop_border_pixels=0),colors=ColorConfig(method='palette',palette=PaletteConfig(num_colors=77)))
pixelate_video(out/'rife-walk-high.gif',out/'rife-walk-ppa.gif',config=config)

for name in ['rife-walk','tooncrafter-walk','tooncrafter-attack','tooncrafter-attack-standard','tooncrafter-walk-standard']:
    inputs=out/(name+'-high' if name=='rife-walk' else name)
    if not inputs.exists():continue
    target=out/(name+'-fixer-v2');target.mkdir(exist_ok=True)
    native=[]
    for i,path in enumerate(sorted(inputs.glob('*.png'))):
        result=process(np.array(Image.open(path).convert('RGBA')),force_step=4 if name=='rife-walk' else 3 if name.endswith('-standard') else 2)
        (target/f'frame-{i:02}.png').write_bytes(result['png'])
        native.append(Image.open(target/f'frame-{i:02}.png').convert('RGB'))
    scale=5 if name=='rife-walk' else 4
    frames=[im.resize((im.width*scale,im.height*scale),Image.Resampling.NEAREST) for im in native]
    frames[0].save(out/(name+'-fixer-v2.gif'),save_all=True,append_images=frames[1:],duration=90,loop=0,optimize=False)
    print(name,'two-stage fixer',len(frames),flush=True)
