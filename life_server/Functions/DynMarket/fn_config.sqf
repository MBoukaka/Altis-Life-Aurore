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
			["oil_processed",-1,320,520],
			["iron_refined",-1,330,530],
			["diamond_cut",-1,650,850],
			["copper_refined",-1,230,430],
			["salt_refined",-1,260,360],
			["glass",-1,140,340],
			["cement",-1,420,520],
			["charbon",-1,320,520]
		],
		0.4
	],
	["Illegal", 
		[
			["turtle_raw",-1,1760,1960],
			["marijuana",-1,530,730],
			["cocaine_processed",-1,1100,1300],
			["heroin_processed",-1,966,1166],
			["explo",-1,320,520],
			["champ",-1,80,280],
			["relique",-1,520,720]
		],
		0.3
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[
	["oil_processed",410],
	["resine",786],
	["charbon",420],
	["champ",180],
	["iron_refined",430],
	["diamond_cut",550],
	["copper_refined",330],
	["salt_refined",360],
	["glass",240],
	["cement",320],
	["turtle_raw",1860],
	["explo",500],
	["billet",736],
	["marijuana",630],
	["cocaine_processed",1200],
	["heroin_processed",1066],
	["sheep_raw",2000],
	["sheep_peau",3000],
	["goat_raw",2000],
	["goat_peau",3000],
	["bottledshine",590],
	["bottledbeer",390],
	["bottledwhiskey",500],
	["salema_grilled",4],
	["ornate_grilled",4],
	["mackerel_grilled",18],
	["tuna_grilled",70],
	["mullet_fried",30],
	["catshark_fried",30],
	["peach",6],
	["apple",5],
	["relique",640]
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