class iphone_admin_menu {
	idd = 2900;
	name= "iphone_admin_menu";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_adminMenu;";
	
	class controlsBackground {
		
		class AdminBackground: life_RscPicture
		{
			idc = -1;
			text = "aurore_data2\data\app6.paa";
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.516198 * safezoneW;
			h = 0.84363 * safezoneH;
		};
	};
	
	class controls {
	
		class PlayerList_Admin: Life_RscListbox
		{
			idc = 2902;
			text = "";
			sizeEx = 0.035;
			//colorBackground[] = {0,0,0,0};
			onLBSelChanged = "[_this] spawn life_fnc_adminQuery";
			x = 0.302604 * safezoneW + safezoneX;
			y = 0.382407 * safezoneH + safezoneY;
			w = 0.143854 * safezoneW;
			h = 0.342037 * safezoneH;
		};
		
		class PlayerBInfo: Life_RscStructuredText
		{
			idc = 2903;
			text = "";
			x = 0.459896 * safezoneW + safezoneX;
			y = 0.412963 * safezoneH + safezoneY;
			w = 0.238229 * safezoneW;
			h = 0.262148 * safezoneH;
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
		
		class AdminID: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_admingetID;";
			x = 0.460312 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.106979 * safezoneW;
			h = 0.0399257 * safezoneH;
		};
		
		class AdminJail: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_arrestAdmin;";
			x = 0.591562 * safezoneW + safezoneX;
			y = 0.687926 * safezoneH + safezoneY;
			w = 0.106979 * safezoneW;
			h = 0.0399257 * safezoneH;
		};
	};
};