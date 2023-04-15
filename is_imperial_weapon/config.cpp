class CfgPatches
{
	class is_imperial_weapon
	{
		author = "Imperial Studio";
		requiredAddons[] = 
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Rifles_MX",
			"A3_Data_F",
			"A3_Weapons_F_Acc",
			"is_core"
		};
		requiredVersion = 0.1;
		units[] = 
		{
			
		};
		weapons[] = 
		{
			"is_imp_e11_rifle",
			"is_imp_e11_rifle_scope"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class cfgammo
{
	class BulletBase;
	class is_imp_ammo_e11: BulletBase
	{
		hit=8;
		model="imperial_studio\is_imperial_weapon\red_tracer.p3d";
		typicalspeed = 200;
		coefgravity = 0;
		tracerColor[] = {1,0,0,0.04};
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=8;
		dangerRadusHit=12;
		suppressionRadusBulletClose=6;
		suppressionRadusHit=8;
		audiblefire=35;
		waterFriction=0;
		caliber = 0.869565;
		tracerScale = 0.5;
		tracerStartTime = .001;
		tracerEndTime = 6;
		thrust = 200;
		timetolive=6;
		effectfly="is_imp_plasma_red";
		// ExplosionEffects="442_plasma_impact";
		// cratereffects = "442_plasma_impact";
		explosive=0;
		airFriction = 0;
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};

		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 2.23872, 1, 75};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 2.23872, 1, 75};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 2.23872, 1, 75};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 2.23872, 1, 75};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 2.23872, 1, 75};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 2.23872, 1, 75};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 2.23872, 1, 75};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 2.23872, 1, 75};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 2.23872, 1, 75};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 2.23872, 1, 75};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 2.23872, 1, 75};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 2.23872, 1, 75};
		bulletFly[] = {"bulletFly1", 0.083, "bulletFly2", 0.083, "bulletFly3", 0.083, "bulletFly4", 0.083, "bulletFly5", 0.083, "bulletFly6", 0.083, "bulletFly7", 0.083, "bulletFly8", 0.083, "bulletFly9", 0.083, "bulletFly10", 0.083, "bulletFly11", 0.083, "bulletFly12", 0.083};
		soundHit1[]=
		{
			"imperial_studio\is_core\sounds\hit3.wss",
			1.9952624,
			1,
			120
		};
		soundHit2[]=
		{
			"imperial_studio\is_core\sounds\hit3.wss",
			1.9952624,
			1,
			120
		};
		soundHit3[]=
		{
			"imperial_studio\is_core\sounds\hit3.wss",
			1.9952624,
			1,
			120
		};
		soundHit4[]=
		{
			"imperial_studio\is_core\sounds\hit3.wss",
			1.9952624,
			1,
			120
		};
		soundHit5[]=
		{
			"imperial_studio\is_core\sounds\hit3.wss",
			1.9952624,
			1,
			120
		};
		soundHit6[]=
		{
			"imperial_studio\is_core\sounds\hit3.wss",
			1.9952624,
			1,
			120
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.1,
			"soundHit5",
			0.15000001,
			"soundHit6",
			0.15000001
		};
		class HitEffects
		{
			default_mat = "442_plasma_impact";
			Hit_Foliage_Banana = "442_plasma_impact";
			Hit_Foliage_Dead = "442_plasma_impact";
			Hit_Foliage_green = "442_plasma_impact";
			Hit_Foliage_Green_big = "442_plasma_impact";
			Hit_Foliage_Palm = "442_plasma_impact";
			Hit_Foliage_Pine = "442_plasma_impact";
			hitBuilding = "442_plasma_impact";
			hitConcrete = "442_plasma_impact";
			hitFoliage = "442_plasma_impact";
			hitGlass = "442_plasma_impact";
			hitGlassArmored = "442_plasma_impact";
			hitGroundHard = "442_plasma_impact";
			hitGroundRed = "442_plasma_impact";
			hitGroundSoft = "442_plasma_impact";
			hitHay = "442_plasma_impact";
			hitMan = "442_plasma_impact";
			hitMetal = "442_plasma_impact";
			hitMetalPlate = "442_plasma_impact";
			hitPlastic = "442_plasma_impact";
			hitRubber = "442_plasma_impact";
			hitTyre = "442_plasma_impact";
			hitVirtual = "442_plasma_impact";
			hitWater = "442_plasma_impact";
			hitWood = "442_plasma_impact";
		};
	};
};
class cfgmagazines
{
	class CA_Magazine;
	class is_imp_magazine_65: CA_Magazine
	{
		author="kripto202";
		scope=2;
		displayname="E11 Magazine";
		initspeed=200;
		nameSound="magazine";
		maxLeadSpeed=25;
		mass=8;
		//modelspecial="is_imperial_weapon\e11_mag.p3d";
		model = "imperial_studio\is_imperial_weapon\e11_mag.p3d";
		tracersevery=1;
		picture = "imperial_studio\is_core\ui\imperial_studios_logo_256.paa";
		type=256;
		count = 60;
		ammo = "is_imp_ammo_e11";
		lastRoundsTracer = 60;
	};
};
class cfgweapons
{
	class Rifle_Long_Base_F;
	class is_imp_e11_rifle_base: Rifle_Long_Base_F
	{
		scope = 1;
		picture = "imperial_studio\is_core\ui\imperial_studios_logo_256.paa";
		model = "imperial_studio\is_imperial_weapon\e11.p3d";
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"imperial_studio\is_core\sounds\blaster_fire1.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"imperial_studio\is_core\sounds\blaster_fire1.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"imperial_studio\is_core\sounds\blaster_fire1.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"imperial_studio\is_core\sounds\blaster_fire1.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"imperial_studio\is_core\sounds\blaster_fire1.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"imperial_studio\is_core\sounds\blaster_fire1.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"imperial_studio\is_imperial_weapon\e11_mk3.rtm"
		};
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		reloadAction = "GestureReloadSMG_03";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class is_imp_e11_rifle: is_imp_e11_rifle_base
	{
		author = "Imperial Studio";
		scope = 2;
		displayname = "[K] E11 Blaster";
		model = "imperial_studio\is_imperial_weapon\e11.p3d";
		magazines[]=
		{
			//"442_65_60rnd_red_mag",
			"is_imp_magazine_65"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				compatibleItems[] = 
				{
					"optic_aco",
					"optic_hamr",
					//"optic_Holosight_blis_F",
					"optic_e11"
				};
			};
		};
	};
	class is_imp_e11_rifle_scope: is_imp_e11_rifle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_e11";
			};
		};
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_e11: ItemCore
	{
		author = "Imperial Studio";
		scope = 2;
		displayname = "E-11 Scope";
		model = "imperial_studio\is_imperial_weapon\e11_scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			optictype = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F_Beta\acc\acco_arco_F.p3d";
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
				class Hamr2Scope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					modelOptics[]=
					{
						"\A3\Weapons_F_EPA\acc\reticle_marksman_F"
					};
					opticsDisablePeripherialVision=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
};
class cfgvehicles
{
	
};
class is_imp_plasma_red
{
	class plasma_red
	{
		simulation="light";
		type="442_plasmaRed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};