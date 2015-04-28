/*
	File: fn_virt_menu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initialize the virtual shop menu.
*/
private["_shop"];
_shop = _this select 3;
if(isNil {_shop}) exitWith {};
life_shop_type = _shop;
life_shop_npc = _this select 0;
if(_shop == "cop" && playerSide != west && license_cop_pca) exitWith {hint localize "STR_NOTF_NotACop"};
if(_shop == "pca" && playerSide != west && !license_cop_pca) exitWith {hint localize "STR_NOTF_Notpca"};
if(_shop == "barmaid" && !license_civ_sons) exitWith {hint "Tu n'es pas un Biker biatch !"};
if(_shop == "soamark" && !license_civ_sons) exitWith {hint "Tu n'es pas un Biker biatch !"};
if(_shop == "restau" && !license_civ_restaurant) exitWith {hint "Tu n'es pas restaurateur !"};
if(_shop == "esco" && !license_civ_esco) exitWith {hint "Tu n'as pas le droit !"};
if(_shop == "cop1" && !license_civ_vente) exitWith {hint "Tu n'as pas le droit !"};
if(_shop == "bombe" && !license_civ_explo) exitWith {hint "Tu n'as pas le droit !"};
createDialog "shops_menu";

[] call life_fnc_virt_update;