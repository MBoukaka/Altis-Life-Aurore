/*
	File: fn_cone.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a cone and preps it.
*/
closeDialog 0;
closeDialog 0;
private["_position","_campfire"];
_campfire = "Land_Campfire_F" createVehicle [0,0,0];
_campfire attachTo[player,[0,2,1.1]];
_campfire setDir 180;
_campfire setVariable["item","campfireDeployed",true];

life_action_campfireDeploy = player addAction["<t color='#ffffff'>Poser lumiere</t>",{if(!isNull life_campfire) then {detach life_campfire; life_campfire = ObjNull;}; player removeAction life_action_campfireDeploy; life_action_campfireDeploy = nil;},"",999,false,false,"",'!isNull life_campfire'];
life_campfire = _campfire;
waitUntil {isNull life_campfire};
if(!isNil "life_action_campfireDeploy") then {player removeAction life_action_campfireDeploy;};
if(isNull _campfire) exitWith {life_cone = ObjNull;};
_campfire setPos [(getPos _campfire select 0),(getPos _campfire select 1),0];
_campfire allowDamage false;
//_campfire enableSimulation false;
