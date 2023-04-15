class cfgpatches
{
    class is_imperial_aircraft_tie_fighter
    {
        requiredAddons[] = 
        {
            "A3_Air_F_Exp",
			"A3_Air_F_Exp_VTOL_02"
        };
        units[] = 
		{
			"is_tiefighter"
		};
        weapons[] = {};
    };
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class cfgweapons
{
	class gatling_20mm;
	class Mgun;
	class is_tie_reaper_gun;
	class is_tie_fighter_gun: is_tie_reaper_gun
	{
		Displayname = "Tie Fighter Guns";
		class FullAuto: MGun
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"imperial_studio\is_sounds\tie\tie_weapon.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0013;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 10;
			aiRateOfFire = .1375;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
};
class cfgvehicles
{
    class Plane;
	class Plane_Base_F: Plane
	{
		class HitPoints;
	};
	class VTOL_02_base_F: Plane_Base_F
	{
		class AnimationSources;
		class EventHandlers;
		class NewTurret;
		class CargoTurret;
		class Components;
		class sounds;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class ViewPilot;
	};
    class is_tiefighter_base: VTOL_02_base_F
    {
        author = "Imperial Studio";
        scope = 1;
        scopecurator = 1;
		side = 1;
        displayname = "Tie Fighter";
        model = "imperial_studio\is_imperial_aircraft\tie_fighter\is_tie_fighter.p3d";
        icon = "imperial_studio\is_imperial_aircraft\tie_fighter\icons\tie_fighter_ca.paa";
        picture = "";
        overviewpicture = "";
        vehicleclass = "Air";
        editorSubcategory = "EdSubcat_Planes";
        driverAction="pilot_VTOL_02";
        getInAction="GetInHigh";
		getOutAction="GetOutHigh";
        driverCompartments="Compartment1";
        driverCanEject=0;
        memoryPointTaskMarker="TaskMarker_1_pos";
		memoryPointsGetInDriver="GetIn_pos";
		memoryPointsGetInDriverDir="GetIn_dir";
		memoryPointsGetInCargo="";
		memoryPointsGetInCargoDir="";
        memoryPointLRocket="";
		memoryPointRRocket="";
        extCameraPosition[]={0,1,-25};
        class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
        transportSoldier=0;
        accuracy=0.5;
		armor=100;
		armorStructural=2;
		explosionShielding=1;
		epeImpulseDamageCoef=50;
		waterLeakiness=8;
		waterResistanceCoef=0.029999999;
		ejectSpeed[]={0,-2,0};
		damageResistance=0.00039999999;
		laserScanner=1;
		showAllTargets=4;
		showCrewAim=0;
		radarTargetSize=1.4;
		visualTargetSize=1.2;
		irTargetSize=1.4;
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
        maximumLoad=0;
        supplyRadius=5;
		getInRadius=9;
        gearRetracting=0;
        weapons[] = 
        {
            "is_tie_fighter_gun",
			"CMFlareLauncher",
        };
        magazines[] = 
        {
            "442_50_200rnd_he_green_mag",
            "442_50_200rnd_he_green_mag",
            "442_50_200rnd_he_green_mag",
			"240Rnd_CMFlare_Chaff_Magazine",
        };
		gunBeg[] = 
		{
			"barrel_end1",
			"barrel_end2"
		};
		gunEnd[] = 
		{
			"barrel_beg1",
			"barrel_beg2",
		};
		memorypointgun[] = 
		{
			"barrel_end1",
			"barrel_end2"
		};
		memorypointcm[] = 
		{
			"exhaust1_pos",
			"exhaust2_pos",
		};
		memorypointcmdir[] = 
		{
			"exhaust1_dir",
			"exhaust2_dir",
		};
        maxSpeed=700;
		landingAoa="10*3.1415/180";
		landingSpeed=0;
		stallSpeed=210;
		stallWarningTreshold=0.2;
		wheelSteeringSensitivity=0.69999999;
		airBrake=1;
		airBrakeFrictionCoef = 20;
		flaps=1;
		flapsFrictionCoef=0;
		angleOfIndicence="1*3.1415/180";
		envelope[]={0,0.0099999998,0.2,4,6,7.5999999,8.3999996,9.1999998,9.3999996,9.6000004,9.6999998,9.8000002,8,1};
		altNoForce=11000;
		altFullForce=2500;
		throttleToThrustLogFactor=2;
		thrustCoef[]={1.42,1.17,1.15,1.14,1.13,1.12,1.1,1.0700001,0.99000001,0.2,0,0,0};
		aileronSensitivity=1;
		aileronCoef[]={0.60000002,0.80000001,1,1.1,1.2,1.2,0.40000001};
		elevatorSensitivity=1;
		elevatorCoef[]={0.2,0.38999999,0.50999999,0.60000002,0.68000001,0.75,0.80000001,0.85000002,0.89999998,0.74000001,0.30000001};
		rudderInfluence=1;
		rudderCoef[]={0.2,0.5,1,1.5,1.8,2.0999999,2.4000001,2.5,2.5999999,2.7,2.7,0.80000001,0.40000001};
		aileronControlsSensitivityCoef=3;
		elevatorControlsSensitivityCoef=5;
		rudderControlsSensitivityCoef=3;
		draconicForceXCoef=14;
		draconicForceYCoef=2;
		draconicForceZCoef=2;
		draconicTorqueXCoef[]={14,12,11.2,10.6,9.8999996,9.6000004,9.6999998,10.5,11,11.5,12};
		draconicTorqueYCoef[]={0.5,1,2,2.3,3,2.5999999,2.4000001,2.2,2,1.9,1.8};
		vtol=4;
		VTOLYawInfluence=15;
		VTOLPitchInfluence=15;
		VTOLRollInfluence=15;
		maxOmega=2000;
        defaultUserMFDvalues[]={0.15000001,1,0.15000001,1};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class GunnerAim
					{
						type="vector";
						source="turret";
						pos0[]={0,-0.5};
						pos10[]={0.0068000001,-0.012};
						projection=0;
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class SliderDiveSource
					{
						type="linear";
						source="horizonDive";
						min="RAD(-10)";
						max="RAD(10)";
						minPos[]={0.105,0.38};
						maxPos[]={0.105,0.54000002};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min="RAD(10)";
						max="RAD(30)";
						minPos[]={0,-0.039999999};
						maxPos[]=
						{
							0,
							"0)"
						};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min="RAD(30)";
						max="RAD(90)";
						minPos[]={0,-0.039999999};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min="RAD(-30)";
						max="RAD(-10)";
						minPos[]={0,0};
						maxPos[]={0,0.039999999};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min="RAD(-90)";
						max="RAD(-30)";
						maxPos[]={0,0.039999999};
					};
					class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						sourceOffset=-3;
						min=0;
						max=1000;
						minPos[]={0.88499999,0.2};
						maxPos[]={0.88499999,0.375};
					};
					class GForceSource
					{
						type="linear";
						source="gmeter";
						sourceScale=0.15000001;
						min=-1;
						max=3;
						minPos[]={0.105,0.69999999};
						maxPos[]={0.105,0.86000001};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-15;
						max=15;
						minPos[]={0.79500002,0.60000002};
						maxPos[]={0.79500002,0.83999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ImpactPointRockets
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.565};
						pos10[]={0.73400003,0.79500002};
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class rtdRPM1
					{
						type="linear";
						source="rpm";
						min=0.1;
						max=1;
						minPos[]={0,-0.075000003};
						maxPos[]={0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source="rpm";
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ThrustVectoringRotation
					{
						type="rotational";
						source="vtolvectoring";
						sourceScale=100;
						center[]={0.059999999,0.145};
						min=0;
						max=100;
						minAngle=0;
						maxAngle=-90;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46000001;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1toview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2toview";
					};
					class Airport3: Airport1
					{
						source="airportCorner3toview";
					};
					class Airport4: Airport1
					{
						source="airportCorner4toview";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HUDCenter",
								1
							},
							
							{
								"VelocityVector",
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0,0},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,-0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.1,0.62},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.079999998,0.30000001},
								1
							},
							{},
							
							{
								{0.1,0.34},
								1
							},
							
							{
								{0.079999998,0.34},
								1
							},
							{},
							
							{
								{0.1,0.38},
								1
							},
							
							{
								{0.079999998,0.38},
								1
							},
							{},
							
							{
								{0.1,0.46000001},
								1
							},
							
							{
								{0.079999998,0.46000001},
								1
							},
							{},
							
							{
								{0.1,0.54000002},
								1
							},
							
							{
								{0.079999998,0.54000002},
								1
							},
							{},
							
							{
								{0.1,0.57999998},
								1
							},
							
							{
								{0.079999998,0.57999998},
								1
							},
							{},
							
							{
								{0.1,0.62},
								1
							},
							
							{
								{0.079999998,0.62},
								1
							},
							{},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0,0},
								1
							},
							
							{
								"GForceSource",
								{0.015,-0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								{0.1,0.68800002},
								1
							},
							
							{
								{0.1,0.81999999},
								1
							},
							{},
							
							{
								{0.1,0.69999999},
								1
							},
							
							{
								{0.079999998,0.69999999},
								1
							},
							{},
							
							{
								{0.1,0.74000001},
								1
							},
							
							{
								{0.079999998,0.74000001},
								1
							},
							{},
							
							{
								{0.1,0.77999997},
								1
							},
							
							{
								{0.079999998,0.77999997},
								1
							},
							{},
							
							{
								{0.1,0.81999999},
								1
							},
							
							{
								{0.079999998,0.81999999},
								1
							},
							{},
							
							{
								{0.40000001,0.86000001},
								1
							},
							
							{
								{0.40000001,0.94},
								1
							},
							
							{
								{0.60000002,0.94},
								1
							},
							
							{
								{0.60000002,0.86000001},
								1
							},
							
							{
								{0.40000001,0.86000001},
								1
							},
							{},
							
							{
								{0.40000001,0.89200002},
								1
							},
							
							{
								{0.40799999,0.89200002},
								1
							},
							{},
							
							{
								{0.60000002,0.89200002},
								1
							},
							
							{
								{0.59200001,0.89200002},
								1
							},
							{},
							
							{
								{0.5,0.86000001},
								1
							},
							
							{
								{0.5,0.86799997},
								1
							},
							{},
							
							{
								{0.5,0.94},
								1
							},
							
							{
								{0.5,0.93199998},
								1
							},
							{},
							
							{
								{0.46000001,0.07},
								1
							},
							
							{
								{0.54000002,0.07},
								1
							},
							
							{
								{0.54000002,0.035},
								1
							},
							
							{
								{0.46000001,0.035},
								1
							},
							
							{
								{0.46000001,0.07},
								1
							},
							{},
							
							{
								{0.15000001,0.115},
								1
							},
							
							{
								{0.85000002,0.115},
								1
							},
							{},
							
							{
								{0,0.95999998},
								1
							},
							
							{
								{1.1,0.95999998},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							{},
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47999999},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.51999998},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.16500001,7.0890902e-009},
								1
							},
							
							{
								"HUDCenter",
								{-0.22,9.45212e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.16500001,-1.9339701e-009},
								1
							},
							
							{
								"HUDCenter",
								{0.22,-2.57863e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{-0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{-0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{-0.155564,0.152904},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{0.155563,0.152904},
								1
							},
							{},
							
							{
								{0.033333302,0.14866699},
								1
							},
							
							{
								{0.054000001,0.162},
								1
							},
							
							{
								{0.13500001,0.162},
								1
							},
							
							{
								{0.13500001,0.14866699},
								1
							},
							
							{
								{0.126333,0.139667},
								1
							},
							
							{
								{0.118,0.139667},
								1
							},
							
							{
								{0.093333296,0.129333},
								1
							},
							
							{
								{0.033333302,0.129333},
								1
							},
							
							{
								{0.015666701,0.111},
								1
							},
							
							{
								{0.0086666699,0.115333},
								1
							},
							
							{
								{0.0116667,0.13600001},
								1
							},
							{}
						};
					};
					class Gunner
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"GunnerAim",
								{0.48500001,0.89200002},
								1
							},
							
							{
								"GunnerAim",
								{0.48500001,0.90799999},
								1
							},
							
							{
								"GunnerAim",
								{0.51499999,0.90799999},
								1
							},
							
							{
								"GunnerAim",
								{0.51499999,0.89200002},
								1
							},
							
							{
								"GunnerAim",
								{0.48500001,0.89200002},
								1
							}
						};
					};
					class DiveNumber
					{
						type="text";
						source="horizondive";
						sourceScale=57.29578;
						sourceOffset=0;
						align="left";
						scale=1;
						pos[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.00-0.011"
							},
							1
						};
						right[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.12,
								"0.00-0.011"
							},
							1
						};
						down[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.03-0.011"
							},
							1
						};
					};
					class VSpeedGroup
					{
						condition="on";
						class VSpeedNumber
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.82+0.07",
									0.72799999
								},
								1
							};
							right[]=
							{
								
								{
									"0.86+0.07",
									0.72799999
								},
								1
							};
							down[]=
							{
								
								{
									"0.82+0.07",
									0.76300001
								},
								1
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.84899998,0.75999999},
									1
								},
								
								{
									{0.92900002,0.75999999},
									1
								},
								
								{
									{0.92900002,0.72500002},
									1
								},
								
								{
									{0.84899998,0.72500002},
									1
								},
								
								{
									{0.84899998,0.75999999},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupUp
					{
						condition="vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.71499997},
									1
								},
								
								{
									{0.90899998,0.71499997},
									1
								},
								
								{
									{0.889,0.69499999},
									1
								},
								
								{
									{0.86900002,0.71499997},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupDown
					{
						condition="-vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.76999998},
									1
								},
								
								{
									{0.90899998,0.76999998},
									1
								},
								
								{
									{0.889,0.79000002},
									1
								},
								
								{
									{0.86900002,0.76999998},
									1
								},
								{}
							};
						};
					};
					class AltGroup
					{
						condition="1000 - altitudeAGL";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.0089999996,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								{},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								{},
								
								{
									{0.889,0.2},
									1
								},
								
								{
									{0.889,0.375},
									1
								},
								{},
								
								{
									{0.87900001,0.2},
									1
								},
								
								{
									{0.89899999,0.2},
									1
								},
								{},
								
								{
									{0.87900001,0.375},
									1
								},
								
								{
									{0.89899999,0.375},
									1
								},
								{}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourceOffset=-3;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderAltitudeSource",
								
								{
									0.11,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="1000";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88499999,0.171},
								1
							};
							right[]=
							{
								{0.92500001,0.171},
								1
							};
							down[]=
							{
								{0.88499999,0.20100001},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.22},
							1
						};
						down[]=
						{
							{0.13,0.25999999},
							1
						};
						right[]=
						{
							{0.2,0.22},
							1
						};
					};
					class Angle_90
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.285},
							1
						};
						right[]=
						{
							{0.11,0.285},
							1
						};
						down[]=
						{
							{0.07,0.315},
							1
						};
					};
					class Angle_30
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.32499999},
							1
						};
						right[]=
						{
							{0.11,0.32499999},
							1
						};
						down[]=
						{
							{0.07,0.35499999},
							1
						};
					};
					class Angle_10
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.36500001},
							1
						};
						right[]=
						{
							{0.11,0.36500001},
							1
						};
						down[]=
						{
							{0.07,0.39500001},
							1
						};
					};
					class Angle_0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.44499999},
							1
						};
						right[]=
						{
							{0.11,0.44499999},
							1
						};
						down[]=
						{
							{0.07,0.47499999},
							1
						};
					};
					class Angle_10m
					{
						type="text";
						source="static";
						text="-10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.52499998},
							1
						};
						right[]=
						{
							{0.11,0.52499998},
							1
						};
						down[]=
						{
							{0.07,0.55500001},
							1
						};
					};
					class Angle_30m
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.565},
							1
						};
						right[]=
						{
							{0.11,0.565},
							1
						};
						down[]=
						{
							{0.07,0.59500003},
							1
						};
					};
					class Angle_90m
					{
						type="text";
						source="static";
						text="-90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.60500002},
							1
						};
						right[]=
						{
							{0.11,0.60500002},
							1
						};
						down[]=
						{
							{0.07,0.63499999},
							1
						};
					};
					class GMeterStatic3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.68300003},
							1
						};
						right[]=
						{
							{0.11,0.68300003},
							1
						};
						down[]=
						{
							{0.07,0.713},
							1
						};
					};
					class GMeterStatic2
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.72299999},
							1
						};
						right[]=
						{
							{0.11,0.72299999},
							1
						};
						down[]=
						{
							{0.07,0.75300002},
							1
						};
					};
					class GMeterStatic1
					{
						type="text";
						source="static";
						text="1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.76300001},
							1
						};
						right[]=
						{
							{0.11,0.76300001},
							1
						};
						down[]=
						{
							{0.07,0.79299998},
							1
						};
					};
					class GMeterStatic0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.80299997},
							1
						};
						right[]=
						{
							{0.11,0.80299997},
							1
						};
						down[]=
						{
							{0.07,0.833},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.889,0.46000001},
							1
						};
						right[]=
						{
							{0.93900001,0.46000001},
							1
						};
						down[]=
						{
							{0.889,0.495},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.89899999,0.46000001},
							1
						};
						right[]=
						{
							{0.949,0.46000001},
							1
						};
						down[]=
						{
							{0.89899999,0.495},
							1
						};
					};
					class ThrustVectoring
					{
						condition="1+vtolvectoring";
						class VectorigNumber
						{
							type="text";
							source="vtolvectoring";
							sourceScale=90;
							align="left";
							scale=1;
							pos[]=
							{
								{0.102,0.14},
								1
							};
							right[]=
							{
								{0.127,0.14},
								1
							};
							down[]=
							{
								{0.102,0.155},
								1
							};
						};
						class VectoringArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,-0.0060000001},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.044,0},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,0.0060000001},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,-0.0060000001},
									1
								},
								{},
								
								{
									"ThrustVectoringRotation",
									{-0.044,0},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.0040000002,0},
									1
								},
								{}
							};
						};
					};
					class ThrustVectoringAuto
					{
						condition="-vtolvectoring";
						class VectorigNumber
						{
							type="text";
							source="static";
							sourceScale=1;
							text="AUTO";
							align="left";
							scale=1;
							pos[]=
							{
								{0.103,0.14},
								1
							};
							right[]=
							{
								{0.123,0.14},
								1
							};
							down[]=
							{
								{0.103,0.155},
								1
							};
						};
					};
					class EngineRPM
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.88999999,0.5},
								1
							},
							
							{
								{0.88999999,0.66000003},
								1
							},
							{},
							
							{
								{0.92000002,0.5},
								1
							},
							
							{
								{0.86000001,0.5},
								1
							},
							{},
							
							{
								{0.92000002,0.66000003},
								1
							},
							
							{
								{0.86000001,0.66000003},
								1
							},
							{},
							
							{
								{0.91000003,0.54000002},
								1
							},
							
							{
								{0.87,0.54000002},
								1
							},
							{},
							
							{
								{0.91000003,0.57999998},
								1
							},
							
							{
								{0.87,0.57999998},
								1
							},
							{},
							
							{
								{0.91000003,0.62},
								1
							},
							
							{
								{0.87,0.62},
								1
							},
							{}
						};
					};
					class EngineRPMLines
					{
						type="line";
						width=5;
						points[]=
						{
							
							{
								
								{
									"0.90+0.01",
									0.66000003
								},
								1
							},
							
							{
								"rtdrpm1",
								
								{
									"0.90+0.01",
									0.66000003
								},
								1
							},
							{},
							
							{
								
								{
									"0.86+0.01",
									0.66000003
								},
								1
							},
							
							{
								"rtdrpm2",
								
								{
									"0.86+0.01",
									0.66000003
								},
								1
							},
							{},
							{}
						};
					};
					class RPM60Text
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.64499998},
							1
						};
						right[]=
						{
							{0.95499998,0.64499998},
							1
						};
						down[]=
						{
							{0.92500001,0.67000002},
							1
						};
					};
					class RPM80Text
					{
						type="text";
						source="static";
						text="80";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.60500002},
							1
						};
						right[]=
						{
							{0.95499998,0.60500002},
							1
						};
						down[]=
						{
							{0.92500001,0.63},
							1
						};
					};
					class RPM100Text
					{
						type="text";
						source="static";
						text="100";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.565},
							1
						};
						right[]=
						{
							{0.95499998,0.565},
							1
						};
						down[]=
						{
							{0.92500001,0.58999997},
							1
						};
					};
					class RPM120Text
					{
						type="text";
						source="static";
						text="120";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.52499998},
							1
						};
						right[]=
						{
							{0.95499998,0.52499998},
							1
						};
						down[]=
						{
							{0.92500001,0.55000001},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class HeadingRotationArrow
					{
						condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.51999998,0.079999998},
									1
								},
								
								{
									{0.5,0.11},
									1
								},
								
								{
									{0.47999999,0.079999998},
									1
								},
								
								{
									{0.51999998,0.079999998},
									1
								},
								{}
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.001"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.001"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.47799999,0.075000003},
									1
								},
								
								{
									{0.52200001,0.075000003},
									1
								},
								
								{
									{0.55199999,0.094999999},
									1
								},
								
								{
									{0.52200001,0.115},
									1
								},
								
								{
									{0.47799999,0.115},
									1
								},
								
								{
									{0.44800001,0.094999999},
									1
								},
								
								{
									{0.47799999,0.075000003},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceoffset=0;
						width=3;
						NeverEatSeaWeed=1;
						top=0.15000001;
						center=0.5;
						bottom=0.85000002;
						lineXleft=0.114;
						lineYright=0.12;
						lineXleftMajor=0.114;
						lineYrightMajor=0.13;
						majorLineEach=2;
						numberEach=6;
						step=0.5;
						stepSize=0.034482799;
						align="center";
						scale=1;
						pos[]={0.15000001,0.13};
						right[]={0.20999999,0.13};
						down[]={0.15000001,0.17};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankSource",
								{0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.050000001,0},
								1
							},
							{},
							
							{
								"HorizonBankSource",
								{-0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.050000001,0},
								1
							},
							{}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.80900002,0.96100003},
							1
						};
						right[]=
						{
							{0.85900003,0.96100003},
							1
						};
						down[]=
						{
							{0.80900002,0.99599999},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.89899999,0.96100003},
							1
						};
						right[]=
						{
							{0.949,0.96100003},
							1
						};
						down[]=
						{
							{0.89899999,0.99599999},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.60500002,0.96100003},
							1
						};
						right[]=
						{
							{0.65499997,0.96100003},
							1
						};
						down[]=
						{
							{0.60500002,0.99599999},
							1
						};
					};
					class CurrentWeapon
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.889},
							1
						};
						right[]=
						{
							{1.029,0.889},
							1
						};
						down[]=
						{
							{0.97899997,0.92400002},
							1
						};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source="ammo";
						align="left";
						pos[]=
						{
							{0.97899997,0.921},
							1
						};
						right[]=
						{
							{1.029,0.921},
							1
						};
						down[]=
						{
							{0.97899997,0.95599997},
							1
						};
					};
					class CoordXText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.96100003},
							1
						};
						right[]=
						{
							{0.70499998,0.96100003},
							1
						};
						down[]=
						{
							{0.65499997,0.99599999},
							1
						};
					};
					class CoordYText
					{
						type="text";
						source="static";
						text="";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.875,0.96100003},
							1
						};
						right[]=
						{
							{0.92500001,0.96100003},
							1
						};
						down[]=
						{
							{0.875,0.99599999},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"TargetingPodDir",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"TargetingPodDir",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.215,0.87970102},
								1
							};
							right[]=
							{
								{0.27500001,0.87970102},
								1
							};
							down[]=
							{
								{0.215,0.928846},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="missilelocked";
						class TargetLockedText
						{
							type="text";
							source="static";
							text="TARGET ACQUIRED";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.19499999,0.85900003},
								1
							};
							right[]=
							{
								{0.235,0.85900003},
								1
							};
							down[]=
							{
								{0.19499999,0.88999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type="text";
							source="static";
							text="TOF:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.127+0.13",
									0.889
								},
								1
							};
							right[]=
							{
								{0.30199999,0.889},
								1
							};
							down[]=
							{
								
								{
									"0.127+0.13",
									0.92400002
								},
								1
							};
						};
						class DistanceText
						{
							type="text";
							source="static";
							text="DISTANCE:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.125+0.13",
									0.921
								},
								1
							};
							right[]=
							{
								{0.30000001,0.921},
								1
							};
							down[]=
							{
								
								{
									"0.125+0.13",
									0.95599997
								},
								1
							};
						};
						class TOF_source: CurrentWeapon
						{
							source="missileflighttime";
							align="right";
							pos[]=
							{
								{0.26899999,0.889},
								1
							};
							right[]=
							{
								{0.31900001,0.889},
								1
							};
							down[]=
							{
								{0.26899999,0.92400002},
								1
							};
						};
						class TargetDistance: CurrentWeapon
						{
							source="targetDist";
							sourceLength=0;
							sourcePrecision=1;
							sourceScale=0.001;
							align="right";
							pos[]=
							{
								{0.26899999,0.921},
								1
							};
							right[]=
							{
								{0.31900001,0.921},
								1
							};
							down[]=
							{
								{0.26899999,0.95599997},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21623901},
								1
							};
							right[]=
							{
								{0.54500002,0.21623901},
								1
							};
							down[]=
							{
								{0.48500001,0.265385},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.82564098},
								1
							};
							right[]=
							{
								{0.54000002,0.82564098},
								1
							};
							down[]=
							{
								{0.5,0.85512799},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.0235897},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0176923},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0176923},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{0,0.0235897},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0176923},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0176923},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.0235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.235897},
										1
									},
									
									{
										"ILS_H",
										{0,0.235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.235897},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.117949},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.117949},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,0.117949},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.117949},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.235897},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.235897},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class MGun
					{
						condition="-2+mgun*ImpactDistance";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0275214},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.028000001},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class Rockets
					{
						condition="-2+rocket*ImpactDistance";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0275214},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.028000001},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0982906},
									1
								},
								
								{
									"ImpactPoint",
									{0.01736,-0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{0.034200002,-0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{0.050000001,-0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{0.064280003,-0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{0.0766,-0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{0.086599998,-0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{0.093970001,-0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{0.098480001,-0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{0.1,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.098480001,0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{0.093970001,0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{0.086599998,0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{0.0766,0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{0.064280003,0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{0.050000001,0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{0.034200002,0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{0.01736,0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0982906},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01736,0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{-0.034200002,0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{-0.050000001,0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{-0.064280003,0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0766,0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{-0.086599998,0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{-0.093970001,0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098480001,0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{-0.1,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098480001,-0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{-0.093970001,-0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.086599998,-0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0766,-0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{-0.064280003,-0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{-0.050000001,-0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{-0.034200002,-0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01736,-0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0982906},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.0196581},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,-0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									
									{
										"+ 0.02",
										0
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0.0196581},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									
									{
										"- 0.02",
										0
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,-0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.0196581},
									1
								},
								{},
								
								{
									"VelocityVector",
									0.001,
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								},
								
								{
									"VelocityVector",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.79713702},
								1
							};
							right[]=
							{
								{0.97500002,0.79713702},
								1
							};
							down[]=
							{
								{0.935,0.83448702},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.79713702},
								1
							};
							right[]=
							{
								{0.97000003,0.79713702},
								1
							};
							down[]=
							{
								{0.94999999,0.83448702},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.79713702},
								1
							};
							right[]=
							{
								{1,0.79713702},
								1
							};
							down[]=
							{
								{0.95999998,0.83448702},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								}
							};
						};
					};
				};
			};
			class HMD_CMPilot: AirplaneHUD
			{
				turret[]={-1};
				class Draw
				{
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="on - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37)";
					class CMName
					{
						type="text";
						source="cmweapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.86900002,0.84899998},
							1
						};
						right[]=
						{
							{0.91900003,0.84899998},
							1
						};
						down[]=
						{
							{0.86900002,0.884},
							1
						};
					};
					class CMCount
					{
						type="text";
						source="cmammo";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.84899998},
							1
						};
						right[]=
						{
							{1.029,0.84899998},
							1
						};
						down[]=
						{
							{0.97899997,0.884},
							1
						};
					};
				};
			};
		};
        hiddenselections[] = 
        {
            "body1",
            "body2",
            "wing_panel",
            "wing_frame"
        };
        memoryPointRDust="WheelDust_right_pos";
		memoryPointLDust="WheelDust_left_pos";
		dustEffect="VTOLDust";
		waterEffect="VTOLWater";
        reportOwnPosition=1;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
        class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=26;
						maxTrackableSpeed=75;
						animDirection="Cannon_rot";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=26;
						maxTrackableSpeed=75;
						animDirection="Cannon_rot";
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=120;
						angleRangeVertical=80;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=40;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class WingVortices
		{
			class wingleft1
			{
				effectName="WingVortices";
				position="vapor_wintip_left1_pos";
			};
			class wingleft2
			{
				effectName="WingVortices";
				position="vapor_wintip_left2_pos";
			};
			class wingright1
			{
				effectName="WingVortices";
				position="vapor_wintip_right1_pos";
			};
			class wingright2
			{
				effectName="WingVortices";
				position="vapor_wintip_right2_pos";
			};
		};
        class Turrets {};
        memoryPointDriverOptics="PilotCamera_pos";
		unitInfoType="RscOptics_CAS_Pilot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-360;
			maxTurn=360;
			initTurn=0;
			minElev=-55;
			maxElev=55;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=1;
			maxMouseYRotSpeed=1;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class sounds: sounds
		{
			class EngineInt
			{
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine_int.wss", 0.794328, 1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};

			class EngineHighInt
			{
				frequency = 1;
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine_int.wss",0.630957,1.2,2500};
				volume = "(1-camPos)*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineHighOut
			{
				frequency = 1;
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine.wss",1,1.2,2500};
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};

			class EngineLowInt
			{
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine_int.wss",0.630957,1,2100};
				volume = "(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineLowOut
			{
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine.wss",1,1,2100};
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
		
			class EngineExt
			{
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine.wss", 1.25893, 1, 600};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class TurbineHighInt
			{
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine_int.wss",0.630957,1,2100};
				volume = "(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class TurbineHighout
			{
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine.wss", 1.25893, 1, 600};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class turbineInt
			{
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine_int.wss",0.630957,1,2100};
				volume = "(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class turbineout
			{
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine.wss", 1.25893, 1, 600};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class forsageInt
			{
				frequency = "1.0 min (rpm + 0.5)";
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine_int.wss",0.630957,1,2100};
				volume = "(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class forsageOut
			{
				sound[] = {"imperial_studio\is_sounds\tie\tie_engine.wss", 1.25893, 1, 600};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
		};
		soundEngineOnInt[] = {"imperial_studio\is_sounds\tie\tie_start_int.wss", 0.316228, 1};
		soundEngineOnExt[] = {"imperial_studio\is_sounds\tie\tie_start.wss", 0.794328, 1, 600};
		soundEngineOffInt[] = {"imperial_studio\is_sounds\tie\tie_engine_int.wss", 0.316228, 1};
		soundEngineOffExt[] = {"imperial_studio\is_sounds\tie\tie_engine.wss", 0.794328, 1, 600};
		soundLocked[] = {"kobra\442_a_vehicle\laat\sounds\laat_lock_on_beep.wss", 1, 1};
		soundIncommingMissile[] = {"kobra\442_a_vehicle\laat\sounds\laat_lock_on_alert_beep.wss", 0.316228, 1};
    };
    class is_tiefighter: is_tiefighter_base
    {
        scope = 2;
        scopecurator = 2;
        scopearsenal = 2;
		faction = "is_Empire_b";
		crew = "is_empirepilot_unit_e11";
        displayname = "Tie Fighter";
        hiddenselectionstextures[] = 
        {
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\body1_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\body2_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_panel_co.paa",
            "imperial_studio\is_imperial_aircraft\tie_fighter\data\wing_frame_co.paa",
        };
		class TextureSources {};
    };
};