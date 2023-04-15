class CfgPatches
{
	class is_imperial_unit
	{
		author = "Imperial Studios";
		requiredaddons[] = 
		{
			"A3_Anims_F",
			"A3_Characters_F",
			"is_core"
		};
		requiredVersion = 0.1;
		units[] = 
		{
			"is_empireST_headgear",
			"is_empireST_unit",
			"is_empireST_unit_at",
			"is_empireST_unit_medic",
			"is_empireST_unit_eng",
			"is_empireST_unit_FTL",
			"is_empireST_unit_SL",
			"is_empireST_unit_company",
			"is_empireST_unit_plt_hq",
			"is_empirescout_unit",
			"is_empirepilot_unit",
			"is_empiresnow_unit",

			"is_empireST_unit_base",
			"is_empireST_unit_shadow",
			"is_empireST_unit_nova",
			"is_empireST_unit_incinerator",
			"is_empireST_unit_shock",
			"is_empireST_unit_mortar",
			"is_empireST_unit_assault",
			"is_empireST_unit_501",
			"is_empireST_unit_wet",
			"is_empireST_unit_magma",
			"is_empireST_unit_sand",
			"is_empireST_unit_dirt_base",
			"is_empireST_unit_dirt_501",
			"is_empireST_unit_dirt_shock",
			"is_empireST_unit_dirt_mortar",
			"is_empireST_unit_dirt_assault",
			"is_empireST_unit_dirt_incinerator",
			
			"is_empireST_unit_shadow_e11",
			"is_empireST_unit_nova_e11",
			"is_empireST_unit_incinerator_e11",
			"is_empireST_unit_shock_e11",
			"is_empireST_unit_mortar_e11",
			"is_empireST_unit_commander_e11",
			"is_empireST_unit_assault_e11",
			"is_empireST_unit_501_e11",
			"is_empireST_unit_44_e11",
			"is_empireST_unit_wet_e11",
			"is_empireST_unit_magma_e11",
			"is_empireST_unit_sand_e11",
			"is_empirepilot_unit_e11",
			"is_empireScout_unit_e11",
			"is_empiresnow_unit_e11",
			
			"is_empireST_backpack",
			"is_empireST_backpack_radio",
			"is_empiresnow_backpack",
			"is_empireST_headgear",
			"is_empireST_shadow_headgear",
			"is_empireST_nova_headgear",
			"is_empireST_incinerator_headgear",
			"is_empireST_shock_headgear",
			"is_empireST_mortar_headgear",
			"is_empireST_commander_headgear",
			"is_empireST_assault_headgear",
			"is_empireST_501_headgear",
			"is_empireST_44_headgear",
			"is_empireST_wet_headgear",
			"is_empireST_magma_headgear",
			"is_empireST_sand_headgear",
			"is_empirepilot_headgear",
			"is_empirescout_headgear",
			"is_empiresnow_headgear"
		};
		weapons[] = 
		{
			"is_empireST_uniform_base",
			"is_empireST_uniform",
			"is_empireST_shadow_uniform",
			"is_empireST_nova_uniform",
			"is_empireST_incinerator_uniform",
			"is_empireST_shock_uniform",
			"is_empireST_mortar_uniform",
			"is_empireST_commander_uniform",
			"is_empireST_assault_uniform",
			"is_empireST_501_uniform",
			"is_empireST_44_uniform",
			"is_empireST_wet_uniform",
			"is_empireST_magma_uniform",
			"is_empireST_sand_uniform",
			"is_empireST_dirt_uniform",
			"is_empireST_incinerator_dirt_uniform",
			"is_empireST_shock_dirt_uniform",
			"is_empireST_mortar_dirt_uniform",
			"is_empireST_assault_dirt_uniform",
			"is_empireST_501_dirt_uniform",

			"is_empirepilot_uniform",
			"is_empirescout_uniform",

			"is_empireST_helmet_base",
			"is_empireST_helmet",
			"is_empireST_shadow_helmet",
			"is_empireST_nova_helmet",
			"is_empireST_incinerator_helmet",
			"is_empireST_shock_helmet",
			"is_empireST_mortar_helmet",
			"is_empireST_commander_helmet",
			"is_empireST_assault_helmet",
			"is_empireST_501_helmet",
			"is_empireST_44_helmet",
			"is_empireST_wet_helmet",
			"is_empireST_magma_helmet",
			"is_empireST_sand_helmet",
			"is_empireST_dirt_helmet",
			"is_empireST_incinerator_dirt_helmet",
			"is_empireST_shock_dirt_helmet",
			"is_empireST_mortar_dirt_helmet",
			"is_empireST_assault_dirt_helmet",
			"is_empireST_501_dirt_helmet",

			"is_empireST_vest_base",
			"is_empireST_pauldron_vest",
			"is_empireST_pauldron_blue_vest",
			"is_empireST_pauldron_brown_vest",
			"is_empireST_pauldron_dark_grey_vest",
			"is_empireST_pauldron_grey_vest",
			"is_empireST_pauldron_orange_vest",
			"is_empireST_pauldron_red_vest",
			"is_empireST_pauldron_white_vest",
			"is_empireST_pauldron_yellow_vest",
			"is_empireST_pauldron_pouch_vest",
			"is_empireST_pauldron_pouch_blue_vest",
			"is_empireST_pauldron_pouch_brown_vest",
			"is_empireST_pauldron_pouch_dark_grey_vest",
			"is_empireST_pauldron_pouch_grey_vest",
			"is_empireST_pauldron_pouch_orange_vest",
			"is_empireST_pauldron_pouch_red_vest",
			"is_empireST_pauldron_pouch_white_vest",
			"is_empireST_pauldron_pouch_yellow_vest",
		};
	};
};

class cfgweapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class HeadgearItem;
	class UniformItem;
	class VestItem;
	class V_rebreatherB;
	class U_I_CombatUniform;
	class Integrated_NVG_F;
	class H_HelmetO_ViperSP_hex_F;
	class V_PlateCarrier1_rgr;
////stormtrooper uniform
	///clean
    class is_empireST_uniform_base: U_I_CombatUniform
	{
		displayname="[IS] Storm Trooper Armor";
		author = "Imperial Studios";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		picture = "imperial_studio\is_core\ui\imperial_studios_logo_256.paa";
		model="imperial_studio\is_imperial_unit\model\uniform\is_uniform_gh.p3d"; //model for the ground
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformClass="is_empireST_unit_base";
		};
	};
	class is_empireST_uniform: is_empireST_uniform_base
	{
		displayname="[IS] Storm Trooper Armor";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="is_empireST_unit_base";
		};
	};
	class is_empireST_shadow_uniform: is_empireST_uniform
	{
		displayname = "[IS] Shadow Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_shadow";
			contianerclass = "Supply300";
		};
	};
	class is_empireST_nova_uniform: is_empireST_uniform
	{
		displayname = "[IS] Nova Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_nova";
			contianerclass = "Supply300";
		};
	};
	class is_empireST_incinerator_uniform: is_empireST_uniform
	{
		displayname = "[IS] Incinerator Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_incinerator";
		};
	};
	class is_empireST_shock_uniform: is_empireST_uniform
	{
		displayname = "[IS] Shock Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_shock";
		};
	};
	class is_empireST_mortar_uniform: is_empireST_uniform
	{
		displayname = "[IS] Mortar Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_mortar";
		};
	};
	class is_empireST_assault_uniform: is_empireST_uniform
	{
		displayname = "[IS] Assault Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_assault";
		};
	};
	class is_empireST_501_uniform: is_empireST_uniform
	{
		displayname = "[IS] 501st Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_501";
		};
	};
	class is_empireST_wet_uniform: is_empireST_uniform
	{
		displayname = "[IS] Wet Weather Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_wet";
		};
	};
	class is_empireST_magma_uniform: is_empireST_uniform
	{
		displayname = "[IS] Magma Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_magma";
		};
	};
	class is_empireST_sand_uniform: is_empireST_uniform
	{
		displayname = "[IS] Sand Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_sand";
		};
	};
	///dirty
	class is_empireST_dirt_uniform: is_empireST_uniform
	{
		displayname="[IS] Storm Trooper Armor (Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformClass="is_empireST_unit_dirt_base";
		};
	};
	class is_empireST_incinerator_dirt_uniform: is_empireST_uniform
	{
		displayname = "[IS] Incinerator Trooper Armor (Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_dirt_incinerator";
		};
	};
	class is_empireST_shock_dirt_uniform: is_empireST_uniform
	{
		displayname = "[IS] Shock Trooper Armor (Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_dirt_shock";
		};
	};
	class is_empireST_mortar_dirt_uniform: is_empireST_uniform
	{
		displayname = "[IS] Mortar Trooper Armor (Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_dirt_mortar";
		};
	};
	class is_empireST_assault_dirt_uniform: is_empireST_uniform
	{
		displayname = "[IS] Assault Trooper Armor (Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_dirt_assault";
		};
	};
	class is_empireST_501_dirt_uniform: is_empireST_uniform
	{
		displayname = "[IS] 501st Trooper Armor (Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_dirt_501";
		};
	};

	class is_empireST_44_uniform: is_empireST_uniform
	{
		displayname = "[IS] 44th Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass = "is_empireST_unit_44";
		};
	};
