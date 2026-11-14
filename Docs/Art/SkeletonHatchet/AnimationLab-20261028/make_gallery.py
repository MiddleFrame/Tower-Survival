from pathlib import Path
from PIL import Image,ImageSequence,ImageDraw,ImageFont
import json,hashlib,struct,math
import numpy as np

p=Path(__file__).parent
gallery=p/'Gallery';gallery.mkdir(exist_ok=True)
review=p/'Review';review.mkdir(exist_ok=True)
bg=(32,35,45)
font=ImageFont.truetype(r'C:\Windows\Fonts\segoeui.ttf',15)
small=ImageFont.truetype(r'C:\Windows\Fonts\segoeui.ttf',12)

def flatten(image):
    image=image.convert('RGBA')
    frame=Image.new('RGBA',image.size,bg+(255,));frame.alpha_composite(image)
    return frame.convert('RGB')

def frames(name):
    path=p/name
    return [flatten(im) for im in ImageSequence.Iterator(Image.open(path))]

def native(name):
    result=[]
    for image in frames(name):
        if image.size==(160,160):image=image.crop((16,16,144,144))
        elif image.size==(480,480):image=image.resize((160,160),Image.Resampling.NEAREST).crop((16,16,144,144))
        else:
            width=image.width//5
            image=image.resize((width,width),Image.Resampling.NEAREST)
            canvas=Image.new('RGB',(128,128),bg)
            canvas.paste(image,((128-image.width)//2,(128-image.height)//2))
            image=canvas
        result.append(image)
    return result

def contact(name,images):
    w,h=images[0].size
    sheet=Image.new('RGB',(w*4,(h+18)*math.ceil(len(images)/4)),bg)
    for i,image in enumerate(images):
        x,y=(i%4)*w,(i//4)*(h+18)
        sheet.paste(image,(x,y+18));ImageDraw.Draw(sheet).text((x+4,y),str(i),fill='white',font=small)
    sheet.save(review/(name+'-all-native.png'))
    sheet.resize((sheet.width*2,sheet.height*2),Image.Resampling.NEAREST).save(review/(name+'-all-2x.png'))

def compare(output,entries,count=48):
    pools=[native(file) for title,note,file in entries]
    for (title,note,file),images in zip(entries,pools):contact(Path(file).stem,images)
    result=[]
    for tick in range(count):
        frame=Image.new('RGB',(256*len(entries),302),bg);draw=ImageDraw.Draw(frame)
        for i,((title,note,file),images) in enumerate(zip(entries,pools)):
            draw.text((i*256+12,6),title,font=font,fill=(245,245,245))
            draw.text((i*256+12,28),note,font=small,fill=(190,195,205))
            index=min(len(images)-1,int(tick/count*len(images)))
            frame.paste(images[index].resize((256,256),Image.Resampling.NEAREST),(i*256,46))
        result.append(frame)
    result[0].save(gallery/output,save_all=True,append_images=result[1:],duration=30,loop=0,optimize=False)

compare('01-walk-rigs.gif',[
 ('JatCool: риг','из одного утверждённого спрайта','rig-clean-walk.gif'),
 ('Aseprite MCP','слои + рецепт движения','mcp-walk-native.gif'),
 ('Риг + записанные AI-позы','готовые SDPose-тесты автора','rig-walk-recorded-ai-clean_3final.gif')])
compare('02-attack-rigs.gif',[
 ('JatCool: риг','из одного утверждённого спрайта','rig-clean-attack.gif'),
 ('Aseprite MCP','слои + ключи атаки','mcp-attack-native.gif')])

def interp_native(name):
    result=[]
    for image in frames(name):
        width=image.width//5
        height=image.height//5
        image=image.resize((width,height),Image.Resampling.NEAREST)
        canvas=Image.new('RGB',(128,128),bg);canvas.paste(image,((128-width)//2,(128-height)//2))
        result.append(canvas)
    return result

entries=[('RIFE','между готовыми кадрами','rife-walk.gif'),('RIFE + Pixel Art Fixer','сетка: исходные 96×96','rife-walk-fixer-v2.gif'),('RIFE + Proper Pixel Art','масштаб плывёт: 109×108','rife-walk-ppa.gif')]
result=[]
pools=[interp_native(e[2]) for e in entries]
for entry,images in zip(entries,pools):contact(Path(entry[2]).stem,images)
for i in range(8):
    frame=Image.new('RGB',(768,302),bg);draw=ImageDraw.Draw(frame)
    for j,((title,note,file),images) in enumerate(zip(entries,pools)):
        draw.text((j*256+12,6),title,font=font,fill='white');draw.text((j*256+12,28),note,font=small,fill=(190,195,205))
        frame.paste(images[i].resize((256,256),Image.Resampling.NEAREST),(j*256,46))
    result.append(frame)
result[0].save(gallery/'03-interpolation-walk.gif',save_all=True,append_images=result[1:],duration=90,loop=0,optimize=False)

for file in ['tooncrafter-walk.gif','tooncrafter-attack.gif','tooncrafter-attack-standard.gif','tooncrafter-walk-standard.gif']:
    if not (p/file).exists():continue
    (gallery/file).write_bytes((p/file).read_bytes())
    contact(Path(file).stem,[Image.open(f).convert('RGB') for f in sorted((p/Path(file).stem).glob('*.png'))])

source=p.parent/'skeleton-hatchet-approved-96.png'
raw=(p/'reference.raw').read_bytes();w,h=struct.unpack('<ii',raw[:8])
reference=np.frombuffer(raw[8:],dtype=np.uint8).reshape(h,w,4)[::-1]
assert np.array_equal(reference,np.array(Image.open(source).convert('RGBA')))
report={'source_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),'source_pixels_unchanged':True,'integrated_into_unity':False,'gifs':{}}
for file in sorted(gallery.glob('*.gif')):
    gif=Image.open(file)
    report['gifs'][file.name]={'size':gif.size,'frames':gif.n_frames,'durations':[f.info.get('duration') for f in ImageSequence.Iterator(gif)]}
(p/'gallery-qa.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps(report,ensure_ascii=False,indent=2))
