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
		if(!license_cop_pca) then {
			_return = [
				["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
				["cop_spawn_3","Athira HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
				["cop_spawn_4","Air HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
				["cop_spawn_5","Sofia HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
				["cop_spawn_6","Centre d'entrainement","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
			];
		};
		
		if (license_cop_pca) then {
			_return = [
				["pca_spawn","Base PCA Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["pca_spawn_1","Base PCA Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
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
		
		if(license_civ_ateam) then {
			_return = _return + [
				["a_spawn_1","Kavala Tourisme","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["a_spawn_2","Aeroport Tourisme","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_michto)then {
			_return = _return + [
				["michto_spawn","Famille Michto","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_ubn)then {
			_return = _return + [
				["ubn_spawn","Base UBN","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_squad)then {
			_return = _return + [
				["squad_spawn","Wolves Squad","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_mikhailov)then {
			_return = _return + [
				["mikhailov_spawn","Famille Mikhailov","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_secte)then {
			_return = _return + [
				["secte_spawn","La secte a Wakan","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_gonzo)then {
			_return = _return + [
				["gonzo_spawn","Famille El Gonzo","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_delta)then {
			_return = _return + [
				["delta_spawn","Groupe Delta Wolf","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_meute)then {
			_return = _return + [
				["meute_spawn","La Meute","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_goa)then {
			_return = _return + [
				["goa_spawn","Groupe GoA","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_vente)then {
			_return = _return + [
				["vente_spawn","La Rôtisserie","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_nostra)then {
			_return = _return + [
				["pmu_spawn","PMU de Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
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
		
		if(license_civ_macumba)then {
			_return = _return + [
				["macumba_spawn","Macumba Club","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_restaurant)then {
			_return = _return + [
				["macumba_spawn_1","L'hexagone","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};

		if(license_civ_scarface)then {
			_return = _return + [
				["house_re","Entreprise Scarface","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_tremblay)then {
			_return = _return + [
				["tremblay_spawn","Famille Tremblay","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_woex)then {
			_return = _return + [
				["house_woex","Base WOEX","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_anisimov)then {
			_return = _return + [
				["house_ani","Anisimov","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_galbano)then {
			_return = _return + [
				["house_tchong","Base des Galbanno","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
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
		
		if(license_civ_caviar) then {
			_return = _return + [
				["caviar_spawn","Les Caviars","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_bijoux) then {
			_return = _return + [
				["bijoux_spawn","Bijouterie","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_dozen) then {
			_return = _return + [
				["dozen_spawn","Famille Dozen","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(license_civ_civaurore) then {
			_return = _return + [
				["donor_spawn","Bienfaiteur","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
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