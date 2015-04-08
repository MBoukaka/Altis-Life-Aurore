/*
	File: fn_welcomeNotification.sqf
	
	Description:
	Called upon first spawn selection and welcomes our player.
*/
format["Bonjour %1, svp lire attentivement!",name player] hintC
[
	"Bienvenue sur le serveur Altis Life Aurore",
	"Le serveur reboot 5 fois par jour ! (05H30 / 09H30 / 15H30 / 19H30 / 23H30)",
	"", 
	"[WINDOWS GAUCHE] est la touche d'interaction, vous pouvez la changer en pressant ESC et en allant dans Configurer->Controles->Personnel(custom) et configurer l'Action 10 a une autre touche.",	
	"Y: Ouvrir le menu joueur",	
	"U: Fermer ou ouvrir son vehicule",
	"C: Siren (Police)",
	"T: Ouvrir le coffre du véhicule",
	"Shift J : Casque anti bruit",
	"Shift R : Menotter",
	"Shift F : Coup de poing",
	"Shift G : Main sur la tete",
	"Shift L : Girophare (Dep, Med, Cop)",
	"[1] : Menu d'animation",
	"Visitez notre site: AltisAurore.fr pour plus d informations."
];
hintC_EH = findDisplay 57 displayAddEventHandler ["unload", {
	0 = _this spawn {
		_this select 0 displayRemoveEventHandler ["unload", hintC_EH];
		hintSilent "";
	};
}];