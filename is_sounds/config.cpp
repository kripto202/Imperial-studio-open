class cfgpatches
{
    class is_sounds
    {
        requiredversion = 0.1;
        units[] = {};
        weapons[] = {};
        requiredaddons[] = 
        {
            "is_core"
        };
    };
};
class cfganimationsourcesounds
{
	class GenericDoorsSound;
	class is_atat_door1: GenericDoorsSound
	{
		class Doormove
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.01,0.02]) * (phase factor[0.99,0.98])";
			/*sound0[] = {"\imperial_studio\is_sounds\atat\atatdoor1.ogg",1,1,30};
			sound1[] = {"\imperial_studio\is_sounds\atat\atatdoor1.ogg",1,1,30};
            sound[] = {"sound0",0.5,"sound1",0.5};*/
		};
	};
    class is_atat_door2: is_atat_door1
    {
        class Doormove: Doormove
        {
            /*sound0[] = {"\imperial_studio\is_sounds\atat\atatdoor2.ogg",1,1,30};
			sound1[] = {"\imperial_studio\is_sounds\atat\atatdoor2.ogg",1,1,30};*/
        };
    };
};