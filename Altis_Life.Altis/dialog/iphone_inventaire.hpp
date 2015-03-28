#include "player_sys_iphone.sqf"

class iphone_inventaire {
	idd = playersys_DIALOG;
	name= "iphone_inventaire";
	movingEnable = true;
	enableSimulation = true;
	
	class controlsBackground {
	
		class Inventaire_Back: life_RscPicture
		{
			idc = -1;
			text = "aurore_data2\data\app1.paa";
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.516198 * safezoneW;
			h = 0.84363 * safezoneH;
		};
		
		class moneystatueinfo: Life_RscStructuredText
		{
			idc = 2015;
			x = 0.334375 * safezoneW + safezoneX;
			y = 0.360814 * safezoneH + safezoneY;
			w = 0.0863537 * safezoneW;
			h = 0.0329999 * safezoneH;
		};
		
		class moneystatueinfo1: Life_RscStructuredText
		{
			idc = 2016;
			x = 0.334896 * safezoneW + safezoneX;
			y = 0.426555 * safezoneH + safezoneY;
			w = 0.0863537 * safezoneW;
			h = 0.0329999 * safezoneH;
		};
		
		class PlayerCarryWeight : life_RscTitle {
			idc = carry_weight;
			style = 1;
			text = "";
			x = 0.656615 * safezoneW + safezoneX;
			y = 0.310926 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	
	class controls {
		
		class itemList: life_RscListBox
		{
			sizeEx = 0.03;
			idc = item_list;
			x = 0.578854 * safezoneW + safezoneX;
			y = 0.338704 * safezoneH + safezoneY;
			w = 0.114688 * safezoneW;
			h = 0.169815 * safezoneH;
		};
		
		class moneyEdit: Life_RscEdit
		{
			idc = 2018;
			text = "1";
			x = 0.307552 * safezoneW + safezoneX;
			y = 0.568445 * safezoneH + safezoneY;
			w = 0.113958 * safezoneW;
			h = 0.0311481 * safezoneH;
		};
		
		class NearPlayers: Life_RscCombo
		{
			idc = 2022;
			x = 0.307031 * safezoneW + safezoneX;
			y = 0.616593 * safezoneH + safezoneY;
			w = 0.113958 * safezoneW;
			h = 0.0311481 * safezoneH;
		};
		
		class moneyDrop: Life_RscButtonInvisible
		{
			idc = 2001;
			text = "";
			onButtonClick = "[] call life_fnc_giveMoney";
			x = 0.306094 * safezoneW + safezoneX;
			y = 0.663037 * safezoneH + safezoneY;
			w = 0.115 * safezoneW;
			h = 0.056148 * safezoneH;
		};
		
		class itemEdit: Life_RscEdit
		{
			idc = item_edit;
			text = "1";
			x = 0.578386 * safezoneW + safezoneX;
			y = 0.513778 * safezoneH + safezoneY;
			w = 0.113958 * safezoneW;
			h = 0.0311481 * safezoneH;
		};
		
		class iNearPlayers: Life_RscCombo
		{
			idc = 2023;
			x = 0.578906 * safezoneW + safezoneX;
			y = 0.555926 * safezoneH + safezoneY;
			w = 0.113958 * safezoneW;
			h = 0.0311481 * safezoneH;
		};
		
		class GiveButton: Life_RscButtonInvisible
		{
			idc = 2002;
			text = "";
			onButtonClick = "[] call life_fnc_giveItem;";
			x = 0.579427 * safezoneW + safezoneX;
			y = 0.649 * safezoneH + safezoneY;
			w = 0.113958 * safezoneW;
			h = 0.0311481 * safezoneH;
		};
		
		class UseButton: Life_RscButtonInvisible
		{
			text = "";
			onButtonClick = "[] call life_fnc_useItem;";
			x = 0.578906 * safezoneW + safezoneX;
			y = 0.607333 * safezoneH + safezoneY;
			w = 0.113958 * safezoneW;
			h = 0.0311481 * safezoneH;
		};
		
		class RemoveButton: Life_RscButtonInvisible
		{
			text = "";
			onButtonClick = "[] call life_fnc_removeItem;";
			x = 0.579427 * safezoneW + safezoneX;
			y = 0.690667 * safezoneH + safezoneY;
			w = 0.113958 * safezoneW;
			h = 0.0311481 * safezoneH;
		};
		
		class CloseButton: Life_RscButtonInvisible
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			tooltip = "Quitter";
			x = 0.715885 * safezoneW + safezoneX;
			y = 0.458667 * safezoneH + safezoneY;
			w = 0.0308334 * safezoneW;
			h = 0.0531481 * safezoneH;
		};
		
		class Licenses_Menu : Life_RscControlsGroup
		{
			idc = -1;
			x = 0.438802 * safezoneW + safezoneX;
			y = 0.338815 * safezoneH + safezoneY;
			w = 0.121771 * safezoneW;
			h = 0.268185 * safezoneH;
			
			class Controls
			{
				class Life_Licenses : Life_RscStructuredText
				{
					idc = 2014;
					sizeEx = 0.020;
					text = "";
					x = 0;
					y = 0;
					w = 0.27; h = 0.65;
				};
			};
		};
	};
};