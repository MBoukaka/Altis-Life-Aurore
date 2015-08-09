/*
    File: fn_packupcone.sqf
    Author: Bryan "Tonic" Boardwine
    Edited by: OLLI aka Hauklotz
    Description:
    Packs up a deployed wall.
*/
private["_campfire"];
_campfire = nearestObjects[getPos player,["Land_Campfire_F"],8] select 0;
if(isNil "_campfire") exitWith {};

if(([true,"campfire",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_campfirePickup;
    life_action_campfirePickup = nil;
    deleteVehicle _campfire;
};
