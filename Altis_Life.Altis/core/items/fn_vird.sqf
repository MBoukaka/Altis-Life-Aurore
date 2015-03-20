/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
closeDialog 0;
closeDialog 0;
private["_position","_vird"];
_vird = "ArrowDesk_R_F" createVehicle [0,0,0];
_vird attachTo[player,[0,3,0.4]];
_vird setDir 90;
_vird setVariable["item","virdDeployed",true];

life_action_virdDeploy = player addAction["<t color='#ffffff'>Poser P Droite</t>",{if(!isNull life_vird) then {detach life_vird; life_vird = ObjNull;}; player removeAction life_action_virdDeploy; life_action_virdDeploy = nil;},"",999,false,false,"",'!isNull life_vird'];
life_vird = _vird;
waitUntil {isNull life_vird};
if(!isNil "life_action_virdDeploy") then {player removeAction life_action_virdDeploy;};
if(isNull _vird) exitWith {life_vird = ObjNull;};
_vird setPos [(getPos _vird select 0),(getPos _vird select 1),0];
_vird allowDamage false;
//_vird enableSimulation false;