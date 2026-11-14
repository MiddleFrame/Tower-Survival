extends Node

const OUT = "C:/Users/tente/Desktop/The-Lone-Tower-main/Docs/Art/SkeletonHatchet/SkeletorTrial-20261028"
const SOURCE = "C:/Users/tente/Desktop/The-Lone-Tower-main/Docs/Art/SkeletonHatchet/skeleton-hatchet-approved-96.png"
const MASK = "C:/Users/tente/Desktop/The-Lone-Tower-main/Docs/Art/SkeletonHatchet/AnimationLab-20261028/rig/clean-walk.raw.parts"
const PAD = Vector2(32,32)
const COUNT = 12
var defs = [
    ["Pelvis","",Vector2(44,66),0,60,96],
    ["FarThigh","Pelvis",Vector2(50,67),11,0,96],
    ["FarShin","FarThigh",Vector2(54,76),12,0,96],
    ["FarFoot","FarShin",Vector2(56,82),13,0,96],
    ["Torso","Pelvis",Vector2(44,64),0,0,60],
    ["FarUpperArm","Torso",Vector2(33,45),6,0,96],
    ["FarForearm","FarUpperArm",Vector2(24,57),7,0,96],
    ["Head","Torso",Vector2(46,41),1,0,96],
    ["NearThigh","Pelvis",Vector2(39,68),8,0,96],
    ["NearShin","NearThigh",Vector2(36,78),9,0,96],
    ["NearFoot","NearShin",Vector2(38,88),10,0,96],
    ["NearUpperArm","Torso",Vector2(54,46),3,0,96],
    ["Weapon","NearForearm",Vector2(73,60),5,0,96],
    ["NearForearm","NearUpperArm",Vector2(58,57),4,0,96]
]
var project: Project
var manager: BoneManager
var pose: PixelLayer
var report: Dictionary = {"tool":"Skeletor 0.19, actual Pixelorama project and GPU renderer", "frames":[]}

func _ready() -> void:
    if OS.has_feature("editor") and not OS.has_feature("standalone"):
        pass
    while not Global.pixelorama_has_loaded:
        await get_tree().process_frame
    get_window().position = Vector2i(-20000,-20000)
    print("LAB_START")
    await run_trial()
    get_tree().quit()

func make_bones(algorithm: int) -> Dictionary[String, SkeletonBone]:
    var bones: Dictionary[String,SkeletonBone] = {}
    for d in defs:
        var data = {"bone_name":d[0],"parent_bone_name":d[1],"gizmo_origin":d[2]+PAD,"start_point":Vector2.ZERO,"gizmo_rotate_origin":0.0,"bone_rotation":0.0,"transformation_algorithm":algorithm,"gizmo_length":16}
        var bone = SkeletonBone.new(bones,data)
        bones[d[0]] = bone
    return bones

func ik(bones: Dictionary[String,SkeletonBone], a: String, b: String, c: String, target: Vector2) -> void:
    var chain: Array[SkeletonBone] = [bones[a],bones[b],bones[c]]
    IKAlgorithms.FABRIK.calculate(chain,target,50,0.05)

func planted_legs(bones: Dictionary[String,SkeletonBone], near_target: Vector2, far_target: Vector2) -> void:
    ik(bones,"NearThigh","NearShin","NearFoot",near_target+PAD)
    ik(bones,"FarThigh","FarShin","FarFoot",far_target+PAD)
    bones.NearFoot.bone_rotation = 0.0
    bones.FarFoot.bone_rotation = 0.0

func walk_pose(bones: Dictionary[String,SkeletonBone], f: int) -> void:
    var phase = TAU * f / COUNT
    bones.Pelvis.start_point = Vector2(0,0.7+abs(sin(phase))*0.7)
    bones.Torso.bone_rotation = deg_to_rad(1.5+sin(phase*2)*1.0)
    bones.Head.bone_rotation = 0.0
    bones.NearUpperArm.bone_rotation += deg_to_rad(6*sin(phase))
    bones.NearForearm.bone_rotation += deg_to_rad(-3*sin(phase))
    bones.FarUpperArm.bone_rotation += deg_to_rad(-9*sin(phase))
    bones.FarForearm.bone_rotation += deg_to_rad(3*sin(phase))
    planted_legs(bones,Vector2(38-4*cos(phase),88-3*maxf(0,sin(phase))),Vector2(56+3*cos(phase),82-2*maxf(0,-sin(phase))))

