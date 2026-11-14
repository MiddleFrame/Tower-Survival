from pathlib import Path
from PIL import Image, ImageDraw
import struct
import numpy as np
from scipy.ndimage import distance_transform_edt

HERE = Path(__file__).parent
source = HERE.parent / 'skeleton-hatchet-approved-96.png'
im = Image.open(source).convert('RGBA')
w, h = im.size
raw = b''.join(im.crop((0,y,w,y+1)).tobytes() for y in range(h-1,-1,-1))
(HERE/'reference.raw').write_bytes(struct.pack('<ii',w,h)+raw)
joints = '''Neck 46 41
HairPivot 0 0
Hip 44 66
ShoulderNear 51 46
ElbowNear 57 58
HandNear 73 60
ShoulderFar 33 45
ElbowFar 24 57
HandFar 29 76
KneeNear 36 78
FootNear 38 88
KneeFar 53 75
FootFar 56 82
WeaponPivot 73 60
WeaponTip 80 39
ground 90
part Body 0 0 95 95
part Head 0 0 68 40
'''
# These polygons select existing source pixels; they do not paint replacement art.
parts = {
 'LegFarUpper':[(46,66),(54,66),(57,75),(51,78),(46,73)],
 'LegFarLower':[(51,74),(58,74),(57,81),(51,82),(48,80)],
 'FootFar':[(48,79),(64,79),(65,85),(48,85)],
 'LegNearUpper':[(32,66),(43,67),(45,73),(38,81),(32,79)],
 'LegNearLower':[(32,76),(40,77),(39,87),(32,87)],
 'FootNear':[(31,85),(47,85),(48,92),(30,92)],
 'Weapon':[(69,32),(92,33),(91,49),(79,50),(75,79),(67,79),(71,61),(68,54)],
 'ArmFarUpper':[(31,42),(36,45),(29,59),(21,60),(21,54)],
 'ArmFarLower':[(21,55),(28,55),(32,72),(35,81),(24,84),(23,72)],
 'ArmNearUpper':[(51,43),(56,46),(60,56),(58,62),(52,60)],
 'ArmNearLower':[(54,55),(74,55),(77,64),(70,66),(55,62)],
}
for name, polygon in parts.items():
    mask=Image.new('1',im.size)
    ImageDraw.Draw(mask).polygon(polygon,fill=1)
    for y in range(h):
        xs=[x for x in range(w) if mask.getpixel((x,y))]
        if xs:joints+=f'part {name} {min(xs)} {y} {max(xs)} {y}\n'
(HERE/'skeleton-joints.txt').write_text(joints,encoding='utf-8')
print('Prepared',im.size,'source pixels and explicit rig map.')

# Reassign only disconnected outline/limb pixels left outside the torso region.
# The source bitmap is unchanged; this refines ownership of existing pixels.
names=['Body','Head','Hair','ArmNearUpper','ArmNearLower','Weapon','ArmFarUpper','ArmFarLower','LegNearUpper','LegNearLower','FootNear','LegFarUpper','LegFarLower','FootFar']
labels=np.zeros((h,w),dtype=np.uint8)
labels[:41,:69]=1
for name,polygon in parts.items():
    mask=Image.new('1',im.size)
    ImageDraw.Draw(mask).polygon(polygon,fill=1)
    labels[np.array(mask,dtype=bool)]=names.index(name)
torso=Image.new('1',im.size)
ImageDraw.Draw(torso).polygon([(34,41),(51,41),(57,47),(55,56),(54,62),(57,69),(50,74),(43,72),(39,67),(34,62),(33,53)],fill=1)
opaque=np.array(im)[:,:,3]>0
_,nearest=distance_transform_edt(~((labels!=0)&opaque),return_indices=True)
orphans=opaque&(labels==0)&~np.array(torso,dtype=bool)
for y,x in zip(*np.where(orphans)):
    owner=int(labels[nearest[0,y,x],nearest[1,y,x]])
    joints+=f'part {names[owner]} {x} {y} {x} {y}\n'
(HERE/'skeleton-joints-clean.txt').write_text(joints,encoding='utf-8')
print('Reassigned outline pixels:',int(orphans.sum()))
