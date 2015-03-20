/*
    File: fn_packupvird.sqf
    Author: Bryan "Tonic" Boardwine
    Edited by: OLLI aka Hauklotz

    Description:
    Packs up a deployed wall.
*/
private["_vird"];
_vird = nearestObjects[getPos player,["ArrowDesk_R_F"],8] select 0;
if(isNil "_vird") exitWith {};

if(([true,"vird",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_virdPickup;
    life_action_virdPickup = nil;
    deleteVehicle _vird;
};