# Skeleton animation trials — 2026-10-28

Status: rejected by the user. Retained as failed experiments, not approved animation references.

Experimental comparisons only. No output is approved for production or imported into Unity.

Reference: `../skeleton-hatchet-approved-96.png`, 96×96. SHA-256: `fdad47309b54f14a52cac52b3834be93f4f7bf5ddda4415c962e09de3eb792d7`. `gallery-qa.json` checks its pixels against the original reference buffer. The camera, palette and silhouette of this approved skeleton are the target, not newly generated character designs.

## GIF gallery

- `Gallery/01-walk-rigs.gif`: JatCool procedural rig, Aseprite recipe, recorded SDPose motion retargeted to the same rig. Cycles are slowed and normalized for comparison.
- `Gallery/02-attack-rigs.gif`: procedural rig versus Aseprite layer animation, slowed for review.
- `Gallery/03-interpolation-walk.gif`: RIFE, RIFE + Retro Diffusion Pixel Art Fixer, RIFE + Proper Pixel Art. These use existing project walk keyframes 0, 2, 4, 6, 0; they do not create a walk from one still image.
- `Gallery/tooncrafter-*-standard.gif`: ToonCrafter at 512×320, 16 frames, 30 DDIM steps, CFG 3, seed 28102026, image embedding ratio 1, fs 10. Original skeleton pixels are enlarged by integer scaling and padded. Walk uses the approved still and existing walk pose 02; attack uses the approved still and a pose rendered by the rig.
- `Gallery/tooncrafter-walk.gif` and `tooncrafter-attack.gif`: earlier 256×256 tests, 20 steps, CFG 5. Severe defects; retained for comparison.

Full transparent native rig frames, `.aseprite` files, recipes, raw buffers and contact sheets remain alongside the gallery. Neural interpolation previews have an opaque background; alpha reconstruction is not validated. The preview GIFs are not Unity-ready sprite sheets.

## Executed methods and result

