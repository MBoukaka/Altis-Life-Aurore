class piPhone9S {
	idd = 1199;
	name= "menu_iphone9s";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
	
		class iphone9s_back: Life_RscPicture
		{
			idc = 1200;
			text = "aurore_data2\data\app0.paa";
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.516198 * safezoneW;
			h = 0.84363 * safezoneH;
		};
		
		class icon_admin: Life_RscPicture
		{
			idc = 1201;
			text = "aurore_data2\data\btn1.paa";
			x = 0.475885 * safezoneW + safezoneX;
			y = 0.28637 * safezoneH + safezoneY;
			w = 0.0546354 * safezoneW;
			h = 0.0971481 * safezoneH;
		};
		
		class icon_inv: Life_RscPicture
		{
			idc = 1202;
			text = "aurore_data2\data\btn5.paa";
			x = 0.356094 * safezoneW + safezoneX;
			y = 0.287407 * safezoneH + safezoneY;
			w = 0.055677 * safezoneW;
			h = 0.0980742 * safezoneH;
		};
		
		class icon_sms: Life_RscPicture
		{
			idc = 1203;
			text = "aurore_data2\data\btn8.paa";
			x = 0.355677 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0561979 * safezoneW;
			h = 0.0990003 * safezoneH;
		};
		
		class icon_keys: Life_RscPicture
		{
			idc = 1204;
			text = "aurore_data2\data\btn6.paa";
			x = 0.352916 * safezoneW + safezoneX;
			y = 0.586814 * safezoneH + safezoneY;
			w = 0.0592708 * safezoneW;
			h = 0.104555 * safezoneH;
		};
		
		class icon_bourse: Life_RscPicture
		{
			idc = 1205;
			text = "aurore_data2\data\btn2.paa";
			x = 0.474792 * safezoneW + safezoneX;
			y = 0.436371 * safezoneH + safezoneY;
			w = 0.0551562 * safezoneW;
			h = 0.0962224 * safezoneH;
		};
		
		class icon_gang: Life_RscPicture
		{
			idc = 1206;
			text = "aurore_data2\data\btn3.paa";
			x = 0.590208 * safezoneW + safezoneX;
			y = 0.436778 * safezoneH + safezoneY;
			w = 0.0556771 * safezoneW;
			h = 0.0990003 * safezoneH;
		};
		
		class icon_reglages: Life_RscPicture
		{
			idc = 1207;
			text = "aurore_data2\data\btn7.paa";
			x = 0.472136 * safezoneW + safezoneX;
			y = 0.587704 * safezoneH + safezoneY;
			w = 0.0573958 * safezoneW;
			h = 0.10037 * safezoneH;
		};
		
		class icon_sync: Life_RscPicture
		{
			idc = 1208;
			text = "aurore_data2\data\btn9.paa";
			x = 0.589219 * safezoneW + safezoneX;
			y = 0.589556 * safezoneH + safezoneY;
			w = 0.0563542 * safezoneW;
			h = 0.102222 * safezoneH;
		};
		
		class icon_wantedplus: Life_RscPicture
		{
			idc = 1209;
			text = "aurore_data2\data\btn10.paa";
			x = 0.591771 * safezoneW + safezoneX;
			y = 0.285852 * safezoneH + safezoneY;
			w = 0.0558334 * safezoneW;
			h = 0.10037 * safezoneH;
		};
		
		class icon_interpol: Life_RscPicture
		{
			idc = 1210;
			text = "aurore_data2\data\btn4.paa";
			x = 0.590104 * safezoneW + safezoneX;
			y = 0.437963 * safezoneH + safezoneY;
			w = 0.0558334 * safezoneW;
			h = 0.10037 * safezoneH;
		};
	};
	
	class controls {
		
		//new iphone 9S		
		class admin: Life_RscButtonInvisible
		{
			idc = 1601;
			onButtonClick = "createDialog ""iphone_admin_menu"";";
			tooltip = "Menu Admin";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0469792 * safezoneW;
			h = 0.0911111 * safezoneH;
		};
		
		class inventaire: Life_RscButtonInvisible
		{
			idc = 1602;
			onButtonClick = "[] call life_fnc_inventaire;";
			tooltip = "Afficher et gérer votre inventaire virtuel";
			x = 0.35625 * safezoneW + safezoneX;
			y = 0.290741 * safezoneH + safezoneY;
			w = 0.0573958 * safezoneW;
			h = 0.0920371 * safezoneH;
		};
		
		class messages: Life_RscButtonInvisible
		{
			idc = 1603;
			onButtonClick = "[] call life_fnc_cellphone2;";
			tooltip = "Permet d'envoyer des messages";
			x = 0.360417 * safezoneW + safezoneX;
			y = 0.431481 * safezoneH + safezoneY;
			w = 0.0490625 * safezoneW;
			h = 0.105 * safezoneH;
		};
		
		class bourse: Life_RscButtonInvisible
		{
			idc = 1604;
			onButtonClick = "[] spawn life_fnc_openMarketView;";
			tooltip = "Affiche la bourse d'Aurore";
			x = 0.479687 * safezoneW + safezoneX;
			y = 0.432407 * safezoneH + safezoneY;
			w = 0.0464583 * safezoneW;
			h = 0.103148 * safezoneH;
		};
		
		class wanted: Life_RscButtonInvisible
		{
			idc = 1605;
			onButtonClick = "[] call life_fnc_wantedMenu";
			tooltip = "Regarder la Wanted List";
			x = 0.596875 * safezoneW + safezoneX;
			y = 0.434259 * safezoneH + safezoneY;
			w = 0.0438542 * safezoneW;
			h = 0.0994444 * safezoneH;
		};
		
		class sync: Life_RscButtonInvisible
		{
			idc = 1606;
			onButtonClick = "[] call SOCK_fnc_syncData;";
			tooltip = "Envoyer les données de votre personnage actuel au serveur";
			x = 0.596875 * safezoneW + safezoneX;
			y = 0.588889 * safezoneH + safezoneY;
			w = 0.0438542 * safezoneW;
			h = 0.10037 * safezoneH;
		};
		
		class reglages: Life_RscButtonInvisible
		{
			idc = 1607;
			onButtonClick = "[] call life_fnc_settingsMenu;";
			tooltip = "Régler votre confort en jeu";
			x = 0.478646 * safezoneW + safezoneX;
			y = 0.587963 * safezoneH + safezoneY;
			w = 0.0448958 * safezoneW;
			h = 0.0985185 * safezoneH;
		};
		
		class keys: Life_RscButtonInvisible
		{
			idc = 1608;
			onButtonClick = "createDialog ""iphone_cle""";
			tooltip = "Regarder vos clefs";
			x = 0.360417 * safezoneW + safezoneX;
			y = 0.587963 * safezoneH + safezoneY;
			w = 0.0459375 * safezoneW;
			h = 0.0994445 * safezoneH;
		};
		
		class home: Life_RscButtonInvisible
		{
			idc = 1609;
			onButtonClick = "closeDialog 0;";
			tooltip = "Quitter";
			x = 0.715885 * safezoneW + safezoneX;
			y = 0.458667 * safezoneH + safezoneY;
			w = 0.0308334 * safezoneW;
			h = 0.0531481 * safezoneH;
		};
		
		class gang: Life_RscButtonInvisible
		{
			idc = 1610;
			onButtonClick = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			tooltip = "Menu du gang";
			x = 0.596875 * safezoneW + safezoneX;
			y = 0.434259 * safezoneH + safezoneY;
			w = 0.0438542 * safezoneW;
			h = 0.0994444 * safezoneH;
		};
		
	};
};