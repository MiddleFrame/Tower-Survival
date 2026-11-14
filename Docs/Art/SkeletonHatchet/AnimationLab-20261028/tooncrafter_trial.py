from pathlib import Path
import sys, importlib, json, time, gc
import numpy as np
import torch
from PIL import Image

out=Path(__file__).parent
scratch=Path(sys.argv[1])
mode=sys.argv[2] if len(sys.argv)>2 else 'attack'
standard=mode.endswith('-standard')
sys.argv=['animation-lab']
sys.path.insert(0,str(scratch))
sys.path.insert(0,r'A:\AI\StabilityMatrix\Data\Packages\ComfyUI')
import comfy.sd, comfy.clip_vision, comfy.model_management as mm
from omegaconf import OmegaConf
from accelerate import init_empty_weights
nodes=importlib.import_module('tooncrafter-wrapper.nodes')
utils=importlib.import_module('tooncrafter-wrapper.utils.utils')
funcs=importlib.import_module('tooncrafter-wrapper.scripts.evaluation.funcs')
print('Loading text encoder',flush=True)
clip=comfy.sd.load_clip([str(scratch/'stable-diffusion-2-1-clip-fp16.safetensors')])
prompt='A pixel art skeleton warrior with a large skull swings his small iron axe, facing right in three quarter view. Static camera, fixed framing, dark solid background. Preserve the same skeleton, skull, limbs, colors and axe.' if mode.startswith('attack') else 'A pixel art skeleton warrior walking in place, facing right in three quarter view, holding an axe. Static camera, fixed framing, dark solid background. Preserve the same skeleton, skull, limbs, colors and axe.'
positive=clip.encode_from_tokens_scheduled(clip.tokenize(prompt))
negative=clip.encode_from_tokens_scheduled(clip.tokenize('blur, deformed, morphing, extra limbs, missing limbs, camera movement, text, watermark, change of perspective'))
del clip
mm.unload_all_models();mm.soft_empty_cache()
print('Loading vision encoder',flush=True)
vision=comfy.clip_vision.load(r'A:\AI\StabilityMatrix\Data\Models\ClipVision\CLIP-ViT-H-14-laion2B-s32B-b79K.safetensors')
config=OmegaConf.load(scratch/'tooncrafter-wrapper/configs/tooncrafter_512_interp.yaml')
model_config=config.model
model_config.params.unet_config.params.use_checkpoint=False
print('Constructing ToonCrafter',flush=True)
with init_empty_weights(): model=utils.instantiate_from_config(model_config)
model=funcs.load_model_checkpoint(model,str(scratch/'tooncrafter_512_interp-pruned-fp16.safetensors'),torch.float16,torch.device('cpu')).to(torch.float16).eval()
bundle={'model':model,'model_name':'tooncrafter_512_interp-pruned-fp16.safetensors','dtype':torch.float16}
source=Image.open(out.parent/'skeleton-hatchet-approved-96.png').convert('RGBA')
first=Image.new('RGBA',(128,128),(32,35,45,255));first.alpha_composite(source,(16,16))
if mode.startswith('attack'):
    second=Image.open(out/'rig/clean-attack/frame-06.png').convert('RGBA').crop((16,16,144,144))
    back=Image.new('RGBA',(128,128),(32,35,45,255));back.alpha_composite(second);second=back
else:
    root=out.parents[3]
    pose=Image.open(root/'Assets/_IdleTowerDefense/Art/Enemies/SkeletonHatchet/Walk/Skeleton_Walk_02.png').convert('RGBA')
    second=Image.new('RGBA',(128,128),(32,35,45,255));second.alpha_composite(pose,(16,16))
inputs=[]
for image in [first,second]:
    if standard:
        large=Image.new('RGB',(512,320),(32,35,45))
        large.paste(image.convert('RGB').resize((384,384),Image.Resampling.NEAREST).crop((0,32,384,352)),(64,0))
    else:large=image.convert('RGB').resize((256,256),Image.Resampling.NEAREST)
    inputs.append(large)
images=torch.stack([torch.from_numpy(np.array(i).copy()).float()/255 for i in inputs])
for i,frame in enumerate([first,second]):frame.save(out/f'tooncrafter-{mode}-key-{i}.png')
start=time.monotonic()
print('Sampling',flush=True)
with torch.inference_mode():
    cache=scratch/f'tooncrafter-{mode}-latent.pt'
    if cache.exists():
        latent=torch.load(cache,map_location='cpu',weights_only=True)
    else:
        latent=nodes.ToonCrafterInterpolation().process(model=bundle,clip_vision=vision,images=images,positive=positive,negative=negative,cfg=3 if standard else 5,steps=30 if standard else 20,eta=1,seed=28102026,fs=10 if standard else 8,frames=16,vae_dtype='fp32',image_embed_ratio=1 if standard else 0.5)[0]
        torch.save(latent,cache)
    if latent['hidden_states'] is not None:
        latent['hidden_states']=[[state.to(torch.float16 if standard else torch.float32) for state in group] for group in latent['hidden_states']]
    print('Decoding',flush=True)
    result=nodes.ToonCrafterDecode().process(bundle,latent,'fp16' if standard else 'fp32')[0]
folder=out/f'tooncrafter-{mode}';folder.mkdir(exist_ok=True)
frames=[]
for i,tensor in enumerate(result):
    image=Image.fromarray((tensor.float().clamp(0,1).cpu().numpy()*255).round().astype('uint8'))
    image.save(folder/f'frame-{i:02}.png')
    frames.append(image)
frames[0].save(out/f'tooncrafter-{mode}-raw.gif',save_all=True,append_images=frames[1:],duration=90,loop=0,optimize=False)
native=[im.resize((128,128),Image.Resampling.NEAREST) for im in frames]
preview=frames if standard else [im.resize((512,512),Image.Resampling.NEAREST) for im in native]
preview[0].save(out/f'tooncrafter-{mode}.gif',save_all=True,append_images=preview[1:],duration=90,loop=0,optimize=False)
(out/f'tooncrafter-{mode}-report.json').write_text(json.dumps({'prompt':prompt,'size':list(inputs[0].size),'frames':len(frames),'steps':30 if standard else 20,'cfg':3 if standard else 5,'seed':28102026,'seconds':time.monotonic()-start,'gpu':torch.cuda.get_device_name(),'max_vram_bytes':torch.cuda.max_memory_allocated()},indent=2))
print('Finished',mode,flush=True)
