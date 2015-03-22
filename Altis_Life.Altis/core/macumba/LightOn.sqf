_vehicle = macumba;

_boitedroite = [29, 1.5, 1.5];
_boitegauche = [1.5, 1.5, 29];
	
	lightgauche = "#lightpoint" createVehicle getpos _vehicle;
	lightgauche setLightColor _boitedroite;
	lightgauche setLightBrightness 0.2;
	lightgauche setLightAmbient _boitedroite;
	lightgauche lightAttachObject [_vehicle, [-3, 0.8, 0]]; 
	lightgauche setLightAttenuation [4, 1, 0, 0.6];

	lightdroite = "#lightpoint" createVehicle getpos _vehicle;  
	lightdroite setLightColor _boitegauche;
	lightdroite setLightBrightness 0.2; 
	lightdroite setLightAmbient _boitegauche;
	lightdroite lightAttachObject [_vehicle, [3, 0.8, 4.6]];
	lightdroite setLightAttenuation [6, 1, 0, 12.6];

	_leftRed = true; 
	while{macumba == 1} do 
	{ 
	  if(_leftRed) then 
	 { 
		_leftRed = false; 
		lightgauche setLightColor _boitedroite;
		lightgauche setLightAmbient _boitedroite;
		lightdroite setLightColor _boitegauche;
		lightdroite setLightAmbient _boitegauche;
		macumba playMove "AmovPercMstpSlowWrflDnon_SaluteIn";	
		macumba getMarkerPos "DJnanou";
	 } 
	 else 
	 { 
		_leftRed = true; 
		lightgauche setLightColor _boitegauche;
		lightgauche setLightAmbient _boitegauche;
		lightdroite setLightColor _boitedroite;
		lightdroite setLightAmbient _boitedroite;
		macumba switchMove "";
	 }; 
	};