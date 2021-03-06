#include <macro.h>
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = SEL(_this,0);
_code = SEL(_this,1);
_shift = SEL(_this,2);
_ctrlKey = SEL(_this,3);
_alt = SEL(_this,4);
_speed = speed cursorTarget;
_handled = false;

_interactionKey = if((EQUAL(count (actionKeys "User10"),0))) then {219} else {(actionKeys "User10") select 0};
_mapKey = SEL(actionKeys "ShowMap",0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player GVAR ["restrained",false])}) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(!(EQUAL(count (actionKeys "User10"),0)) && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn {
			private "_handle";
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			life_action_inUse = false;
		};
	};
	true;
};

switch (_code) do {

	//Space key for Jumping
	//case 57: {
	//	if(isNil "jumpActionTime") then {jumpActionTime = 0;};
	//	if(_shift && {!(EQUAL(animationState player,"AovrPercMrunSrasWrflDf"))} && {isTouchingGround player} && {EQUAL(stance player,"STAND")} && {speed player > 2} && {!life_is_arrested} && {SEL((velocity player),2) < 2.5} && {time - jumpActionTime > 1.5}) then {
	//		jumpActionTime = time; //Update the time.
	//		[player,true] spawn life_fnc_jumpFnc; //Local execution
	//		[[player,false],"life_fnc_jumpFnc",nil,FALSE] call life_fnc_MP; //Global execution 
	//		_handled = true;
	//	};
	//};
	
	//Map Key
	case _mapKey: {
		switch (playerSide) do {
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
			case civilian: {if(!visibleMap) then {[] spawn life_fnc_gangMarkers;}};
		};
	};
	
	//Random keybinds
	case 2:
	{
		[false] spawn life_fnc_animMenu;
		_handled = true;
	};
	
	//Holster / recall weapon.
	case 35: {
		if(_shift && !_ctrlKey && !(EQUAL(currentWeapon player,""))) then {
			life_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchCamera cameraView;
		};
		
		if(!_shift && _ctrlKey && !isNil "life_curWep_h" && {!(EQUAL(life_curWep_h,""))}) then {
			if(life_curWep_h in [RIFLE,LAUNCHER,PISTOL]) then {
				player selectWeapon life_curWep_h;
			};
		};
		
		if(!_shift && !_ctrlKey && playerSide == west) then {
			if(life_inv_spikeStrip < 1) exitWith {hint "T'as pas de herses !";};
			[] spawn life_fnc_spikeStrip;
			life_inv_spikeStrip = life_inv_spikeStrip - 1;
			hint "Tu as une herse en main !";
		};
	};
	
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey: {
		if(!isNull (findDisplay 2001) || !isNull (findDisplay 1199)) exitWith {closeDialog 0; hint "Pas de glitch..";};
		if(!life_action_inUse) then {
			[] spawn  {
				private "_handle";
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
			};
		};
	};
	
	//Shift+J = Casque anti-bruit
	case 36:
	{
		if(_shift) then
		{
			[] call life_fnc_fadeSound;
			_handled = true;
		};
	};
	
	//Restraining or robbing (Shift + R)
	case 19:
	{
		if(_shift) then {_handled = true;};
		if(_shift && (playerSide in [west,independent]) && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget == civilian) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1) then
		{
			[] call life_fnc_restrainAction;
		};
		if(_shift && playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget GVAR "Escorting") && !(cursorTarget GVAR "restrained") && speed cursorTarget < 1) then
		{
			if(life_inv_menotte < 1) exitWith {hint "T'as pas de menottes !";};
			[] call life_fnc_restrainAction;
			life_inv_menotte = life_inv_menotte - 1;
			hint "Tu as menotte cette personne !";
		};
		
		
		
	};
	
	//Knock out, this is experimental and yeah...
	case 33:
	{
		if(_shift) then {_handled = true;};
		if(_shift && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 3 && speed cursorTarget < 1) then
		{
			if((animationState cursorTarget) != "Incapacitated" && !life_knockout && !(player getVariable["restrained",false]) && !life_istazed && !(player GVAR["restrained",false]) && !life_istazed && !(player GVAR["surrender",false])) then
			{
				[cursorTarget] spawn life_fnc_knockoutAction;
				if("ItemRadio" in assignedItems cursorTarget) then {
				cursorTarget removeweapon "ItemRadio";
				hint "Cette personne a fait tomber son téléphone.";
				_defenceplace1 = "Item_ItemRadio" createVehicle (player modelToWorld[0,0,0]);
				}	else	{ hint "Cette personne n'a pas de téléphone!"};
			};
		};
	};	
	
	//Shift + G (surrender)
	case 34:
	{
		if(!life_action_inUse && _shift) then {_handled = true;};

		if (!life_action_inUse && _shift) then
		{
			if (vehicle player == player && !(player GVAR ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed) then
			{
				if (player GVAR ["surrender", false]) then
				{
					player SVAR ["surrender", false, true];
				} else
				{
					[] spawn life_fnc_surrender;
				};
			};
		};
	};
	
	// ANTI ² 
	 case 41:
    {
		if((_code in (actionKeys "SelectAll") || _code in (actionKeys "ForceCommandingMode"))) then 
		{
			[] call life_fnc_p_openIphone;
			player setDamage ((getDammage player) + 0.05);
			hint parseText format["!!! LA TRICHE EST INTERDITE !!!<br/> Le MetaGaming c'est MAL<br/> Ou ça fait MAL...<br/><t size='1.4'><t color='#FF0000'>Tu viens de perdre 5 points de vie !</t></t>"];
		};
	};
	
	//report alt + f4
	case 62:
    {
		private ["_player"];
		_player = player;
		
		if(_alt && !_shift) then {
			diag_log format ["SERVER: %1 ALT+F4 to disconnect (report it)",_player getVariable["realname",name _player]];
			[[1,format["SERVER: %1 a utilisé ALT+F4 pour déconnecter (merci de le signaler à un Admin.)",_player getVariable["realname",name _player]]],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;
		};
    };
	
	//T Key (Trunk)
	case 20: {
		if(!_alt && !_ctrlKey && !life_is_processing) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
					[vehicle player] call life_fnc_openInventory;
				};
			} else {
				private "_list";
				_list = ["landVehicle","Air","Ship","House_F"];
				if(KINDOF_ARRAY(cursorTarget,_list) && {player distance cursorTarget < 7} && {vehicle player == player} && {alive cursorTarget}) then {
					if(cursorTarget in life_vehicles OR {!(cursorTarget GVAR ["locked",true])}) then {
						[cursorTarget] call life_fnc_openInventory;
					};
				};
			};
		};
	};
	
	//L Key?
	case 38: {
		if(_shift && playerSide == west) then {
			if(vehicle player != player && (typeOf vehicle player) in [
					"demian2435_police_car","demian2435_police_offroad","Orel_Rangoo",
					"DAR_CVPIAux","DAR_CVPIPolice","DAR_CVPISlick",
					"Orel_Master","DAR_ImpalaPolice","DAR_ImpalaPoliceSlick",
					"DAR_ImpalaPoliceDet","Orel_Payenne","DAR_TaurusPolice",
					"DAR_TaurusPoliceState","DAR_TaurusPoliceStateSlick","A3L_GrandCaravanUCBlack",
					"DAR_ExplorerPolice","DAR_ExplorerPoliceStealth","DAR_TahoePolice",
					"DAR_TahoePoliceSlick","DAR_ChargerPolice","DAR_ChargerPoliceState",
					"DAR_ChargerPoliceStateSlick","REV_GDM","B_MRAP_01_F",
					"Aurore_q7_gdm","B_MRAP_01_hmg_F","Orel_Dingo","I_MRAP_03_F"]) then {
				if(!isNil {vehicle player getVariable "lights"}) then {
					[vehicle player] call life_fnc_sirenLights;
					_handled = true;
				};
			};
		};
		if(_shift && playerSide == independent) then {
		if(vehicle player != player && (typeOf vehicle player) in ["clpd_mondeo_FireDepartment","cl3_escalade_fd","cl3_escalade_pm","Med_Offroad"]) then {
				if(!isNil {vehicle player getVariable "lights"}) then {
					[vehicle player] call life_fnc_MedicSirenLights;
					_handled = true;
					};
				};
		};
		if(_shift && playerSide == civilian && license_civ_dep) then {
			if(vehicle player != player && (typeOf vehicle player) in ["B_Truck_01_mover_F","cl3_f150repo_orange","B_Heli_Light_01_F","Dep_Offroad"]) then {
				if(!isNil {vehicle player getVariable "lights"}) then {
					[vehicle player] call life_fnc_dsirenLights;
					_handled = true;
				};
			};
		};
		if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
	};
	
	//Y Player Menu
	case 21: {
		if(!_alt && !_ctrlKey && !dialog && !life_is_processing) then {
			[] call life_fnc_p_openIphone;
		};
	};
	
	//F Key
	case 46: {
		if(playerSide in [west,independent] && {vehicle player != player} && {!life_siren_active} && {((driver vehicle player) == player)}) then {
			[] spawn {
				life_siren_active = true;
				sleep 4.7;
				life_siren_active = false;
			};
			
			_veh = vehicle player;
			if(isNil {_veh GVAR "siren"}) then {_veh SVAR ["siren",false,true];};
			if((_veh GVAR "siren")) then {
				titleText [localize "STR_MISC_SirensOFF","PLAIN"];
				_veh SVAR ["siren",false,true];
			} else {
				titleText [localize "STR_MISC_SirensON","PLAIN"];
				_veh SVAR ["siren",true,true];
				if(playerSide == west) then {
					[[_veh],"life_fnc_copSiren",nil,true] call life_fnc_MP;
				} else {
					//I do not have a custom sound for this and I really don't want to go digging for one, when you have a sound uncomment this and change medicSiren.sqf in the medical folder.
					[[_veh],"life_fnc_medicSiren",nil,true] call life_fnc_MP;
				};
			};
		};
	};
	
	//U Key
	case 22: {
		if(!_alt && !_ctrlKey && !_shift) then {
			if(vehicle player == player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};
			
			if(_veh isKindOf "House_F" && {playerSide == civilian}) then {
				if(_veh in life_vehicles && player distance _veh < 8) then {
					_door = [_veh] call life_fnc_nearestDoor;
					if(EQUAL(_door,0)) exitWith {hint localize "STR_House_Door_NotNear"};
					_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];
					
					if(EQUAL(_locked,0)) then {
						_veh SVAR [format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						systemChat localize "STR_House_Door_Lock";
					} else {
						_veh SVAR [format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						systemChat localize "STR_House_Door_Unlock";
					};
				};
			} else {
				_locked = locked _veh;
				if(_veh in life_vehicles && player distance _veh < 8) then {
					if ((typeOf _veh in ["Dep_Offroad","cl3_f150repo_orange","B_Truck_01_mover_F"]) && !license_civ_dep) exitWith {hint "Seulement les depanneurs peuvent ouvrir ce type de vehicule.";};
					if ((typeOf _veh in ["TAXI_SUV_01_F","cl3_suv_taxi","Orel_Agora"]) && !license_civ_taxi) exitWith {hint "Seulement les chauffeurs de taxi peuvent ouvrir ce type de vehicule.";};
					if(EQUAL(_locked,2)) then {
						if(local _veh) then {
							_veh lock 0;
						} else {
							[[_veh,0],"life_fnc_lockVehicle",_veh,false] call life_fnc_MP;
						};
						systemChat localize "STR_MISC_VehUnlock";
						[[cursorTarget, "Beep",20],"life_fnc_playSound",true,false] spawn life_fnc_MP;
					} else {
						if(local _veh) then {
							_veh lock 2;
						} else {
							[[_veh,2],"life_fnc_lockVehicle",_veh,false] call life_fnc_MP;
						};	
						systemChat localize "STR_MISC_VehLock";
						[[cursorTarget, "BeepBeep",20],"life_fnc_playSound",true,false] spawn life_fnc_MP;
					};
				};
			};
		};
	};
};

_handled;