| Method | Actual trial | Observation |
|---|---|---|
| [JatCool/AI-Sprite-Animation](https://github.com/JatCool/AI-Sprite-Animation) | Idle, walk, run, attack, hurt; 12 frames each | Keeps original colors and rigid skull, but limb seams, foot poses and timing need hand work. No newly synthesized hidden surfaces. |
| [MJSchut/aseprite-mcp](https://github.com/MJSchut/aseprite-mcp) | Built locally; executed its real recipe engine through Aseprite batch mode. Idle, walk, attack, hurt | Readable swing; shoulder connections and leg motion remain weak. Its front-walk preset is a poor fit for this three-quarter sprite. Global MCP configuration was not changed. |
| Recorded AI-pose retargeting | Upstream SDPose walk/run/attack fixtures + validation + skeleton rig | Existing author-recorded AI poses, not fresh AI video. All walk frames required correction. Idle was rejected by the tool's repair threshold. No bypass. |
| [RIFE / ComfyUI Frame Interpolation](https://github.com/Fannovel16/ComfyUI-Frame-Interpolation) | CUDA `rife49.pth`, ensemble enabled, 384×384 working canvas; walk and hit reaction | Useful only between existing key poses. Large limb changes cause soft/misconnected in-betweens. |
| [Retro Diffusion Pixel Art Fixer](https://github.com/Retro-Diffusion/pixel-art-fixer) | Legacy grid reconstruction and current two-stage API, fixed source grid; RIFE and ToonCrafter frames | Actual free open-source Retro Diffusion processing, not its paid generator. Restores a grid; cannot repair anatomy or invent missing poses. |
| [Proper Pixel Art](https://github.com/KennethJAllen/proper-pixel-art) | Shared video mesh and palette, 77-color quantization | The tested output became 109×108 instead of 96×96 despite pixel width 4 on a 384×384 input. Scale and colors changed; not a valid automatic drop-in cleanup for this sequence. Does not fix motion. |
| [ToonCrafter via Kijai wrapper](https://github.com/kijai/ComfyUI-DynamiCrafterWrapper) | Real local inference with [pruned fp16 weights](https://huggingface.co/Kijai/DynamiCrafter_pruned), both low and standard resolution | Standard resolution is better than 256×256, but identity, axe geometry, pixel structure and intermediate anatomy still drift. Not accepted. |

The existing Aseprite MCP was also used to inspect reference and layered outputs. Native and nearest-neighbor enlarged contact sheets are in `Review/`. These checks establish files and visible trial quality, not game integration or Android appearance.

## Investigated without a generated result

- [DeepInterframes](https://github.com/NethamGH/deepinterframes_neural_sprite_inbetweening): source and training scripts are public, but no trained checkpoint was found in the repository/release. Did not substitute random weights or pretend to test inference.
- [Sprite Sheet Diffusion](https://github.com/chenganhsieh/Sprite-Sheet-Diffusion): repository and the public Drive folder were readable. The folder contains `denoising_unet-30000.pth`, `reference_unet-30000.pth`, `motion_module.pth` (about 8.7 GB total), but not the required `pose_guider.pth`. The inference code loads that missing component with `strict=True`. No generated result; no generic model was silently substituted.
- [Skeletor](https://github.com/Variable-Interactive/Skeletor): source inspected. Requires a real Pixelorama project, group layers, a pose layer and Pixelorama's rendering/extension APIs. No Pixelorama session or headless export integration was available; not counted as a tested renderer.
- [ai-sprite-animator](https://github.com/isabellagreco1997/ai-sprite-animator): source inspected. It processes an existing video; it is not a motion generator. Its Retro Diffusion reconstruction backend was exercised directly above. The full green-screen/video pipeline was not run.
- PixelOver/Smack Studio/paid Retro Diffusion generation: no purchase, subscription or paid export performed. PixelOver's demo export restriction was not bypassed.

## Local implementation and reproducibility

External repositories, the standalone .NET harness, Python environment and neural model weights are under `C:/Users/tente/AppData/Local/Temp/lone-tower-animation-lab-20261028`, outside `Assets` and the Unity package installation. They may be removed by Windows temporary-file cleanup. No Editor was launched or project/package/settings file changed for these trials.

`prepare_rig.py` writes explicit joint positions and source-pixel part masks. The clean mask additionally assigns stray outline pixels outside the torso to neighboring limb parts. The external rig has an environment switch `SPRITE_HOLLOW_BODY=1` to disable body backfill and hole closing, which otherwise creates ghost pixels on hollow skeleton bones. Original and adapted trials are retained. The render harness uses Unity's managed math types without opening an Editor.

`rife_trial.py` runs the actual RIFE network and exports previews; `cleanup_trial.py` runs the two real reconstruction libraries. `tooncrafter_trial.py` uses the actual Kijai model and sampler; its adapter explicitly initializes Lightning precision and matches reference-state dtype to decoder dtype. Cached latent files are external intermediates. The wrapper prints an existing ComfyUI `ModelPatcher.__del__` shutdown error after successful exports; this is recorded in logs, not hidden. The pruned text encoder's unused last layer is absent; ComfyUI's SD2 encoder uses the penultimate layer.

ToonCrafter raw sequences are preserved before grid cleanup. The 512×320 test uses an fp16 decoder; fp32 decoding exhausted dedicated VRAM and was interrupted after saving the latent. RTX 3060 12 GB, PyTorch 2.13.0+cu130. Report timings from a cached latent measure decoding, not full generation. There is no claim of mobile or runtime performance improvement.

`make_gallery.py` exports comparisons and verifies reference pixels and GIF metadata. Review files are outside `Assets`; no scene compilation, Play Mode, build or device checks were appropriate to this non-integrated experiment.

Pinned source revisions:

```text
AI-Sprite-Animation 174fc878a8387de1419a6876af1c7dffe79df366
MJSchut/aseprite-mcp b02aee95a455addc042e6d80367ec5aa07254e77
ComfyUI-Frame-Interpolation 26545cc2dd95bc3d27f056016300673bdeee78f5
ComfyUI-DynamiCrafterWrapper d312c62982f1582b7955444d3a22ac948fb9c603
proper-pixel-art 4de0dda5ba066491b5b5fac3500365db4dfd665e
pixel-art-fixer ef376e57e1c272633ca2dbf5f29ec3fcf6596465
DeepInterframes 25cf52d2ec08a593d3918103b3182e371db01451
Sprite-Sheet-Diffusion 382c2e7a3ae8d6e012963ec19c43415159e439c7
Skeletor 984b990fd9d6384fc9a76057f917bd579326cc00
ai-sprite-animator 2c18a8e98b918cecdaeec6e02d047a134ea8ed35
```
