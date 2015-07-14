/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 05;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = false; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 05;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 01;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?
DYNMARKET_createRandomEvents   = true; // Should random events appear that influence the market?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Your prices have been updated!",
	"The new prices are being calculated by the server..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[
			["oil_processed",-1,110,310],
			["iron_refined",-1,115,315],
			["diamond_cut",-1,175,375],
			["copper_refined",-1,65,265],
			["salt_refined",-1,80,280],
			["glass",-1,40,190],
			["cement",-1,160,360],
			["caviar",-1,400,600],
			["bijoux",-1,255,455],
			["charbon",-1,110,310]
		],
		0.4
	],
	["Illegal", 
		[
			["turtle_raw",-1,735,1100],
			["marijuana",-1,215,415],
			["cocaine_processed",-1,500,700],
			["heroin_processed",-1,433,633],
			["explo",-1,84,310],
			["champ",-1,20,220],
			["relique",-1,220,420]
		],
		0.3
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[
	["oil_processed",210],
	["resine",693],
	["caviar",500],
	["charbon",210],
	["champ",120],
	["iron_refined",215],
	["diamond_cut",275],
	["bijoux",355],
	["copper_refined",165],
	["salt_refined",180],
	["glass",120],
	["cement",260],
	["turtle_raw",930],
	["explo",250],
	["goldbar",3050],
	["pute",1799],
	["puteluxe",3725],
	["billet",368],
	["marijuana",315],
	["cocaine_processed",600],
	["heroin_processed",533],
	["sheep_raw",1000],
	["sheep_peau",1500],
	["goat_raw",1000],
	["goat_peau",1500],
	["bottledshine",295],
	["bottledbeer",195],
	["bottledwhiskey",250],
	["salema_grilled",4],
	["ornate_grilled",4],
	["mackerel_grilled",18],
	["tuna_grilled",70],
	["mullet_fried",30],
	["catshark_fried",30],
	["peach",6],
	["apple",5],
	["relique",320]
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;

if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;