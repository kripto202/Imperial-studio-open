class cfgpatches
{
	class is_prop_tie_fighter
	{
		author = "Imperial Studio Team";
		requiredAddons[] = 
		{
			"is_core",
			"is_imperial_aircraft_tie_fighter"
		};
		requiredVersion = 0.1;
		units[] = 
		{
			"is_tie_wing_holder",
			"land_is_tie_stand",
			"is_tie_body",
			"is_tie_wing",
			"is_tie_crane",
		};
	};
};

class cfgvehicles
{
	class house_small_f;	
	class is_tie_wing_holder: house_small_f
	{
		author = "Imperial Studio Team";
		mapsize = 1;
		scope = 2;
		scopecurator = 2;
		displayname = "Tie Fighter Wing Holder";
		model = "imperial_studio\is_prop\tie_fighter\tie_wing_holder.p3d";
		editorcategory = "is_empire";
		editorsubcategory = "is_empire_prop";
		vehicleclass = "lamps";
		armor = 500;
		cost = 1000;
		armorlights = 1;
		islockingdisabled = 1;
		hiddenselections[] = 
		{
			"wing_panel",
			"wing_frame"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_panel_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_frame_co.paa",
		};
		class animationsources 
		{
			class hidewing1
			{
				displayname = "Wing 1";
				author = "Imperial Studio Team";
				source = "user";
				animperiod=0.001;
				initphase=1;
				mass="-50";
			};
			class hidewing2: hidewing1
			{
				displayname = "Wing 2";
			};
			class hidewing3: hidewing1
			{
				displayname = "Wing 3";
			};
			class hidewing4: hidewing1
			{
				displayname = "Wing 4";
			};
		};
		class Attributes 
		{
			class hidewing1
			{
				displayname="Wing 1";
				property="hidewing1";
				control="CheckboxNumber";
				defaultvalue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
			class hidewing2: hidewing1
			{
				displayname="Wing 2";
				property="hidewing2";
			};
			class hidewing3: hidewing1
			{
				displayname="Wing 3";
				property="hidewing3";
			};
			class hidewing4: hidewing1
			{
				displayname="Wing 4";
				property="hidewing4";
			};
		};
	};
	class land_is_tie_stand: house_small_f
	{
		author = "Imperial Studio Team";
		mapsize = 1;
		scope = 2;
		scopecurator = 2;
		displayname = "Tie Fighter Stand";
		model = "imperial_studio\is_prop\tie_fighter\tie_stand.p3d";
		editorcategory = "is_empire";
		editorsubcategory = "is_empire_prop";
		vehicleclass = "lamps";
		armor = 500;
		cost = 1000;
		armorlights = 1;
		islockingdisabled = 1;
		ladders[] = {{"start1","end1"}};
		hiddenselections[] = 
		{
			"body1",
            "body2",
            "wing_panel",
            "wing_frame"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_aircraft\tie_fighter\data\body1_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\body2_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_panel_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_frame_co.paa",
		};
		class animationsources 
		{
			class hidetie
			{
				displayname = "Show Tie";
				author = "Imperial Studio Team";
				source = "user";
				animperiod=0.001;
				initphase=1;
				mass="-50";
			};
		};
		class Attributes 
		{
			class hidetie
			{
				displayname="Show Tie";
				property="hidetie";
				control="CheckboxNumber";
				defaultvalue=1;
				expression="_this animateSource ['%s',_value,true]";
			};
		};
	};
	class is_tie_body: land_is_tie_stand
	{
		displayname = "Tie Body";
		model = "imperial_studio\is_prop\tie_fighter\tie_body.p3d";
		hiddenselections[] = 
		{
			"body1",
            "body2",
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_aircraft\tie_fighter\data\body1_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\body2_co.paa",
		};
		class animationsources {};
		class Attributes {};
	};
	class is_tie_wing: land_is_tie_stand
	{
		displayname = "Tie Wing";
		model = "imperial_studio\is_prop\tie_fighter\tie_wing.p3d";
		hiddenselections[] = 
		{
			"wing_panel",
            "wing_frame"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_panel_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_frame_co.paa",
		};
		class animationsources {};
		class Attributes {};
	};
	class is_tie_crane: land_is_tie_stand
	{
		displayname = "Tie Fighter Crane";
		model = "imperial_studio\is_prop\tie_fighter\tie_crane.p3d";
		ladders[] = {};
	};
};