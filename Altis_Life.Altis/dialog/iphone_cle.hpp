class iphone_cle {
	idd = 2700;
	name= "iphone_cle";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_keyMenu;";
	
	class controlsBackground {
	
		class CleBackground: life_RscPicture
		{
			idc = -1;
			text = "aurore_data2\data\app2.paa";
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.516198 * safezoneW;
			h = 0.84363 * safezoneH;
		};
	};
	
	class controls {
		
		class KeyChainList: Life_RscListbox
		{
			idc = 2701;
			text = "";
			sizeEx = 0.040;
			x = 0.325 * safezoneW + safezoneX;
			y = 0.356482 * safezoneH + safezoneY;
			w = 0.350104 * safezoneW;
			h = 0.221667 * safezoneH;
		};
		
		class NearPlayers: Life_RscCombo
		{
			idc = 2702;
			x = 0.412187 * safezoneW + safezoneX;
			y = 0.585556 * safezoneH + safezoneY;
			w = 0.178438 * safezoneW;
			h = 0.0184074 * safezoneH;
		};
		
		class DropKey: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_keyDrop";
			x = 0.429375 * safezoneW + safezoneX;
			y = 0.685557 * safezoneH + safezoneY;
			w = 0.138334 * safezoneW;
			h = 0.0322963 * safezoneH;
		};
		
		class GiveKey: Life_RscButtonInvisible
		{
			idc = 2703;
			onButtonClick = "[] call life_fnc_keyGive";
			x = 0.429375 * safezoneW + safezoneX;
			y = 0.642038 * safezoneH + safezoneY;
			w = 0.138334 * safezoneW;
			h = 0.0322963 * safezoneH;
		};
		
		class CloseButtonKey: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			tooltip = "Quitter";
			x = 0.715885 * safezoneW + safezoneX;
			y = 0.458667 * safezoneH + safezoneY;
			w = 0.0308334 * safezoneW;
			h = 0.0531481 * safezoneH;
		};
	};
};