#include <macro.h>
/*
	File: fn_processAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master handling for processing an item.
*/
if(life_is_processing) exitWith {hint "Tu as deja un process en cours";};

private["_vendor","_type","_itemInfo","_oldItem","_newItem","_cost","_upp","_hasLicense","_itemName","_oldVal","_ui","_progress","_pgText","_cP"];
_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = [_this,3,"",[""]] call BIS_fnc_param;
//Error check
if(isNull _vendor OR EQUAL(_type,"") OR (player distance _vendor > 10)) exitWith {};

//unprocessed item,processed item, cost if no license,Text to display (I.e Processing  (percent) ..."
_itemInfo = switch (_type) do {
	case "oil": {["oil_unprocessed","oil_processed",1200,(localize "STR_Process_Oil")];};
	case "diamond": {["diamond_uncut","diamond_cut",1350,(localize "STR_Process_Diamond")];};
	case "bijoux": {["diamond_cut","bijoux",1350,(localize "STR_Process_bijoux")];};
	case "heroin": {["heroin_unprocessed","heroin_processed",1750,(localize "STR_Process_Heroin")];};
	case "heroinup": {["heroin_processed","heroin_med",1500,(localize "STR_Process_heroinup")];};
	case "copper": {["copper_unrefined","copper_refined",750,(localize "STR_Process_Copper")];};
	case "iron": {["iron_unrefined","iron_refined",1120,(localize "STR_Process_Iron")];};
	case "sand": {["sand","glass",650,(localize "STR_Process_Sand")];};
	case "salt": {["salt_unrefined","salt_refined",450,(localize "STR_Process_Salt")];};
	case "cocaine": {["cocaine_unprocessed","cocaine_processed",1500,(localize "STR_Process_Cocaine")];};
	case "cocaineup": {["cocaine_processed","cocaine_med",1500,(localize "STR_Process_cocaineup")];};
	case "marijuana": {["cannabis","marijuana",500,(localize "STR_Process_Marijuana")];};
	case "explo": {["poudre","explo",650,(localize "STR_Process_explo")];};
	case "bombe": {["explo","blastingcharge",1650,(localize "STR_Process_bombe")];};
	case "cement": {["rock","cement",350,(localize "STR_Process_Cement")];};
	case "esco": {["marijuana","resine",5350,(localize "STR_Process_resine")];};
	case "papy1": {["bois","papier",350,(localize "STR_Process_papier")];};
	case "papier": {["bois","charbon",350,(localize "STR_Process_charbon")];};
	case "papy": {["papier","billet",5350,(localize "STR_Process_papy")];};
	case "beerp": {["hops","beerp",550,(localize "STR_Process_beerp")];};
	case "whiskey": {["rye","whiskey",750,(localize "STR_Process_whiskey")];};
	case "bottledbeer": {["beerp","bottledbeer",750,(localize "STR_Process_bottledbeer")];};
	case "bottledshine": {["bottledwhiskey","bottledshine",1250,(localize "STR_Process_bottledshine")];};
	case "bottledwhiskey": {["whiskey","bottledwhiskey",750,(localize "STR_Process_bottledwhiskey")];};
	case "chasse": {["sheep_raw","sheep_peau",750,(localize "STR_Process_sheepPeau")];};
	case "chasse1": {["goat_raw","goat_peau",750,(localize "STR_Process_goatPeau")];};
	case "caviar": {["oeuf","caviar",750,(localize "STR_Process_caviar")];};
	default {[];};
};

//Error checking
if(EQUAL(count _itemInfo,0)) exitWith {};

//Setup vars.
_oldItem = SEL(_itemInfo,0);
_newItem = SEL(_itemInfo,1);
_cost = SEL(_itemInfo,2);
_upp = SEL(_itemInfo,3);

if(_vendor in [mari_processor,coke_processor,heroin_processor,pro_1,pro_2,process_peau,papy_1,caviar_1,bijoux_1,coffee_1]) then {
	_hasLicense = true;
} else {
	_hasLicense = LICENSE_VALUE(_type,"civ");
};

_itemName = M_CONFIG(getText,"VirtualItems",_newItem,"displayName");
_oldVal = ITEM_VALUE(_oldItem);

_cost = _cost * _oldVal;
//Some more checks
if(EQUAL(_oldVal,0)) exitWith {};

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

life_is_processing = true;

if(_hasLicense) then {
	while{true} do {
		sleep  0.3;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(player distance _vendor > 10) exitWith {};
	};
	
	if(player distance _vendor > 10) exitWith {hint localize "STR_Process_Stay"; 5 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([false,_oldItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([true,_newItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; [true,_oldItem,_oldVal] call life_fnc_handleInv; life_is_processing = false;};
	5 cutText ["","PLAIN"];
	titleText[format[localize "STR_Process_Processed",_oldVal,localize _itemName],"PLAIN"];
	life_is_processing = false;
} else {
	if(CASH < _cost) exitWith {hint format[localize "STR_Process_License",[_cost] call life_fnc_numberText]; 5 cutText ["","PLAIN"]; life_is_processing = false;};
	
	while{true} do {
		sleep  0.9;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {};
		if(player distance _vendor > 10) exitWith {};
	};
	
	if(player distance _vendor > 10) exitWith {hint localize "STR_Process_Stay"; 5 cutText ["","PLAIN"]; life_is_processing = false;};
	if(CASH < _cost) exitWith {hint format[localize "STR_Process_License",[_cost] call life_fnc_numberText]; 5 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([false,_oldItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; life_is_processing = false;};
	if(!([true,_newItem,_oldVal] call life_fnc_handleInv)) exitWith {5 cutText ["","PLAIN"]; [true,_oldItem,_oldVal] call life_fnc_handleInv; life_is_processing = false;};
	5 cutText ["","PLAIN"];
	titleText[format[localize "STR_Process_Processed2",_oldVal,localize _itemName,[_cost] call life_fnc_numberText],"PLAIN"];
	SUB(CASH,_cost);
	[0] call SOCK_fnc_updatePartial;
	[] call life_fnc_hudUpdate;
	life_is_processing = false;
};	