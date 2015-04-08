/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","Athira HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_4","Air HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","Sofia HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_6","Centre d'entrainement","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
		];
	};
	
	case civilian:
	{
		if(!license_civ_rebel && !license_civ_bandit) then {
			_return = [
				["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_bandit) then {
			_return = [
				["bandit_spawn_1","Galati","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["bandit_spawn_2","Topolia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["bandit_spawn_3","A. Petros","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_rebel) then {
			_return = [
				["rebel_spawn_1","Sagonisi","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["rebel_spawn_2","Frini","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["rebel_spawn_3","Kategidis","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_dep) then {
			_return = [
				["dep_spawn_1","Kavala Dep","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["dep_spawn_2","Sofia Dep","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_esco)then {
			_return = _return + [
				["esco_spawn","Famille Escobar","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_esco)then {
			_return = _return + [
				["resine_spawn","CoffeShop","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_vente)then {
			_return = _return + [
				["vente_spawn","La Rôtisserie","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_papy)then {
			_return = _return + [
				["wood_spawn","Usine des Papy","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_scarface)then {
			_return = _return + [
				["house_sica","Base Scarface","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_meute)then {
			_return = _return + [
				["house_sica","Base Scarface","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_macumba)then {
			_return = _return + [
				["macumba_spawn","Macumba Club","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_macumba)then {
			_return = _return + [
				["macumba_spawn_1","Sofia FDC","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_gambino)then {
			_return = _return + [
				["house_gambino","F. Gambino","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_scarface)then {
			_return = _return + [
				["house_re","Entreprise Scarface","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_meute)then {
			_return = _return + [
				["house_re","Entreprise Scarface","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_fal)then {
			_return = _return + [
				["house_fal","Base des FAL","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_anisimov)then {
			_return = _return + [
				["house_ani","Anisimov","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_tchong)then {
			_return = _return + [
				["house_tchong","Base des Tchong","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_hool)then {
			_return = _return + [
				["house_hool","Base des Hooligans","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_taxi) then {
			_return = [
				["taxi_spawn_1","Kavala Taxi","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_civdonator) then {
			_return = _return + [
				["donor_spawn","Donateur","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Kavala Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Athira Regional","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Pygros Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;