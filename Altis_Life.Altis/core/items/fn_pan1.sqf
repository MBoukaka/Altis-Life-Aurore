/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
closeDialog 0;
closeDialog 0;
private["_position","_pan1"];
_pan1 = "Orel_Panneau_Pied_Rond" createVehicle [0,0,0];
_pan1 attachTo[player,[0,2.5,0.5]];
_pan1 setDir 90;
_pan1 setVariable["item","pan1Deployed",true];

life_action_pan1Deploy = player addAction["<t color='#ffffff'>Poser panneau</t>",{if(!isNull life_pan1) then {detach life_pan1; life_pan1 = ObjNull;}; player removeAction life_action_pan1Deploy; life_action_pan1Deploy = nil;},"",999,false,false,"",'!isNull life_pan1'];
life_pan1 = _pan1;
waitUntil {isNull life_pan1};
if(!isNil "life_action_pan1Deploy") then {player removeAction life_action_pan1Deploy;};
if(isNull _pan1) exitWith {life_pan1 = ObjNull;};
_pan1 setPos [(getPos _pan1 select 0),(getPos _pan1 select 1),0];
_pan1 allowDamage false;
//_pan1 enableSimulation false;