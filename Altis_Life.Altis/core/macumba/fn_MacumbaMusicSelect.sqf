/*
	File: fn_MacumbaMusicSelect.sqf
	Author: Nanou @AltisAurore.fr
	
	Description:
	Le zob vaincra.
*/
if(life_macumba_music) exitWith {hint "Le son tourne toujours !";};

private["_fnc"];
_fnc = [_this,0,1,[0]] call BIS_fnc_param;

switch (_fnc) do
{
	//compilation 1
	case 0:
	{
		hint "Macumba 80";
		[[macumba,"macumba80",20000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
		life_macumba_music = true;
		sleep 696;
		life_macumba_music = false;
	};
	
	//compilation 2
	case 1:
	{
		hint "Macumba ELECTRO";
		[[macumba,"macumbaelectro",20000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
		life_macumba_music = true;
		sleep 765;
		life_macumba_music = false;
	};
	
	//compilation 3
	case 2:
	{
		hint "Macumba END";
		[[macumba,"heyheyhey",20000],"life_fnc_playSound",true,false] spawn life_fnc_MP;
		life_macumba_music = true;
		sleep 126;
		life_macumba_music = false;
	};
	
};