////pilot uniform
	class is_empirepilot_uniform: is_empireST_uniform
	{
		displayname="[IS] Pilot Trooper Armor";
		class iteminfo: iteminfo
		{
			containerClass="Supply100";
			uniformClass="is_empirepilot_unit";
			mass=20;
		};
	};
////scout uniform
	class is_empirescout_uniform: is_empireST_uniform
	{
		displayname="[IS] Scout Armor";
		class iteminfo: iteminfo
		{
			containerClass="Supply100";
			uniformClass="is_empireScout_unit";
			mass=20;
		};
	};
////snow stormtrooper uniform
	class is_empiresnow_uniform: is_empireST_uniform
	{
		displayname="[IS] Snow Armor";
		class iteminfo: iteminfo
		{
			containerClass="Supply100";
			uniformClass="is_empireSnow_unit";
			mass=20;
		};
	};
////stormtrooper helmet
	///clean
    class is_empireST_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "Imperial Studios";
		displayname = "Storm Trooper Helmet";
		scope = 0;
		scopecurator = 0;
		scopearsenal = 0;
		ace_hearing_protection = 0.8500002;
		ace_hearing_lowervolume = 0.2;
		picture = "imperial_studio\is_core\ui\imperial_studios_logo_256.paa";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		model = "imperial_studio\is_imperial_unit\model\helmet\is_trooper_helmet.p3d";
		subItems[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "imperial_studio\is_imperial_unit\model\helmet\is_trooper_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
			allowedSlots[] = {801,901,701,605};
			modelsides[] = {0,1,2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class is_empireST_helmet: is_empireST_helmet_base
	{
		displayname = "[IS] Storm Trooper Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\helmet_co.paa"
		};
	};
	class is_empireST_shadow_helmet: is_empireST_helmet
	{
		displayname = "[IS] Shadow Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\shadow\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\shadow\helmet_co.paa",
		};
	};
	class is_empireST_nova_helmet: is_empireST_helmet
	{
		displayname = "[IS] Nova Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\nova\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\nova\helmet_co.paa",
		};
	};
	class is_empireST_incinerator_helmet: is_empireST_helmet
	{
		displayname = "[IS] Incinerator Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\incinerator\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\incinerator\helmet_co.paa",
		};
	};
	class is_empireST_shock_helmet: is_empireST_helmet
	{
		displayname = "[IS] Shock Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\shock\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\shock\helmet_co.paa",
		};
	};
	class is_empireST_mortar_helmet: is_empireST_helmet
	{
		displayname = "[IS] Mortar Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\mortar\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\mortar\helmet_co.paa",
		};
	};
	class is_empireST_assault_helmet: is_empireST_helmet
	{
		displayname = "[IS] Assault Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\assault\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\assault\helmet_co.paa",
		};
	};
	class is_empireST_501_helmet: is_empireST_helmet
	{
		displayname = "[IS] 501st Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\501st\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\501st\helmet_co.paa",
		};
	};
	class is_empireST_wet_helmet: is_empireST_helmet
	{
		displayname = "[IS] Wet Weather Trooper Helmet";
		hiddenselectionsmaterials[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\wet_weather\helmet.rvmat",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\wet_weather\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\wet_weather\helmet_co.paa",
		};
	};
	class is_empireST_magma_helmet: is_empireST_helmet
	{
		displayname = "[IS] Magma Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\magma\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\magma\helmet_co.paa",
		};
	};
	class is_empireST_sand_helmet: is_empireST_helmet
	{
		displayname = "[IS] Sand Trooper Helmet";
		hiddenselectionsmaterials[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\sand\helmet.rvmat",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\sand\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\lore_designs\sand\helmet_co.paa"
		};
	};
	///dirty
	class is_empireST_dirt_helmet: is_empireST_helmet
	{
		displayname = "[IS] Storm Trooper Helmet (Dirty)";
		hiddenselectionsmaterials[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\helmet.rvmat",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\visor.rvmat"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\helmet_co.paa"
		};
	};
	class is_empireST_incinerator_dirt_helmet: is_empireST_dirt_helmet
	{
		displayname = "[IS] Incinerator Trooper Helmet (Dirty)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\incinerator\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\incinerator\helmet_co.paa",
		};
	};
	class is_empireST_shock_dirt_helmet: is_empireST_dirt_helmet
	{
		displayname = "[IS] Shock Trooper Helmet (Dirty)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\shock\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\shock\helmet_co.paa",
		};
	};
	class is_empireST_mortar_dirt_helmet: is_empireST_dirt_helmet
	{
		displayname = "[IS] Mortar Trooper Helmet (Dirty)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\mortar\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\mortar\helmet_co.paa",
		};
	};
	class is_empireST_assault_dirt_helmet: is_empireST_dirt_helmet
	{
		displayname = "[IS] Assault Trooper Helmet (Dirty)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\assault\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\assault\helmet_co.paa",
		};
	};
	class is_empireST_501_dirt_helmet: is_empireST_dirt_helmet
	{
		displayname = "[IS] 501st Trooper Helmet (Dirty)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\501st\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\dirty\lore_designs\501st\helmet_co.paa",
		};
	};

	class is_empireST_44_helmet: is_empireST_helmet
	{
		displayname = "[IS] 44th Trooper Helmet";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\unit_designs\44ab\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\trooper\clean\unit_designs\44ab\helmet_co.paa"
		};
	};
