class Life_impound_menu
{	
	idd = 2800;
	name="life_vehicle_shop";
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "ctrlShow [2330,false];";

	class controlsBackground
	{
	
		class menugarage: life_RscPicture
		{
			idc = 1200;
			text = "aurore_data2\data\garage.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.682 * safezoneH;
		};
	};
	
	class controls {
	
		class listveh: Life_RscListBox
		{
			idc = 2802;
			text = "";
			sizeEx = 0.04;
			colorBackground[] = {0.1,0.1,0.1,0.9};
			onLBSelChanged = "_this call life_fnc_garageLBChange;";
			x = 0.309322 * safezoneW + safezoneX;
			y = 0.37416 * safezoneH + safezoneY;
			w = 0.130885 * safezoneW;
			h = 0.258557 * safezoneH;
		};
		class infoveh: Life_RscStructuredText
		{
			idc = 2803;
			text = "";
			sizeEx = 0.035;			
			x = 0.449984 * safezoneW + safezoneX;
			y = 0.37504 * safezoneH + safezoneY;
			w = 0.240729 * safezoneW;
			h = 0.258705 * safezoneH;
		};
		class insure: Life_RscButtonInvisible
		{
			idc = 97480;
			onButtonClick = "[] call life_fnc_InsureCar;";
			x = 0.622708 * safezoneW + safezoneX;
			y = 0.650296 * safezoneH + safezoneY;
			w = 0.0730208 * safezoneW;
			h = 0.0346296 * safezoneH;
		};
		class vendre: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_sellGarage;";
			x = 0.491667 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.0730208 * safezoneW;
			h = 0.0346296 * safezoneH;
		};
		class recuperer: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_unimpound;";
			x = 0.411979 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.0719792 * safezoneW;
			h = 0.0346296 * safezoneH;
		};
		class retour: Life_RscButtonInvisible
		{
			idc = -1;
			text = "";
			onButtonClick = "closeDialog 0;";
			x = 0.306771 * safezoneW + safezoneX;
			y = 0.649074 * safezoneH + safezoneY;
			w = 0.0225 * safezoneW;
			h = 0.0355555 * safezoneH;
		};
	
	};
	
};