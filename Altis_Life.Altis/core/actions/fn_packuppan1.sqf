/*
    File: fn_packuppan1.sqf
    Author: Bryan "Tonic" Boardwine
    Edited by: nanou

    Description:
    Packs up a deployed wall.
*/
private["_pan1"];
_pan1 = nearestObjects[getPos player,["Orel_Panneau_Pied_Rond"],8] select 0;
if(isNil "_pan1") exitWith {};

if(([true,"pan1",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_pan1Pickup;
    life_action_pan1Pickup = nil;
    deleteVehicle _pan1;
};