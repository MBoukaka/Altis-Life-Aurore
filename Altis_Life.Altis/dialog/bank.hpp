class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
	
		class atm_back: Life_RscPicture
		{
			idc = -1;
			text = "aurore_data2\icons\atm.paa";
			x = 0.357656 * safezoneW + safezoneX;
			y = 0.217593 * safezoneH + safezoneY;
			w = 0.266615 * safezoneW;
			h = 0.470333 * safezoneH;
		};
		
	};
	
	class controls {

		class CashTitle : Life_RscStructuredText
		{
			idc = 2701;
			text = "";
			x = 0.415104 * safezoneW + safezoneX;
			y = 0.299074 * safezoneH + safezoneY;
			w = 0.085 * safezoneW;
			h = 0.0531481 * safezoneH;
		};
		
		class WithdrawButton : Life_RscButtonInvisible 
		{
			idc = -1;
			text = "";
			onButtonClick = "[] call life_fnc_bankWithdraw";
			x = 0.429375 * safezoneW + safezoneX;
			y = 0.457259 * safezoneH + safezoneY;
			w = 0.0579166 * safezoneW;
			h = 0.03 * safezoneH;
		};
		
		class DepositButton : Life_RscButtonInvisible 
		{
			idc = -1;
			text = "";
			onButtonClick = "[] call life_fnc_bankDeposit";
			x = 0.429375 * safezoneW + safezoneX;
			y = 0.419296 * safezoneH + safezoneY;
			w = 0.0579166 * safezoneW;
			h = 0.03 * safezoneH;
		};
		
		class moneyEdit : Life_RscEdit {
		
			idc = 2702;
			
			text = "1";
			sizeEx = 0.030;
			x = 0.413021 * safezoneW + safezoneX;
			y = 0.362038 * safezoneH + safezoneY;
			w = 0.0886458 * safezoneW;
			h = 0.0225925 * safezoneH;
		
		};
		
		class PlayerList : Life_RscCombo 
		{
			idc = 2703;
			
			x = 0.412864 * safezoneW + safezoneX;
			y = 0.39037 * safezoneH + safezoneY;
			w = 0.088698 * safezoneW;
			h = 0.0225926 * safezoneH;
		};
		
		class TransferButton : Life_RscButtonInvisible 
		{
			idc = -1;
			text = "";
			onButtonClick = "[] call life_fnc_bankTransfer";
			x = 0.429375 * safezoneW + safezoneX;
			y = 0.494296 * safezoneH + safezoneY;
			w = 0.0579166 * safezoneW;
			h = 0.03 * safezoneH;
		};
		
		class GangDeposit : Life_RscButtonInvisible
		{
			idc = 2705;
			text = "";
			onButtonClick = "[] call life_fnc_gangDeposit";
			x = 0.429375 * safezoneW + safezoneX;
			y = 0.546148 * safezoneH + safezoneY;
			w = 0.0579166 * safezoneW;
			h = 0.0142593 * safezoneH;
		};
		
		class GangWithdraw : Life_RscButtonInvisible
		{
			idc = 2706;
			text = "";
			onButtonClick = "[] call life_fnc_gangWithdraw";
			x = 0.429375 * safezoneW + safezoneX;
			y = 0.565592 * safezoneH + safezoneY;
			w = 0.0579166 * safezoneW;
			h = 0.0142593 * safezoneH;
		};
		
		class CloseButtonKey : Life_RscButtonInvisible {
			idc = -1;
			text = "";
			onButtonClick = "closeDialog 0;";
			tooltip = "Quitter";
			x = 0.535625 * safezoneW + safezoneX;
			y = 0.353555 * safezoneH + safezoneY;
			w = 0.0282291 * safezoneW;
			h = 0.0392593 * safezoneH;
		};
	};
};