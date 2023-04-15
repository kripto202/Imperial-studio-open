class cfgpatches
{
	class is_prop_atat
	{
		author = "Imperial Studio Team";
		requiredAddons[] = 
		{
			"is_core"
		};
		requiredVersion = 0.1;
		units[] = 
		{
			"is_atat",
			"is_atat_wreck",
			"is_atat_wreck_2",
			"is_atat_head"
		};
	};
};

class cfgvehicles
{
	class house_small_f;
	class is_atat: house_small_f
	{
		author = "Imperial Studio Team";
		mapsize = 1;
		scope = 2;
		scopecurator = 2;
		displayname = "ATAT";
		model = "imperial_studio\is_prop\atat\atat.p3d";
		editorcategory = "is_empire";
		editorsubcategory = "is_empire_prop";
		vehicleclass = "lamps";
		armor = 500;
		cost = 1000;
		armorlights = 1;
		islockingdisabled = 1;
		hiddenselections[] = 
		{
			"body1",
			"body2",
			"legs",
			"head",
			"head_guns"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_prop\atat\data\body1_co.paa",
			"imperial_studio\is_prop\atat\data\body2_co.paa",
			"imperial_studio\is_prop\atat\data\legs_co.paa",
			"imperial_studio\is_prop\atat\data\head1_co.paa",
			"imperial_studio\is_prop\atat\data\head2_co.paa",
		};
		class animationsources
		{
			class atat_doorL1_open
			{
				source="user";
				animPeriod=2;
				initphase=0;
				sound = "";
			};
			class atat_doorL2_open: atat_doorL1_open 
			{
				animPeriod = 4;
				sound = "";
			};
			class atat_doorR1_open: atat_doorL1_open {};
			class atat_doorR2_open: atat_doorL2_open {};
		};
		class useractions
		{
			class atat_doorL_open
			{
				displayname="Open Door";
				position="doorL_pos";
				radius=5;
				onlyforplayer=0;
				priority=101;
				condition="this animationsourcephase ""atat_doorL1_open"" == 0";
				statement = "this spawn {_this animate ['atat_doorL1_open',1]; sleep 2; _this animate ['atat_doorL2_open',1];};";
				//statement="this animatesource [""atat_doorL1_open"", 1] AND this animatesource [""atat_doorL2_open"", 1];";
			};
			class atat_doorL_close: atat_doorL_open
			{
				displayname="Close Doors";
				condition="this animationsourcephase ""atat_doorL1_open"" == 1";
				statement="this spawn {_this animate ['atat_doorL2_open',0]; sleep 4; _this animate ['atat_doorL1_open',0];};";
				//statement="this animatesource [""atat_doorL2_open"", 0] AND this animatesource [""atat_doorL1_open"", 0];";
			};
			class atat_doorR_open
			{
				displayname="Open Door";
				position="doorR_pos";
				radius=5;
				onlyforplayer=0;
				priority=101;
				condition="this animationsourcephase ""atat_doorR1_open"" == 0";
				statement = "this spawn {_this animate ['atat_doorR1_open',1]; sleep 2; _this animate ['atat_doorR2_open',1];};";
				//statement="this animatesource [""atat_doorR1_open"", 1] AND this animatesource [""atat_doorR2_open"", 1];";
			};
			class atat_doorR_close: atat_doorR_open
			{
				displayname="Close Doors";
				condition="this animationsourcephase ""atat_doorR1_open"" == 1";
				statement="this spawn {_this animate ['atat_doorR2_open',0]; sleep 4; _this animate ['atat_doorR1_open',0];};";
				//statement="this animatesource [""atat_doorR2_open"", 0] AND this animatesource [""atat_doorR1_open"", 0];";
			};
		};
	};
	class is_atat_wreck: is_atat
	{
		displayname = "ATAT Wreck";
		model = "imperial_studio\is_prop\atat\atat_wreck.p3d";
	};
	class is_atat_wreck_2: is_atat
	{
		displayname = "ATAT Wreck 2";
		model = "imperial_studio\is_prop\atat\atat_wreck_2.p3d";
	};
	class is_atat_head: is_atat
	{
		displayname = "ATAT Head";
		model = "imperial_studio\is_prop\atat\atat_head.p3d";
		hiddenselections[] = 
		{
			"head",
			"head_guns"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_prop\atat\data\head1_co.paa",
			"imperial_studio\is_prop\atat\data\head2_co.paa",
		};
		class animationsources {};
		class useractions {};
	};
};