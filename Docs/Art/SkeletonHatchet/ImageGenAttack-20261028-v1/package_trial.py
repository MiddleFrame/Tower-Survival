from pathlib import Path
import sys,json,hashlib
import numpy as np
from scipy import ndimage
from PIL import Image,ImageSequence
scratch=Path(sys.argv[1])
sys.path.insert(0,str(scratch/'pixel-art-fixer/python'))
from pixelfixer.api import process
p=Path(__file__).parent
source=Image.open(p.parent/'skeleton-hatchet-approved-96.png').convert('RGBA')
pal=np.unique(np.array(source)[np.array(source)[:,:,3]>0,:3],axis=0)
palette=Image.new('P',(1,1)); palette.putpalette(pal.flatten().tolist()+pal[0].tolist()*(256-len(pal)))
first=Image.open(p/'hatchet-attack-generated-sheet.png').convert('RGBA')
repair=Image.open(p/'hatchet-attack-windup-repair-sheet.png').convert('RGBA')
assert first.size==repair.size
cells=[]
for index in range(8):
    image=repair if index==2 else first
    col,row=index%4,index//4
    box=(round(image.width*col/4),round(image.height*row/2),round(image.width*(col+1)/4),round(image.height*(row+1)/2))
    crop=image.crop(box)
    canvas=Image.new('RGBA',(444,444));canvas.paste(crop,(0,0))
    cells.append(canvas)
raw_folder=p/'raw-cells';raw_folder.mkdir(exist_ok=True)
for i,im in enumerate(cells):im.save(raw_folder/f'cell-{i:02}.png')
selection=[0,1,2,4,5,6,0]
times=[240,110,170,60,100,140,200]
bg=(32,35,45)
def save_gif(images,path,timing,scale=1):
    frames=[]
    for image in images:
        canvas=Image.new('RGBA',image.size,bg+(255,));canvas.alpha_composite(image)
        frames.append(canvas.convert('RGB').resize((image.width*scale,image.height*scale),Image.Resampling.NEAREST))
    frames[0].save(path,save_all=True,append_images=frames[1:],duration=timing,loop=0,disposal=2,optimize=False)
save_gif(cells,p/'imagegen-all-eight-raw.gif',[140]*8)
save_gif([cells[i] for i in selection],p/'imagegen-selected-raw.gif',times)
native=[];report=[]
folder=p/'native-frames';folder.mkdir(exist_ok=True)
for frame_index,index in enumerate(selection):
    image=cells[index]
    arr=np.array(image)
    mask=arr[:,:,3]>=128
    row_counts=mask.sum(axis=1)
    y=int(np.where(row_counts>=4)[0].max())
    dy=432-y
    aligned=Image.new('RGBA',image.size)
    aligned.paste(image,(0,dy))
    result=process(np.array(aligned),force_step=4)
    import io
    frame=Image.open(io.BytesIO(result['png'])).convert('RGBA')
    a=np.array(frame)
    quantized=frame.convert('RGB').quantize(palette=palette,dither=Image.Dither.NONE).convert('RGBA')
    qa=np.array(quantized);qa[:,:,3]=np.where(a[:,:,3]>=128,255,0).astype('uint8')
    labels,count=ndimage.label(qa[:,:,3]>0,structure=np.ones((3,3)))
    sizes=np.bincount(labels.ravel())
    tiny=np.flatnonzero((sizes<=2)&(np.arange(len(sizes))>0))
    removed=int(np.count_nonzero(np.isin(labels,tiny)))
    qa[np.isin(labels,tiny),3]=0
    qa[qa[:,:,3]==0,:3]=0
    frame=Image.fromarray(qa)
    canvas=Image.new('RGBA',(128,128));canvas.paste(frame,(8,8))
    native.append(canvas)
    canvas.save(folder/f'attack-{frame_index:02}.png')
    report.append({'frame':frame_index,'source_cell':index,'source_baseline':y,'vertical_alignment':dy,'native_bbox':canvas.getbbox(),'isolated_pixels_removed':removed})
save_gif(native,p/'imagegen-attack-grid.gif',times,3)
save_gif(native,p/'imagegen-attack-grid-slow.gif',[t*2 for t in times],3)
sheet=Image.new('RGBA',(128*len(native),128))
for i,im in enumerate(native):sheet.paste(im,(i*128,0))
sheet.save(p/'imagegen-attack-grid-sheet.png')
sheet.resize((sheet.width*3,sheet.height*3),Image.Resampling.NEAREST).save(p/'imagegen-attack-grid-sheet-3x.png')
raw=Image.new('RGBA',(444*4,444*2))
for i,im in enumerate(cells):raw.paste(im,((i%4)*444,(i//4)*444))
raw.save(p/'assembled-raw-sheet.png')
(p/'qa.json').write_text(json.dumps({'generated_size':first.size,'requested_size':[512,256],'native_generation':False,'palette_colors':len(pal),'original_cell_count':8,'selection':selection,'excluded_cell':3,'reason':'Hatchet touches/crosses the right edge in source cell 3. Final ready pose reuses the entire first frame.','timing_ms':times,'frames':report,'unity_imported':False,'accepted':False,'source_sha256':hashlib.sha256((p.parent/'skeleton-hatchet-approved-96.png').read_bytes()).hexdigest()},indent=2))
assert Image.open(p/'imagegen-attack-grid.gif').n_frames==len(selection)
print('Packaged',len(native),'frames; generated',first.size,'native',(128,128))
