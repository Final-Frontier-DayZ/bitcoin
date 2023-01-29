modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    { 
        super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("FF_GPU", 							"dz/anims/workspaces/player/player_main/player_main_1h.asi", 			pBehavior , 	"dz/anims/anm/player/ik/gear/box_cereal.anm");
		pType.AddItemInHandsProfileIK("FF_Bitcoin", 						"dz/anims/workspaces/player/player_main/player_main_1h.asi",    		pBehavior,      "dz/anims/anm/player/ik/gear/bait_worm.anm");    
		pType.AddItemInHandsProfileIK("FF_HDD", 				        "dz/anims/workspaces/player/player_main/player_main_1h.asi",			pBehavior,		"dz/anims/anm/player/ik/gear/box_cereal.anm");;
		pType.AddItemInHandsProfileIK("FF_RAM", 				            "dz/anims/workspaces/player/player_main/player_main_1h.asi",			pBehavior,		"dz/anims/anm/player/ik/gear/paper.anm");
		pType.AddItemInHandsProfileIK("FF_CPU", 				            "dz/anims/workspaces/player/player_main/player_main_1h.asi",			pBehavior,		"dz/anims/anm/player/ik/gear/paper.anm");
		pType.AddItemInHandsProfileIK("FF_PSU", 				            "dz/anims/workspaces/player/player_main/player_main_1h.asi",			pBehavior,		"dz/anims/anm/player/ik/gear/protector_case.anm");

	}
};
