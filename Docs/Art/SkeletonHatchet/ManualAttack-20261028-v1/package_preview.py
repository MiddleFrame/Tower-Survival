from pathlib import Path
import json, hashlib
import numpy as np
from PIL import Image,ImageSequence

# Only packages Aseprite's exported frames; this script does not author artwork.
p=Path(__file__).parent
meta=json.loads((p/'skeleton-hatchet-manual-attack-sheet.json').read_text())
sheet=Image.open(p/'skeleton-hatchet-manual-attack-sheet.png').convert('RGBA')
frames=[];durations=[]
folder=p/'frames';folder.mkdir(exist_ok=True)
for i,entry in enumerate(meta['frames'].values()):
    r=entry['frame']
    frame=sheet.crop((r['x'],r['y'],r['x']+r['w'],r['y']+r['h']))
    frame.save(folder/f'attack-{i:02}.png')
    frames.append(frame);durations.append(entry['duration'])
source_path=p.parent/'skeleton-hatchet-approved-96.png'
source=Image.open(source_path).convert('RGBA')
expected=Image.new('RGBA',frames[0].size);expected.paste(source,(16,16))
def visible_equal(a,b):
    a,b=np.array(a),np.array(b)
    return bool(np.array_equal(a[:,:,3],b[:,:,3]) and np.array_equal(a[a[:,:,3]>0],b[b[:,:,3]>0]))
assert visible_equal(frames[0],expected)
assert visible_equal(frames[-1],expected)
foot_region=(45,97,82,106)
feet=[frame.crop(foot_region).tobytes() for frame in frames]
assert all(f==feet[0] for f in feet)
report={'frames':len(frames),'cell':frames[0].size,'duration_ms':durations,'loop_ms':sum(durations),'source_sha256':hashlib.sha256(source_path.read_bytes()).hexdigest(),'ready_matches_reference':True,'last_matches_reference':True,'feet_region_identical':True,'unity_imported':False,'accepted':False,'per_frame':[]}
previews=[]
for i,frame in enumerate(frames):
    arr=np.array(frame);ys,xs=np.where(arr[:,:,3]>0)
    assert np.all((arr[:,:,3]==0)|(arr[:,:,3]==255))
    assert xs.min()>0 and ys.min()>0 and xs.max()<frame.width-1 and ys.max()<frame.height-1
    report['per_frame'].append({'frame':i+1,'bounds':[int(xs.min()),int(ys.min()),int(xs.max()+1),int(ys.max()+1)],'colors':len(np.unique(arr[arr[:,:,3]>0],axis=0))})
    bg=Image.new('RGBA',frame.size,(32,35,45,255));bg.alpha_composite(frame)
    previews.append(bg.convert('RGB').resize((frame.width*3,frame.height*3),Image.Resampling.NEAREST))
previews[0].save(p/'skeleton-hatchet-manual-attack.gif',save_all=True,append_images=previews[1:],duration=durations,loop=0,optimize=False,disposal=2)
previews[0].save(p/'skeleton-hatchet-manual-attack-slow.gif',save_all=True,append_images=previews[1:],duration=[n*2 for n in durations],loop=0,optimize=False,disposal=2)
gif=Image.open(p/'skeleton-hatchet-manual-attack.gif')
assert gif.n_frames==len(frames)
assert [f.info.get('duration') for f in ImageSequence.Iterator(gif)]==durations
(p/'qa.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
print(json.dumps(report,indent=2))
