/*
    File: fn_packupmauer.sqf
    Author: Bryan "Tonic" Boardwine
    Edited by: OLLI aka Hauklotz

    Description:
    Packs up a deployed wall.
*/
private["_virg"];
_virg = nearestObjects[getPos player,["ArrowDesk_L_F"],8] select 0;
if(isNil "_virg") exitWith {};

if(([true,"virg",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_virgPickup;
    life_action_virgPickup = nil;
    deleteVehicle _virg;
};