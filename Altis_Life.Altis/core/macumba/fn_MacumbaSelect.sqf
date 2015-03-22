/*
	File: fn_MacumbaSelect.sqf
	Author: Nanou @AltisAurore.fr
	
	Description:
	Le zob vaincra.
*/
private["_fnc"];
_fnc = [_this,0,1,[0]] call BIS_fnc_param;

switch (_fnc) do
{
	//compilation 1
	case 0:
	{
		call life_fnc_MacumbaMenuMusic;
	};
	
	//compilation 2
	case 1:
	{
		hint "Light ON";
		[[macumba,"core\Macumba\LightOn.sqf",20000],"life_fnc_playLight",true,false] spawn life_fnc_MP;
	};
	
	//compilation 3
	case 2:
	{
		hint "Light OFF";
		[[macumba,"core\Macumba\LightOff.sqf",20000],"life_fnc_playLight",true,false] spawn life_fnc_MP;
	};
	
	//compilation 4
	case 3:
	{
		_fumigene1 = "SmokeShell" createVehicle (MarkerPos "djfumi1");
		_fumigene2 = "SmokeShell" createVehicle (MarkerPos "djfumi2");		
	};
	
};