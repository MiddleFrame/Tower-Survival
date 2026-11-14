from pathlib import Path
import sys, importlib.util, types, json, hashlib
import numpy as np
import torch
from PIL import Image, ImageSequence

out = Path(__file__).parent
scratch = Path(sys.argv[1])
device = torch.device('cuda')
# The upstream architecture only needs this ComfyUI API for device selection.
comfy = types.ModuleType('comfy')
management = types.ModuleType('comfy.model_management')
management.get_torch_device = lambda: device
sys.modules['comfy'] = comfy
sys.modules['comfy.model_management'] = management
spec = importlib.util.spec_from_file_location('rife_arch', scratch / 'frame-interpolation/vfi_models/rife/rife_arch.py')
arch = importlib.util.module_from_spec(spec)
spec.loader.exec_module(arch)
net = arch.IFNet(arch_ver='4.7').eval().to(device)
net.load_state_dict(torch.load(scratch / 'rife49.pth', map_location='cpu', weights_only=True))
bg = (32, 35, 45)
root = out.parents[3]
art = root / 'Assets/_IdleTowerDefense/Art/Enemies/SkeletonHatchet'

def flat(path):
    im = Image.open(path).convert('RGBA')
    b = Image.new('RGBA', im.size, bg + (255,))
    b.alpha_composite(im)
    return b.convert('RGB')

def tensor(im):
    return torch.from_numpy(np.asarray(im).copy()).permute(2,0,1).unsqueeze(0).float().to(device) / 255

def preview(frames, path, ms):
    frames = [im.resize((480,480), Image.Resampling.NEAREST) for im in frames]
    frames[0].save(path, save_all=True, append_images=frames[1:], duration=ms, loop=0, disposal=2, optimize=False)

report = {'model': 'rife49.pth', 'weight_sha256': hashlib.sha256((scratch/'rife49.pth').read_bytes()).hexdigest(), 'device': torch.cuda.get_device_name(), 'note': 'Interpolation of existing project poses, not animation from a static image.', 'trials': []}
for name, folder, prefix, indices in [('walk', 'Walk', 'Skeleton_Walk', [0,2,4,6,0]), ('hurt', 'Hit', 'Skeleton_Hit', [0,2,4,7])]:
    keys = [flat(art/folder/f'{prefix}_{i:02}.png') for i in indices]
    target = out / f'rife-{name}'
    target.mkdir(exist_ok=True)
    frames = []
    high_frames = []
    with torch.inference_mode():
        for a,b in zip(keys,keys[1:]):
            aa,bb = [tensor(im.resize((384,384), Image.Resampling.NEAREST)) for im in [a,b]]
            mid = net(aa,bb,timestep=0.5,scale_list=[8,4,2,1],training=False,fastmode=True,ensemble=True)
            image = Image.fromarray((mid[0].permute(1,2,0).clamp(0,1).cpu().numpy()*255).round().astype('uint8'))
            frames.extend([a, image.resize(a.size, Image.Resampling.NEAREST)])
            high_frames.extend([a.resize((384,384),Image.Resampling.NEAREST),image])
        if name != 'walk':
            frames.append(keys[-1])
            high_frames.append(keys[-1].resize((384,384),Image.Resampling.NEAREST))
    for i,frame in enumerate(frames): frame.save(target/f'frame-{i:02}.png')
    times = [90]*len(frames)
    if name == 'hurt': times[-1] = 450
    preview(frames, out/f'rife-{name}.gif', times)
    high_folder=out/f'rife-{name}-high';high_folder.mkdir(exist_ok=True)
    for i,frame in enumerate(high_frames):frame.save(high_folder/f'frame-{i:02}.png')
    high_frames[0].save(out/f'rife-{name}-high.gif',save_all=True,append_images=high_frames[1:],duration=times,loop=0,optimize=False)
    sheet = Image.new('RGB',(len(frames)*192,192),bg)
    for i,frame in enumerate(frames): sheet.paste(frame.resize((192,192),Image.Resampling.NEAREST),(i*192,0))
    sheet.save(out/f'rife-{name}-contact.png')
    report['trials'].append({'name':name,'input_keys':indices,'frames':len(frames),'native_size':keys[0].size})
    print(name, len(frames), flush=True)
(out/'rife-report.json').write_text(json.dumps(report,indent=2))

for name in ['idle','walk','attack','hurt']:
    gif = Image.open(out/f'mcp-{name}-native.gif')
    frames = []
    times = []
    for frame in ImageSequence.Iterator(gif):
        rgba = frame.convert('RGBA')
        b = Image.new('RGBA',rgba.size,bg+(255,))
        b.alpha_composite(rgba)
        frames.append(b.convert('RGB'))
        times.append(frame.info.get('duration',80))
    if name in ['attack','hurt']: times[-1] = 450
    preview(frames,out/f'mcp-{name}.gif',times)
