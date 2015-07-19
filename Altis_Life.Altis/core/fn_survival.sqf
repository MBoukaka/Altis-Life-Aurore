#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	All survival? things merged into one thread.
*/
private["_fnc_food","_fnc_water","_foodTime","_waterTime","_bp","_walkDis","_lastPos","_curPos"];
_fnc_food =  {
	if(life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";}
	else
	{
		SUB(life_hunger,10);
		[] call life_fnc_hudUpdate;
		if(life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";};
		switch(life_hunger) do {
			case 30: {hint localize "STR_NOTF_EatMSG_1";};
			case 20: {hint localize "STR_NOTF_EatMSG_2";};
			case 10: {
				hint localize "STR_NOTF_EatMSG_3";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};
	
_fnc_water = {
	if(life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";}
	else
	{
		SUB(life_thirst,10);
		[] call life_fnc_hudUpdate;
		if(life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";};
		switch(life_thirst) do  {
			case 30: {hint localize "STR_NOTF_DrinkMSG_1";};
			case 20: {
				hint localize "STR_NOTF_DrinkMSG_2";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
			case 10: {
				hint localize "STR_NOTF_DrinkMSG_3";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};

_illegalmarkers = ["heroin_area","heroin_1","Dealer_1_3","chasse_1","resine_1","Dealer_1_3_1","Dealer_1_3_2","turtle_2","turtle_1_name_1","Dealer_1_4","heroin_p","cocaine_processing","Weed_p_1","turtle_1_name_2","turtle_3","Dealer_1_3_2_1","coke_area_2_1","Heimdall_12","heroin_p","poudre_p","explo_area","explo_1","turle_dealer_2_1","turtle_1","turtle_1_name","champ_1","champ_area","turle_dealer_2","turle_dealer","weed_1","Dealer_1","turle_dealer_1","coke_area","cocaine_1"];
_rebellemarkers = ["safe_5","marker_rebel","safe_4","civ_gar_1_3_2_1","safe_3","Rebelop"];

if (playerSide == west) then {
	{ deleteMarkerLocal _x; } forEach _illegalmarkers;
	{ deleteMarkerLocal _x; } forEach _rebellemarkers;
};


//part of alcohol system written by [midgetgrimm]
[] spawn
{
	while {true} do
	{
		sleep 1;
		waitUntil {(life_drink > 0)};
		while{(life_drink > 0)} do {
		
			if(life_drink > 0.08) then {
			"radialBlur" ppEffectEnable true;
			"radialBlur" ppEffectAdjust[0.08, 0,0.35,0.37];
			"radialBlur" ppEffectCommit 3;
			sleep 240;
			life_drink = life_drink - 0.02;
			} else {
			"radialBlur" ppEffectEnable true;
			"radialBlur" ppEffectAdjust[0.05, 0,0.36,0.38];
			"radialBlur" ppEffectCommit 1;
			sleep 180;
			life_drink = life_drink - 0.02;
			};
		};
		
		"radialBlur" ppEffectAdjust  [0,0,0,0];
		"radialBlur" ppEffectCommit 5;
		"radialBlur" ppEffectEnable false;
		life_drink = 0;
		
	};
};

// AFK kick script
[] spawn
{
	private ["_new","_old","_kick"];
	_old = getPos player;
	_kick = false;
	while {true} do
	{
		uiSleep (16*60);
		_new = getPos player;
		if ((_new select 0 == _old select 0) && (_new select 1 == _old select 1)) then
		{
			if (_kick) then
			{
				endMission "afkkick";
			}
			else
			{
				_kick = true;
				hint "Tu seras kick dans 10 minutes pour afk.";
			};
		}
		else
		{
			_kick = false;
		};
		_old = _new;
	};
};

[] spawn {
	while {true} do
	{
		enableSentences false;
		sleep 10;
	};
};

[] spawn {
	while {true} do
	{
		if((isNull (findDisplay 88888)) && (isNull (findDisplay 88883)) && (isNull (findDisplay 887890)))	then	{	player SVAR ["istexting", false, true]; };
		if(license_civ_dep && playerSide == civilian)	then	{	player SVAR ["dep", true, true]; } else {	player SVAR ["dep", false, true]; };
		if(license_civ_taxi && playerSide == civilian)	then	{	player SVAR ["taxi", true, true]; } else {	player SVAR ["taxi", false, true]; };
		if(playerSide == west) then {(unitBackpack player) setObjectTextureGlobal [0,""];}; // <---- Sacs invisibles chez les Flics
        if(playerSide == independent) then {(unitBackpack player) setObjectTextureGlobal [0,""];}; // <---- Sacs invisibles chez les Medics
		sleep 1;
	};
};

//reload variable pour Playertag
[] spawn {
	while {true} do
	{
		if(playerSide == west) then { player setVariable["rank",(FETCH_CONST(life_coplevel)),true]; };
        if(playerSide == independent) then { player setVariable ["medrank",(FETCH_CONST(life_medicLevel)),true]; };
		sleep 60;
	};
};

//Setup the time-based variables.
_foodTime = time;
_waterTime = time;
_walkDis = 0;
_bp = "";
_lastPos = visiblePosition player;
_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
_lastState = vehicle player;

while {true} do {
	/* Thirst / Hunger adjustment that is time based */
	if((time - _waterTime) > 600) then {[] call _fnc_water; _waterTime = time;};
	if((time - _foodTime) > 850) then {[] call _fnc_food; _foodTime = time;};
	
	/* Adjustment of carrying capacity based on backpack changes */
	if(EQUAL(backpack player,"")) then {
		life_maxWeight = life_maxWeightT;
		_bp = backpack player;
	} else {
		if(!(EQUAL(backpack player,"")) && {!(EQUAL(backpack player,_bp))}) then {
			_bp = backpack player;
			life_maxWeight = life_maxWeightT + (round(FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,_bp,"maximumload") / 4));
		};
	};
	
	/* Check if the player's state changed? */
	if(vehicle player != _lastState OR {!alive player}) then {
		[] call life_fnc_updateViewDistance;
		_lastState = vehicle player;
	};
	
	/* Check if the weight has changed and the player is carrying to much */
	if(life_carryWeight > life_maxWeight && {!isForcedWalk player}) then {
		player forceWalk true;
		if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
		hint localize "STR_NOTF_MaxWeight";
	} else {
		if(isForcedWalk player) then {
			player forceWalk false;
		};
	};
	
	/* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
	if(!alive player) then {_walkDis = 0;} else {
		_curPos = visiblePosition player;
		_curPos = (SEL(_curPos,0)) + (SEL(_curPos,1));
		if(!(EQUAL(_curPos,_lastPos)) && {(vehicle player == player)}) then {
			ADD(_walkDis,1);
			if(EQUAL(_walkDis,650)) then {
				_walkDis = 0;
				SUB(life_thirst,5);
				SUB(life_hunger,5);
				[] call life_fnc_hudUpdate;
			};
		};
		_lastPos = visiblePosition player;
		_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
	};
	uiSleep 1;
};
	
	
	
