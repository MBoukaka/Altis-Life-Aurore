/*
	File: fn_serviceTruck.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for the service truck.
	*Needs to be revised for new system and flow*
*/
if((time - life_action_delay_serviceTruck) < 20) exitWith {hint "Les batteries ne sont pas encore rechargees !"};
life_action_delay_serviceTruck = time;

private["_nearby","_veh","_price"];
_nearby = nearestObjects[(vehicle player),["Car","Ship","Air"],10];
_veh = vehicle player;
_price = 350;
if(isNull _nearby) exitWith {};
if(damage _nearby < 1) exitWith {hint "Ce vehicule est en parfait etat !";};
if(_veh distance _vehicle > 10) exitWith {titleText["Tu es trop loin !","PLAIN"];};

	_vehicle = _nearby select 1;
	_name = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
	titleText[format["Procédure %1 bouge pas...",_name],"PLAIN"];
	titleFadeOut 12;
	[[_veh, "repairtruck",30],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	sleep 10;
	titleText[format["Tu as remis sur roue %1",_name],"PLAIN"];
	if(!local _vehicle) then
	{
		[{_vehicle setFuel 1;},"BIS_fnc_spawn",_vehicle,false] spawn life_fnc_MP;
	}
		else
	{
		_vehicle setFuel 1;
	};
	_vehicle setDamage 0;
	
	life_cash = life_cash + _price;
	[] call life_fnc_hudUpdate;
	[0] call SOCK_fnc_updatePartial;
	
	sleep 2;
	titleText[format["Tu recois %1 pour avoir réparé un véhicule !",_price],"PLAIN"];