////pilot helmet
	class is_empirepilot_helmet: is_empireST_helmet
	{
		displayname = "[IS] Pilot Trooper Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		model = "imperial_studio\is_imperial_unit\model\helmet\is_pilot_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\pilot\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\pilot\visor_co.paa",
		};
		class iteminfo: iteminfo
		{
			uniformModel = "imperial_studio\is_imperial_unit\model\helmet\is_pilot_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
////scout helmets
	class is_empirescout_helmet: is_empireST_helmet
	{
		displayname = "[IS] Scout Trooper Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		model = "imperial_studio\is_imperial_unit\model\helmet\is_scout_helmet.p3d";
		hiddenselections[] = 
		{
			"camo1",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\scout\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\scout\visor_co.paa",
		};
		class iteminfo: iteminfo
		{
			uniformModel = "imperial_studio\is_imperial_unit\model\helmet\is_scout_helmet.p3d";
			hiddenselections[] = 
			{
				"camo1",
				"visor"
			};
		};
	};
////snow helmets
	class is_empiresnow_helmet: is_empireST_helmet
	{
		displayname = "[IS] Snow Trooper Helmet";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		model = "imperial_studio\is_imperial_unit\model\helmet\is_snow_helmet.p3d";
		hiddenselections[] = 
		{
			"helmet",
			"visor"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\helmet\snow\helmet_co.paa",
			"imperial_studio\is_imperial_unit\data\helmet\snow\visor_co.paa",
		};
		class iteminfo: iteminfo
		{
			uniformModel = "imperial_studio\is_imperial_unit\model\helmet\is_snow_helmet.p3d";
			hiddenselections[] = 
			{
				"helmet",
				"visor"
			};
		};
	};
////stormtrooper vests
	class is_empireST_vest_base: V_PlateCarrier1_rgr
	{
		author = "Imperial Studios";
		displayname = "[IS] Vest Basic";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		allowedSlots[] = {901};
		model = "imperial_studio\is_imperial_unit\model\uniform\is_uniform_gh.p3d";
		picture = "imperial_studio\is_core\ui\imperial_studios_logo_256.paa";
		class ItemInfo: vestItem
		{
			uniformmodel = "imperial_studio\is_imperial_unit\model\vest\is_vest_basic.p3d";
			containerclass = "Supply200";
			mass = 80;
			vesttype = "Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 12;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 12;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 12;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	
	class is_empireST_pauldron_vest: is_empireST_vest_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[IS] Storm Trooper Pauldron";
		model = "imperial_studio\is_imperial_unit\model\vest\is_pauldron1.p3d";
		hiddenselections[] = 
		{
			"pauldron"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
				"pauldron"
			};
			uniformModel = "imperial_studio\is_imperial_unit\model\vest\is_pauldron1.p3d";
		};
	};
	class is_empireST_pauldron_blue_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (Blue)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_blue_co.paa"
		};
	};
	class is_empireST_pauldron_brown_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (Brown)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_brown_co.paa"
		};
	};
	class is_empireST_pauldron_dark_grey_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (Dark Grey)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_dgrey_co.paa"
		};
	};
	class is_empireST_pauldron_grey_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (Grey)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_grey_co.paa"
		};
	};
	class is_empireST_pauldron_orange_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (Orange)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_orange_co.paa"
		};
	};
	class is_empireST_pauldron_red_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (Red)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_red_co.paa"
		};
	};
	class is_empireST_pauldron_white_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (white)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_white_co.paa"
		};
	};
	class is_empireST_pauldron_yellow_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron (Yellow)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_yellow_co.paa"
		};
	};
	
	class is_empireST_pauldron_pouch_vest: is_empireST_pauldron_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches";
		model = "imperial_studio\is_imperial_unit\model\vest\is_pauldron2.p3d";
		hiddenselections[] = 
		{
			"pauldron",
			"pouch"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			hiddenselections[] = 
			{
				"pauldron",
				"pouch"
			};
			containerclass = "Supply250";
			uniformModel = "imperial_studio\is_imperial_unit\model\vest\is_pauldron2.p3d";
		};
	};
	class is_empireST_pauldron_pouch_blue_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (Blue)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_blue_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
	class is_empireST_pauldron_pouch_brown_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (Brown)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_brown_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
	class is_empireST_pauldron_pouch_dark_grey_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (Dark Grey)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_dgrey_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
	class is_empireST_pauldron_pouch_grey_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (Grey)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_grey_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
	class is_empireST_pauldron_pouch_orange_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (Orange)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_orange_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
	class is_empireST_pauldron_pouch_red_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (Red)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_red_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
	class is_empireST_pauldron_pouch_white_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (white)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_white_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
	class is_empireST_pauldron_pouch_yellow_vest: is_empireST_pauldron_pouch_vest
	{
		displayname = "[IS] Storm Trooper Pauldron w/ Pouches (Yellow)";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pauldron_yellow_co.paa",
			"imperial_studio\is_imperial_unit\data\vest\pauldron\pouch_co.paa"
		};
	};
