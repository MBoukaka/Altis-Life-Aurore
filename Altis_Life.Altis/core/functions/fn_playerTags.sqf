#include <macro.h>
/*
	File: fn_playerTags.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Adds the tags above other players heads when close and have visible range.
*/
private["_ui","_units","_goggles","_uniform","_headgear","_uniformflic"];
#define iconID 78000
#define scale 0.8
_goggles = ["G_Balaclava_blk","IRA_Balaclava_Brown","G_Balaclava_oli","G_Balaclava_lowprofile","G_Balaclava_combat","G_Bandanna_beast","G_Bandanna_shades"];
_uniform = ["U_O_GhillieSuit"];
_headgear = ["H_Shemag_olive","H_Shemag_khk","H_ShemagOpen_khk","H_ShemagOpen_tan"];
_uniformflic = ["U_OG_Guerilla2_1","U_OG_Guerilla2_2"];

if(visibleMap OR {!alive player} OR {dialog}) exitWith {
	500 cutText["","PLAIN"];
};

_ui = GVAR_UINS ["Life_HUD_nameTags",displayNull];
if(isNull _ui) then {
	500 cutRsc["Life_HUD_nameTags","PLAIN"];
	_ui = GVAR_UINS ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];

SUB(_units,[player]);

{
	private "_text";
	_idc = _ui displayCtrl (iconID + _forEachIndex);
	if(!(lineIntersects [eyePos player, eyePos _x, player, _x]) && {!isNil {_x GVAR "realname"}}) then {
		_pos = switch(typeOf _x) do {
			case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
			case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
			default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
		};
		_sPos = worldToScreen _pos;
		_distance = _pos distance player;
		if(count _sPos > 1 && {_distance < 15}) then {
			_text = switch (true) do {
			
				//Mort
				case (!alive _x): {
					_icon = "aurore_data2\icons\death.paa";
					format["<img image='%1' size='1'></img> %2", _icon, (_x GVAR ["realname",name _x])];
				};
				
				//isTexting... by Nanou
				case ((_x GVAR ["istexting", false]) && (((goggles _x) in _goggles) OR ((headgear _x) in _headgear) OR ((uniform _x) in _uniform) OR ((uniform _x) in _uniformflic))): {format["<t color='#000000'>Personnage masqué </t><img image='icons\ico_istexting.paa' size='1'></img>"];};
				case ((_x GVAR ["istexting", false]) && (!isNil {(_x GVAR "rank")})): {format["<img image='%1' size='1'></img> %3 %2 <img image='icons\ico_istexting.paa' size='1'></img>",switch ((_x GVAR "rank")) do {
					case 2: {"aurore_data2\icons\brigadier1.paa"}; 
					case 3: {"aurore_data2\icons\brigadier2.paa"};
					case 4: {"aurore_data2\icons\adjudant.paa"};
					case 5: {"\a3\ui_f\data\gui\cfg\Ranks\lieutenant_gs.paa"};
					case 6: {"\a3\ui_f\data\gui\cfg\Ranks\captain_gs.paa"};
					case 7: {"\a3\ui_f\data\gui\cfg\Ranks\colonel_gs.paa"};
					default {"aurore_data2\icons\recrue.paa"};
					},_x GVAR ["realname",name _x],switch ((_x GVAR "rank")) do {
					case 2: {"[Brigadier 2C.]"}; 
					case 3: {"[Brigadier 1C.]"};
					case 4: {"[Adjudant]"};
					case 5: {"[Lieutenant]"};
					case 6: {"[Capitaine]"};
					case 7: {"[Colonel]"};
					default {"[Recrue]"};
					}]};
				case ((_x GVAR ["istexting", false]) && (!isNil {(_x GVAR "medrank")})): {format["<img image='icons\ico_medic.paa' size='1'></img> %1 <img image='icons\ico_istexting.paa' size='1'></img>",(_x GVAR ["realname",name _x])];};
				case ((_x GVAR ["istexting", false]) && (_x GVAR ["dep", false])): {format["<img image='icons\ico_dep.paa' size='1'></img> %1 <img image='icons\ico_istexting.paa' size='0.8'>",(_x GVAR ["realname",name _x])];};
				case ((_x GVAR ["istexting", false]) && (_x GVAR ["taxi", false])): {format["<img image='icons\ico_taxi.paa' size='1'></img> %1 <img image='icons\ico_istexting.paa' size='0.8'>",(_x GVAR ["realname",name _x])];};
				case ((_x GVAR ["istexting", false]) && (!isNil {(group _x) GVAR "gang_name"} && (!(_x GVAR ["dep",FALSE]) OR !(_x GVAR ["taxi",FALSE]))) && playerSide == civilian): {format["%1 <img image='icons\ico_istexting.paa' size='1'></img><br/><t size='0.8' color='#B6B6B6'>%2</t>",(_x GVAR ["realname",name _x]),(group _x) GVAR ["gang_name",""]];};
				case ((_x GVAR ["istexting", false]) && !(_x in (units grpPlayer)) && playerSide == civilian): {format["%1 <img image='icons\ico_istexting.paa' size='1'></img>",(_x GVAR ["realname",name _x])];};

				//Items de masquage
				case (((goggles _x) in _goggles) && playerSide == civilian): {format["<t color='#000000'>Personnage masqué</t>"];};
				case (((headgear _x) in _headgear) && playerSide == civilian): {format["<t color='#000000'>Personnage masqué</t>"];};
				case (((uniform _x) in _uniform) && playerSide == civilian): {format["<t color='#000000'>Personnage masqué</t>"];};
				case (((uniform _x) in _uniformflic) && (!isNil {(_x GVAR "rank")})): {format["%1",_x GVAR ["realname",name _x]];};
				
				//Nom Gendarme
				case (!isNil {(_x GVAR "rank")}): {format["<img image='%1' size='1'></img> %3 %2",switch ((_x GVAR "rank")) do {
					case 2: {"aurore_data2\icons\brigadier1.paa"}; 
					case 3: {"aurore_data2\icons\brigadier2.paa"};
					case 4: {"aurore_data2\icons\adjudant.paa"};
					case 5: {"\a3\ui_f\data\gui\cfg\Ranks\lieutenant_gs.paa"};
					case 6: {"\a3\ui_f\data\gui\cfg\Ranks\captain_gs.paa"};
					case 7: {"\a3\ui_f\data\gui\cfg\Ranks\colonel_gs.paa"};
					default {"aurore_data2\icons\recrue.paa"};
					},_x GVAR ["realname",name _x],switch ((_x GVAR "rank")) do {
					case 2: {"[Brigadier 2C.]"}; 
					case 3: {"[Brigadier 1C.]"};
					case 4: {"[Adjudant]"};
					case 5: {"[Lieutenant]"};
					case 6: {"[Capitaine]"};
					case 7: {"[Colonel]"};
					default {"[Recrue]"};
					}]};
					
				//Nom Medic
				case (!isNil {(_x GVAR "medrank")}): {format["<img image='icons\ico_medic.paa' size='1'></img> %1",(_x GVAR ["realname",name _x])]};
				
				//Entreprise by Nanou
				case (_x GVAR ["dep", false]): {format["<img image='icons\ico_dep.paa' size='1'></img> %1",(_x GVAR ["realname",name _x])];};
				case (_x GVAR ["taxi", false]): {format["<img image='icons\ico_taxi.paa' size='1'></img> %1",(_x GVAR ["realname",name _x])];};
				
				//Nom Civil standard
				case (!isNil {(group _x) GVAR "gang_name"} && (!(_x GVAR ["dep",FALSE]) OR !(_x GVAR ["taxi",FALSE]))): {format["%1<br/><t size='0.8' color='#B6B6B6'>%2</t>",_x GVAR ["realname",name _x],(group _x) GVAR ["gang_name",""]];};
				case (isNil {(group _x) GVAR "gang_name"} && (!(_x GVAR ["dep",FALSE]) OR !(_x GVAR ["taxi",FALSE]))): {format["%1",(_x GVAR ["realname",name _x])];};

				default {};
			};
			
			_idc ctrlSetStructuredText parseText _text;
			_idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
			_idc ctrlSetScale scale;
			_idc ctrlSetFade 0;
			_idc ctrlCommit 0;
			_idc ctrlShow true;
		} else {
			_idc ctrlShow false;
		};
	} else {
		_idc ctrlShow false;
	};
} foreach _units;