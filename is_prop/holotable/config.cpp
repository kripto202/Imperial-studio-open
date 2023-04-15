class cfgpatches
{
	class is_prop_holotable
	{
		author = "Imperial Studio Team";
		requiredAddons[] = 
		{
			"is_core"
		};
		requiredVersion = 0.1;
		units[] = 
		{
			"is_holotable"
		};
	};
};

class cfgvehicles
{
	class house_small_f;
	class is_holotable: house_small_f
	{
		author = "Imperial Studio Team";
		mapsize = 1;
		scope = 2;
		scopecurator = 2;
		displayname = "Holotable";
		model = "imperial_studio\is_prop\holotable\holotable.p3d";
		editorcategory = "is_empire";
		editorsubcategory = "is_empire_prop";
		vehicleclass = "lamps";
		armor = 500;
		cost = 1000;
		armorlights = 1;
		islockingdisabled = 1;
		hiddenselections[] = 
		{
			"table",
			"screen"
		};
		hiddenselectionstextures[] = 
		{
			"imperial_studio\is_prop\holotable\data\table_co.paa",
			"imperial_studio\is_prop\holotable\data\screen_co.paa",
		};
		class MarkerLights
		{
			class Light_1
			{
				color[]={0.30000001,0.30000001,1};
				ambient[]={0,0,0.090000004};
				intensity=1000;
				name="Light_point";
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0.2;
					hardLimitStart=2;
					hardLimitEnd=5;
				};
			};
		};
	};
};