////pilot vests
	class is_empirepilot_rebreather: is_empireST_vest_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[IS] Pilot Rebreather";
		model = "imperial_studio\is_imperial_unit\model\vest\is_pilot_rebreather.p3d";
		hiddenselections[] = 
		{
			"rebreather"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\rebreather\rebreather_co.paa"
		};
		class iteminfo: iteminfo
		{
			hiddenselections[] = 
			{
				"rebreather"
			};
			uniformmodel = "imperial_studio\is_imperial_unit\model\vest\is_pilot_rebreather.p3d";
			containerclass = "Supply100";
			mass = 20;
		};
	};
////scout vests
	class is_empirescout_pouches: is_empireST_vest_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[IS] Scout Pouches";
		model = "imperial_studio\is_imperial_unit\model\vest\is_scout_pouches.p3d";
		hiddenselections[] = 
		{
			"pouches"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\scout\pouches_co.paa"
		};
		class iteminfo: iteminfo
		{
			hiddenselections[] = 
			{
				"pouches"
			};
			uniformmodel = "imperial_studio\is_imperial_unit\model\vest\is_scout_pouches.p3d";
			containerclass = "Supply100";
			mass = 20;
		};
	};
////snow trooper vests
	class is_empiresnow_pouches: is_empireST_vest_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[IS] Snow Pouches";
		model = "imperial_studio\is_imperial_unit\model\vest\is_snow_pouches.p3d";
		hiddenselections[] = 
		{
			"pouches"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\vest\snow\pouches_co.paa"
		};
		class iteminfo: iteminfo
		{
			hiddenselections[] = 
			{
				"pouches"
			};
			uniformmodel = "imperial_studio\is_imperial_unit\model\vest\is_snow_pouches.p3d";
			containerclass = "Supply100";
			mass = 20;
		};
	};
};
class cfgvehicles
{
	class B_Soldier_base_F;
	class B_Soldier_02_f;
	class headgear_base_f;
////stormtrooper unit
	///clean
    class is_empireST_unit_base: B_Soldier_02_f
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		model = "imperial_studio\is_imperial_unit\model\uniform\is_trooper_uniform.p3d";
		identityTypes[] = {"LanguageENG_F","NoGlasses"};
		side = 1;
		author = "Imperial Studios";
		uniformclass = "is_empireST_uniform";
		faction = "is_Empire_b";
		editorSubCategory = "is_empire_men";
		displayname = "Trooper";
		hiddenselections[] = 
		{
			"upper",
			"lower",
			"undersuit"
		};
		hiddenselectionsTextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\\uniform\trooper\clean\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\\uniform\trooper\clean\undersuit_co.paa",
		};
		linkedItems[]=
		{
			"is_empireST_helmet",
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_helmet",
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		items[]=
		{
			
		};
		respawnitems[]={};
		armor=5;
		armorStructural=8;
		explosionShielding=0.5;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class is_empireST_unit_shadow: is_empireST_unit_base
	{
		uniformclass = "is_empireST_shadow_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\shadow\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\shadow\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
		armor = 10;
		armorstructural = 16;
		explosionshielding = 0.75;
		impactdamagemultiplier = 0.25;
	};
	class is_empireST_unit_nova: is_empireST_unit_base
	{
		uniformclass = "is_empireST_nova_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\nova\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\nova\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_incinerator: is_empireST_unit_base
	{
		uniformclass = "is_empireST_incinerator_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\incinerator\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\incinerator\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_shock: is_empireST_unit_base
	{
		uniformclass = "is_empireST_shock_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\shock\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\shock\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_mortar: is_empireST_unit_base
	{
		uniformclass = "is_empireST_mortar_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\mortar\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\mortar\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_assault: is_empireST_unit_base
	{
		uniformclass = "is_empireST_assault_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\assault\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\assault\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_501: is_empireST_unit_base
	{
		uniformclass = "is_empireST_501_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\501st\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\501st\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_wet: is_empireST_unit_base
	{
		uniformclass = "is_empireST_wet_uniform";
		hiddenselectionsmaterials[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\wet_weather\upper_armor.rvmat",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\wet_weather\lower_armor.rvmat",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\wet_weather\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\wet_weather\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_magma: is_empireST_unit_base
	{
		uniformclass = "is_empireST_magma_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\magma\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\magma\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_sand: is_empireST_unit_base
	{
		uniformclass = "is_empireST_sand_uniform";
		hiddenselectionsmaterials[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\sand\upper_armor.rvmat",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\sand\lower_armor.rvmat",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit.rvmat",
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\sand\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\lore_designs\sand\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	///dirt
	class is_empireST_unit_dirt_base: is_empireST_unit_base
	{
		uniformclass = "is_empireST_dirt_uniform";
		hiddenselectionsmaterials[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\upper_armor.rvmat",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lower_armor.rvmat",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit.rvmat",
		};
		hiddenselectionsTextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_dirt_501: is_empireST_unit_dirt_base
	{
		uniformclass = "is_empireST_501_dirt_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\501st\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\501st\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_dirt_shock: is_empireST_unit_dirt_base
	{
		uniformclass = "is_empireST_shock_dirt_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\shock\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\shock\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_dirt_mortar: is_empireST_unit_dirt_base
	{
		uniformclass = "is_empireST_mortar_dirt_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\mortar\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\mortar\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_dirt_assault: is_empireST_unit_dirt_base
	{
		uniformclass = "is_empireST_assault_dirt_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\assault\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\assault\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
	class is_empireST_unit_dirt_incinerator: is_empireST_unit_dirt_base
	{
		uniformclass = "is_empireST_incinerator_dirt_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\incinerator\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\dirty\lore_designs\incinerator\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};

	class is_empireST_unit_44: is_empireST_unit_base
	{
		uniformclass = "is_empireST_44_uniform";
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\unit_designs\44ab\upper_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\unit_designs\44ab\lower_armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\trooper\clean\undersuit_co.paa",
		};
	};
////pilot unit
	class is_empirepilot_unit: is_empireST_unit_base
	{
		uniformclass = "is_empirepilot_uniform";
		model = "imperial_studio\is_imperial_unit\model\uniform\is_pilot_uniform.p3d";
		hiddenselections[] = 
		{
			"armor",
			"gloves",
			"undersuit"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\pilot\armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\pilot\gloves_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\pilot\undersuit_co.paa",
		};
	};
////scout unit
	class is_empirescout_unit: is_empireST_unit_base
	{
		uniformclass = "is_empirescout_uniform";
		model = "imperial_studio\is_imperial_unit\model\uniform\is_scout_uniform.p3d";
		hiddenselections[] = 
		{
			"armor",
			"belt",
			"cloth",
			"shoe"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\scout\armor_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\scout\belt_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\scout\cloth_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\scout\shoe_co.paa"
		};
	};
////snow unit
	class is_empiresnow_unit: is_empireST_unit_base
	{
		uniformclass = "is_empiresnow_uniform";
		model = "imperial_studio\is_imperial_unit\model\uniform\is_snow_uniform.p3d";
		hiddenselections[] = 
		{
			"armor_up",
			"armor_down",
			"kama",
			"undersuit"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\uniform\snow\armor_up_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\snow\armor_down_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\snow\kama_co.paa",
			"imperial_studio\is_imperial_unit\data\uniform\snow\undersuit_co.paa"
		};
	};
////backpack
	class B_Kitbag_rgr;
	class is_empireST_backpack: B_Kitbag_rgr
	{
		author = "Imperial Studios";
		scope = 2;
		picture = "imperial_studio\is_core\ui\imperial_studios_logo_256.paa";
		displayname = "[IS] Storm Trooper Backpack";
		model = "imperial_studio\is_imperial_unit\model\backpack\is_trooper_backpack.p3d";
		maximumload = 200;
		hiddenselections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\backpack\trooper\backpack_co.paa",
			"imperial_studio\is_imperial_unit\data\backpack\trooper\hose_co.paa",
		};
	};
	class is_empireST_backpack_radio: is_empireST_backpack
	{
		displayname = "[IS] Storm Trooper Radio Backpack";
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
		maximumload = 150;
	};

	class is_empiresnow_backpack: is_empireST_backpack
	{
		displayname = "[IS] Snow Trooper Backpack";
		model = "imperial_studio\is_imperial_unit\model\backpack\is_snow_backpack.p3d";
		hiddenselections[] =
		{
			"backpack"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_unit\data\backpack\snow\backpack_co.paa"
		};
	};
////backpack loaded
	class is_empireST_backpack_AT_load: is_empireST_backpack
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportmagazines
		{
			class 442_rps6_heat_mag
			{
				magazine = "442_rps6_heat_mag";
				count = 2;
			};
		};
	};
	class is_empireST_backpack_medic_load: is_empireST_backpack
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		class transportitems
		{
			class _xx_ace_fielddressing
			{
				name = "ACE_fieldDressing";
				count = 20;
			};
			class _xx_ace_elasticbandage: _xx_ace_fielddressing
			{
				name = "ACE_ElasticBandage";
			};
			class _xx_ace_quickclot: _xx_ace_fielddressing
			{
				name = "ACE_quikclot";
			};
			class _xx_ACE_packingBandage: _xx_ace_fielddressing
			{
				name = "ACE_packingBandage";
			};
			class _xx_ace_epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 5;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count = 12;
			};
			class _xx_ACE_blood_IV
			{
				name="ACE_blood_IV";
				count=4;
			};
			class _xx_ACE_blood_IV_500
			{
				name="ACE_blood_IV_500";
				count=4;
			};
			class _xx_ACE_blood_IV_250
			{
				name="ACE_blood_IV_250";
				count=4;
			};
			class _xx_ACE_touriquet
			{
				name="ACE_touriquet";
				count = 6;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=1;
			};
		};
	};
////headgear
	class is_empireST_headgear: headgear_base_f
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "Storm Trooper Helmet";
		author = "Imperial Studios";
		editorcategory = "is_empire";
		editorsubcategory = "is_empire_headgear";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_shadow_headgear: is_empireST_headgear
	{
		displayname = "Shadow Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_shadow_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_nova_headgear: is_empireST_headgear
	{
		displayname = "Nova Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_nova_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_incinerator_headgear: is_empireST_headgear
	{
		displayname = "Incinerator Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_incinerator_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_shock_headgear: is_empireST_headgear
	{
		displayname = "Shock Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_shock_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_mortar_headgear: is_empireST_headgear
	{
		displayname = "Mortar Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_mortar_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_commander_headgear: is_empireST_headgear
	{
		displayname = "Commander Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_commander_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_assault_headgear: is_empireST_headgear
	{
		displayname = "Assault Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_assault_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_501_headgear: is_empireST_headgear
	{
		displayname = "501st Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_501_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_44_headgear: is_empireST_headgear
	{
		displayname = "44th Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_44_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_wet_headgear: is_empireST_headgear
	{
		displayname = "Wet Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_wet_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_magma_headgear: is_empireST_headgear
	{
		displayname = "Magma Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_magma_helmet";
				count = 1;
			};
		};
	};
	class is_empireST_sand_headgear: is_empireST_headgear
	{
		displayname = "Sand Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empireST_sand_helmet";
				count = 1;
			};
		};
	};
	class is_empirepilot_headgear: is_empireST_headgear
	{
		displayname = "Pilot Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empirepilot_helmet";
				count = 1;
			};
		};
	};
	class is_empirescout_headgear: is_empireST_headgear
	{
		displayname = "Scout Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empirescout_helmet";
				count = 1;
			};
		};
	};
	class is_empiresnow_headgear: is_empireST_headgear
	{
		displayname = "Snow Trooper Helmet";
		class transportItems
		{
			class Helmet
			{
				name = "is_empiresnow_helmet";
				count = 1;
			};
		};
	};
////placeable units
	class is_empireST_unit: is_empireST_unit_base
	{
		displayname = "Storm Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_at: is_empireST_unit
	{
		displayname = "Storm Trooper (AT)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		backpack = "is_empireST_backpack_AT_load";
		weapons[]=
		{
			"is_imp_e11_rifle",
			"442_RPS6",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"442_RPS6",
			"Throw",
			"Put"
		};
	};
	class is_empireST_unit_medic: is_empireST_unit
	{
		displayname = "Storm Trooper (Medic)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		backpack = "is_empireST_backpack_medic_load";
		attendant = 1;
	};
	class is_empireST_unit_eng: is_empireST_unit
	{
		displayname = "Storm Trooper (Engineer/EOD)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		backpack = "";
		engineer = 1;
		candeactivatemines = 1;
	};
	
	class is_empireST_unit_FTL: is_empireST_unit
	{
		displayname = "Storm Trooper (FTL)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_ftl",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_ftl",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class is_empireST_unit_SL: is_empireST_unit
	{
		displayname = "Storm Trooper (SL)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_sl",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_sl",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class is_empireST_unit_company: is_empireST_unit
	{
		displayname = "Storm Trooper (Company)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_company",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_company",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class is_empireST_unit_plt_hq: is_empireST_unit
	{
		displayname = "Storm Trooper (Platoon HQ)";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_plt_hq",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_helmet",
			"is_empireST_pauldron_plt_hq",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class is_empireST_unit_shadow_e11: is_empireST_unit_shadow
	{
		displayname = "Shadow Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_shadow_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_shadow_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_nova_e11: is_empireST_unit_nova
	{
		displayname = "Nova Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_nova_helmet",
			"is_empireST_pauldron_nova",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_nova_helmet",
			"is_empireST_pauldron_nova",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_incinerator_e11: is_empireST_unit_incinerator
	{
		displayname = "Incinerator Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_incinerator_helmet",
			"is_empireST_pauldron_incinerator",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_incinerator_helmet",
			"is_empireST_pauldron_incinerator",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_shock_e11: is_empireST_unit_shock
	{
		displayname = "Shock Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_shock_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_shock_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_mortar_e11: is_empireST_unit_mortar
	{
		displayname = "Mortar Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_mortar_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_mortar_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	/*class is_empireST_unit_commander_e11: is_empireST_unit_commander
	{
		displayname = "Commander Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_commander_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_commander_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};*/
	class is_empireST_unit_assault_e11: is_empireST_unit_assault
	{
		displayname = "Assault Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_assault_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_assault_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_501_e11: is_empireST_unit_501
	{
		displayname = "501st Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_501_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_501_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_44_e11: is_empireST_unit_44
	{
		displayname = "44th Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_44_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_44_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_wet_e11: is_empireST_unit_wet
	{
		displayname = "Wet Weather Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_wet_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_wet_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_magma_e11: is_empireST_unit_magma
	{
		displayname = "Magma Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_magma_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_magma_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireST_unit_sand_e11: is_empireST_unit_sand
	{
		displayname = "Sand Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireST_sand_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		RespawnlinkedItems[]=
		{
			"is_empireST_sand_helmet",
			"is_empireST_vest_base",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empirepilot_unit_e11: is_empirepilot_unit
	{
		displayname = "Pilot Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empirepilot_helmet",
			"is_empirepilot_rebreather",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"is_empirepilot_helmet",
			"is_empirepilot_rebreather",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empireScout_unit_e11: is_empireScout_unit
	{
		displayname = "Scout Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		linkedItems[] = 
		{
			"is_empireScout_helmet",
			"is_empirescout_pouches",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"is_empireScout_helmet",
			"is_empirescout_pouches",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
	class is_empiresnow_unit_e11: is_empiresnow_unit
	{
		displayname = "Snow Trooper";
		scope = 2;
		scopearsenal = 2;
		scopecurator = 2;
		backpack = "is_empiresnow_backpack";
		linkedItems[] = 
		{
			"is_empiresnow_helmet",
			"is_empiresnow_pouches",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		respawnlinkedItems[] = 
		{
			"is_empiresnow_helmet",
			"is_empiresnow_pouches",
			"ItemMap",
			"ItemGPS",
			"ItemRadio",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"is_imp_e11_rifle",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		respawnmagazines[] = 
		{
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"is_imp_magazine_65",
			"442_thermal_det_mag",
			"442_thermal_det_mag",
			"smokeShell",
			"smokeShell",
			"smokeShell",
		};
		items[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
        respawnitems[] = 
        {
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_packingBandage",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_elsasticBandage",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
            "ACE_quikclot",
        };
	};
};


