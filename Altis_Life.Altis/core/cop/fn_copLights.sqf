/*
	File: fn_copLights.sqf
	Author: mindstorm, modified by Adanteh
	Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-lights-and-underglow
	
	Description:
	Adds the light effect to cop vehicles, specifically the offroad.
*/
Private ["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_leftRed"];
_vehicle = _this select 0;
	
if(isNil "_vehicle" OR isNull _vehicle OR !(_vehicle getVariable "lights")) exitWith {};
//_lightRed = [20, 0.1, 0.1];
_lightBlue = [0.1, 0.1, 20];
_lightRed = [0.1, 0.1, 20];

_lightleft = "#lightpoint" createVehicle getpos _vehicle;   
sleep 0.2;
_lightleft setLightColor _lightRed; 
_lightleft setLightBrightness 0.2;  
_lightleft setLightAmbient [0.1,0.1,1];

switch (typeOf _vehicle) do
{
	case "demian2435_police_offroad":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "Orel_Rangoo":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_CVPIAux":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_CVPIPolice":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_CVPISlick":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "Orel_Master":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.7]];
	};
	case "DAR_ImpalaPolice":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_ImpalaPoliceSlick":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_ImpalaPoliceDet":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "Orel_Payenne":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_TaurusPolice":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_TaurusPoliceState":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_TaurusPoliceStateSlick":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "A3L_GrandCaravanUCBlack":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_ExplorerPolice":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_ExplorerPoliceStealth":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_TahoePolice":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_TahoePoliceSlick":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_ChargerPolice":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_ChargerPoliceState":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "DAR_ChargerPoliceStateSlick":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	case "REV_GDM":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.4]];
	};
	case "B_MRAP_01_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, -1.9, 0.7]];
	};
	case "Orel_Dingo":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, -1.9, 0.7]];
	};
	case "Aurore_q7_gdm":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, -1.9, 0.56]];
	};
	case "B_MRAP_01_hmg_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, -1.9, 0.7]];
	};
};

_lightleft setLightAttenuation [0.181, 0, 1000, 130]; 
_lightleft setLightIntensity 10;
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 150;
_lightleft setLightUseFlare true;

_lightright = "#lightpoint" createVehicle getpos _vehicle;   
sleep 0.2;
_lightright setLightColor _lightBlue; 
_lightright setLightBrightness 0.2;  
_lightright setLightAmbient [0.1,0.1,1]; 

switch (typeOf _vehicle) do
{
	case "demian2435_police_offroad":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "Orel_Rangoo":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_CVPIAux":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_CVPIPolice":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_CVPISlick":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "Orel_Master":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.7]];
	};
	case "DAR_ImpalaPolice":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_ImpalaPoliceSlick":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_ImpalaPoliceDet":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "Orel_Payenne":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_TaurusPolice":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_TaurusPoliceState":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_TaurusPoliceStateSlick":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "A3L_GrandCaravanUCBlack":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_ExplorerPolice":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_ExplorerPoliceStealth":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_TahoePolice":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_TahoePoliceSlick":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_ChargerPolice":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_ChargerPoliceState":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "DAR_ChargerPoliceStateSlick":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};
	case "REV_GDM":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.4]];
	};
	case "B_MRAP_01_F":
	{
		_lightright lightAttachObject [_vehicle, [0.37, -1.9, 0.7]];
	};
	case "Orel_Dingo":
	{
		_lightright lightAttachObject [_vehicle, [0.37, -1.9, 0.7]];
	};
	case "Aurore_q7_gdm":
	{
		_lightright lightAttachObject [_vehicle, [0.37, -1.9, 0.56]];
	};
	case "B_MRAP_01_hmg_F":
	{
		_lightright lightAttachObject [_vehicle, [0.37, -1.9, 0.7]];
	};
};
  
_lightright setLightAttenuation [0.181, 0, 1000, 130]; 
_lightright setLightIntensity 10;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 150;
_lightright setLightUseFlare true;

//ARE YOU ALL HAPPY?!?!?!?!?!?!?!?!?%#?@WGD?TGD?BN?ZDHBFD?GA
_lightleft setLightDayLight true;
_lightright setLightDayLight true;

_leftRed = true;  
while{ (alive _vehicle)} do  
{  
	if(!(_vehicle getVariable "lights")) exitWith {};
	if(_leftRed) then  
	{  
		_leftRed = false;  
		_lightright setLightBrightness 0.0;  
		sleep 0.05;
		_lightleft setLightBrightness 6;  
	}  
		else  
	{  
		_leftRed = true;  
		_lightleft setLightBrightness 0.0;  
		sleep 0.05;
		_lightright setLightBrightness 6;  
	};  
	sleep (_this select 1);  
};  
deleteVehicle _lightleft;
deleteVehicle _lightright;