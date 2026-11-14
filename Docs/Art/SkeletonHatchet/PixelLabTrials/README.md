# PixelLab reference animation trials, 2026-10-28

Reference: `../skeleton-hatchet-approved-96.png`. The approved sprite is a 96×96 transparent frame facing right and slightly toward the camera. It was not modified. These are comparison trials, not production clips or user-approved art. Nothing in `Assets/` uses them.

Both requests used the approved PNG as the first and last reference frame, requested four generated frames and transparent output, and cost one PixelLab generation each. PixelLab returned the original unchanged as frame 00, followed by four generated frames. All frames are 96×96 with binary alpha.

| Trial | PixelLab job | Result |
| --- | --- | --- |
| `HitReaction-20261028/` | `cd70fb6e-c115-446a-a12d-bae2c0193dd7`, Animate with Text v3 | Silhouette and facing mostly hold, but the action reads as a foot shift rather than a hit reaction. Axe and bone details still vary. |
| `HitReaction-PixMiniMax-20261028/` | `314358b4-7534-4265-a58f-30677f82442a`, PixMiniMax | Recoil is more visible, but the body shifts horizontally, skull/face shape changes, and loose pixels appear near the head. |

Each folder contains the exact downloaded frames, a nearest-neighbor 4× contact sheet and an animated GIF. The contact sheet is for visual inspection only; it does not resample the source frames. The output has not been imported into Unity or checked at gameplay scale on Android.

Action requested: a restrained recoil from a hit, with a slight backward jerk of skull and ribcage, knee compression, axe-arm follow-through, and recovery to the original grounded pose. Maintain the approved camera, direction, proportions, skull, axe, palette and outline; avoid deep bends, falls, effects and texture flicker. PixMiniMax additionally received explicit `side` view, `south-east` facing, subject and initial-pose captions.

Next trial should use a controlled pose or skeleton sequence and one approved directional reference per direction. Review every generated frame for body contact and anatomy before any Unity import. Do not infer approval of new front/back views from this side-view test.
