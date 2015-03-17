waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

_rscLayer = "statusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["statusBar","PLAIN"];
systemChat format["[AltisAurore] HUD ON!"];

[] spawn {
	sleep 5;
	while {true} do
	{
		sleep 1;
		_statusText = "AltisAurore.fr";
		((uiNamespace getVariable "statusBar")displayCtrl 1000)ctrlSetText format["%3 | FPS: %1 | Joueurs connectés : %2 dont %4 gendarmes et %5 médecins | Position: %6", round diag_fps, count playableUnits, _statusText, west countSide playableUnits, independent countSide playableUnits, mapGridPosition player];
	};
};