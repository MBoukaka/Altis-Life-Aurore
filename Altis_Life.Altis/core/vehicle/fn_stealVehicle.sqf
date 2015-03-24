#include <macro.h>
/*
File: fn_stealVehicle.sqf
Author: Kevin Webb
Description: Allows the player to put a stolen vehicle in his garage.
*/
if(life_action_inUse) exitWith {hint localize "STR_NOTF_ActionInProc"};
disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_color","_check"];
_control = ((findDisplay 39400) displayCtrl 39402);
_price = _control lbValue (lbCurSel _control);
_price = _price*0.85;
if(CASH < _price) exitWith {hint format["Vous avez besoin de %1 dans votre compte en banque pour que la carte grise du vehicule soit à vous",_price]; };
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [getMarkerPos life_chopShop,["Car","Truck"],25];
_vehicle = _nearVehicles select _vehicle;
if(isNull _vehicle) exitWith {};
_check = false; 
{if(player distance _x < 200 && side _x == west) then { _check = true; };} forEach playableUnits; 
if(_check) exitWith {hint "Les policiers sont trop pres de vous pour faire cette action!";};
if(typeOf _vehicle in [
	"B_MRAP_01_F","exxpensive_camion1_base","exxpensive_camion2_base","I_Truck_02_transport_F",
	"I_Truck_02_covered_F","B_Truck_01_transport_F","B_Truck_01_box_F","C_Van_01_box_F","A3L_Dumptruck",
	"O_Truck_03_transport_F","Orel_Monster","Jonzie_Forklift","cl3_batmobile","A3L_Hyster60",
	"cl3_dumper_truck_yellow","demian2435_police_car","demian2435_police_offroad","Orel_Rangoo",
	"DAR_CVPIAux","DAR_CVPIPolice","DAR_CVPISlick","cl3_enduro_police","cl3_xr_1000_police",
	"Orel_Master","DAR_ImpalaPolice","DAR_ImpalaPoliceSlick","DAR_ImpalaPoliceDet",
	"Orel_Payenne","DAR_TaurusPolice","DAR_TaurusPoliceState","DAR_TaurusPoliceStateSlick","A3L_GrandCaravanUCBlack",
	"DAR_ExplorerPolice","DAR_ExplorerPoliceStealth","DAR_TahoePolice","DAR_TahoePoliceSlick","DAR_ChargerPolice",
	"DAR_ChargerPoliceState","DAR_ChargerPoliceStateSlick","REV_GDM","cl3_q7_clpd_patrol","B_MRAP_01_hmg_F",
	"Orel_Dingo","I_MRAP_03_F","cl3_mackr_del_forest_camo","cl3_mackr_del_american","cl3_mackr_del_gold",
	"cl3_mackr_del_green_white","cl3_mackr_del_black_white","cl3_mackr_del_blue",
	"cl3_mackr_del_green_white","cl3_mackr_del_multi_color","cl3_mackr_del_optimus","Aurore_escobar_ifrit",
	"Aurore_escobar_hummingbird","cl3_mackr_del_orange_white","Aurore_q7_gdm","ESCO_LAMBO","ZAEROX_LAMBO",
	"Aurore_rev_gdm","Aurore_rev_gdm1"
		]) exitWith {hint "Malheureusement, vous ne pouvez pas racheter ce type de véhicule ! Vous devrez le vendre au lieu de cela."; };
_color = 0;
hint format["Vous avez utilise %1 dans votre compte en banque pour que la carte grise soit a vous, Le vehicule a ete mis au Garage",_price];
CASH = CASH - _price;
[[_vehicle],"TON_fnc_vehicleIsDead",false,false] spawn life_fnc_MP;
sleep 0.05;
[[(getPlayerUID player),playerSide,_vehicle,_color,1],"TON_fnc_vehicleCreate",false,false] spawn life_fnc_MP;
closeDialog 0;
sleep 0.5;
if(!isNil "_vehicle" && !isNull _vehicle) then { deleteVehicle _vehicle; }; 