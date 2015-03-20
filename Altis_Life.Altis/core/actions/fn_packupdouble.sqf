/*
    File: fn_packupcone.sqf
    Author: Bryan "Tonic" Boardwine
    Edited by: OLLI aka Hauklotz

    Description:
    Packs up a deployed wall.
*/
private["_double"];
_double = nearestObjects[getPos player,["Land_PortableLight_double_F"],8] select 0;
if(isNil "_double") exitWith {};

if(([true,"double",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_doublePickup;
    life_action_doublePickup = nil;
    deleteVehicle _double;
};