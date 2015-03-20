/*
	File: fn_cone.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a cone and preps it.
*/
closeDialog 0;
closeDialog 0;
private["_position","_double"];
_double = "Land_PortableLight_double_F" createVehicle [0,0,0];
_double attachTo[player,[0,2,1.1]];
_double setDir 180;
_double setVariable["item","doubleDeployed",true];

life_action_doubleDeploy = player addAction["<t color='#ffffff'>Poser lumiere</t>",{if(!isNull life_double) then {detach life_double; life_double = ObjNull;}; player removeAction life_action_doubleDeploy; life_action_doubleDeploy = nil;},"",999,false,false,"",'!isNull life_double'];
life_double = _double;
waitUntil {isNull life_double};
if(!isNil "life_action_doubleDeploy") then {player removeAction life_action_doubleDeploy;};
if(isNull _double) exitWith {life_cone = ObjNull;};
_double setPos [(getPos _double select 0),(getPos _double select 1),0];
_double allowDamage false;
//_double enableSimulation false;