func attack_pose(bones: Dictionary[String,SkeletonBone], f: int) -> void:
    var hands = [Vector2(73,60),Vector2(74,53),Vector2(77,40),Vector2(78,34),Vector2(80,39),Vector2(81,48),Vector2(79,64),Vector2(77,68),Vector2(75,66),Vector2(74,62),Vector2(73,60),Vector2(73,60)]
    var torso = [0,-1,-3,-4,-2,2,5,4,2,1,0,0]
    var root_x = [0,-0.5,-1,-1,-0.5,1,2,2,1,0.5,0,0]
    var axe = [0,-7,-20,-30,-10,25,100,110,55,12,0,0]
    bones.Pelvis.start_point = Vector2(root_x[f],0)
    bones.Torso.bone_rotation = deg_to_rad(torso[f])
    bones.Head.bone_rotation = deg_to_rad(torso[f]*0.2)
    bones.FarUpperArm.bone_rotation += deg_to_rad(-torso[f]*1.5)
    ik(bones,"NearUpperArm","NearForearm","Weapon",hands[f]+PAD)
    bones.Weapon.bone_rotation = deg_to_rad(axe[f])
    planted_legs(bones,Vector2(38,88),Vector2(56,82))

func run_trial() -> void:
    Global.canvas.hide()
    DirAccess.make_dir_recursive_absolute(OUT)
    project = Project.new([],"Skeleton Skeletor test",Vector2i(160,160))
    var source = Image.load_from_file(SOURCE)
    var mask_file = FileAccess.open(MASK,FileAccess.READ)
    var width = mask_file.get_32()
    var height = mask_file.get_32()
    var masks: Array[int] = []
    for i in width*height:
        masks.append(mask_file.get_16())
    var groups: Dictionary = {}
    var layer_images: Array[Image] = []
    for d in defs:
        var group = GroupLayer.new(project,d[0])
        var pixels = PixelLayer.new(project,d[0]+" pixels")
        pixels.parent = group
        var image = project.new_empty_image()
        for y in range(d[4],d[5]):
            for x in width:
                if masks[y*width+x] & (1<<d[3]):
                    image.set_pixel(x+32,y+32,source.get_pixel(x,y))
        pixels.index = project.layers.size()
        project.layers.append(pixels)
        layer_images.append(image)
        group.index = project.layers.size()
        project.layers.append(group)
        layer_images.append(project.new_empty_image())
        groups[d[0]] = group
    for d in defs:
        if not d[1].is_empty(): groups[d[0]].parent = groups[d[1]]
    pose = PixelLayer.new(project,"Pose Layer")
    pose.index = project.layers.size()
    pose.set_meta("SkeletorPoseLayer",true)
    project.layers.append(pose)
    layer_images.append(project.new_empty_image())
    project.fps = 12
    for i in 1+COUNT*6:
        var cels: Array[BaseCel] = []
        for j in project.layers.size():
            if project.layers[j] is GroupLayer: cels.append(GroupCel.new())
            else: cels.append(project.layers[j].new_cel_from_image(layer_images[j]))
        project.frames.append(Frame.new(cels))
    project.current_layer = pose.index
    project.selected_cels = [[0,pose.index]]
    project.order_layers(0)
    Global.projects.append(project)
    Global.current_project_index = Global.projects.size()-1
    for i in 4: await get_tree().process_frame
    var extension = load("res://src/Extensions/Skeletor/Main.tscn").instantiate()
    add_child(extension)
    for i in 5: await get_tree().process_frame
    manager = extension.skeleton_manager
    manager.pose_layer = pose
    manager.manage_ui_signals(true)
    var frame_index = 0
    for algorithm in 3:
        for action in ["walk","attack"]:
            var folder = OUT.path_join(action+"-"+["cleanedge","omniscale","nns"][algorithm])
            DirAccess.make_dir_recursive_absolute(folder)
            for f in COUNT:
                if frame_index>0: manager.manage_ui_signals(true)
                frame_index += 1
                project.current_frame = frame_index
                var bones = make_bones(algorithm)
                if action=="walk": walk_pose(bones,f)
                else: attack_pose(bones,f)
                manager.current_frame = frame_index
                manager.current_frame_bones = bones
                manager.prev_layer_count = project.layers.size()
                manager.prev_frame_count = project.frames.size()
                manager.manage_ui_signals()
                manager.generate_pose(frame_index,true)
                await RenderingServer.frame_post_draw
                var image = project.frames[frame_index].cels[pose.index].get_image()
                var filename = folder.path_join("frame-%02d.png" % f)
                var error = image.save_png(filename)
                report.frames.append({"action":action,"algorithm":algorithm,"frame":f,"save_error":error,"bounds":str(image.get_used_rect())})
                print("LAB_FRAME ",action," ",algorithm," ",f," ",error)
    manager.manage_ui_signals(true)
    project.current_frame = 0
    manager.current_frame = 0
    manager.current_frame_bones = make_bones(0)
    manager.manage_ui_signals()
    manager.generate_pose(0,true)
    await RenderingServer.frame_post_draw
    project.frames[0].cels[pose.index].get_image().save_png(OUT.path_join("unposed-baseline.png"))
    var saved = OpenSave.save_pxo_file(OUT.path_join("skeleton-skeletor-trials.pxo"),false,project)
    report.project_saved = saved
    report.pixelorama = Global.current_version
    report.engine = Engine.get_version_info()
    var file = FileAccess.open(OUT.path_join("runtime-report.json"),FileAccess.WRITE)
    file.store_string(JSON.stringify(report,"  "))
    print("LAB_DONE ",saved)
