/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
closeDialog 0;
closeDialog 0;
private["_position","_virg"];
_virg = "ArrowDesk_L_F" createVehicle [0,0,0];
_virg attachTo[player,[0,3,0.4]];
_virg setDir 90;
_virg setVariable["item","virgDeployed",true];

life_action_virgDeploy = player addAction["<t color='#ffffff'>Poser P Gauche</t>",{if(!isNull life_virg) then {detach life_virg; life_virg = ObjNull;}; player removeAction life_action_virgDeploy; life_action_virgDeploy = nil;},"",999,false,false,"",'!isNull life_virg'];
life_virg = _virg;
waitUntil {isNull life_virg};
if(!isNil "life_action_virgDeploy") then {player removeAction life_action_virgDeploy;};
if(isNull _virg) exitWith {life_virg = ObjNull;};
_virg setPos [(getPos _virg select 0),(getPos _virg select 1),0];
_virg allowDamage false;
//_virg enableSimulation false;