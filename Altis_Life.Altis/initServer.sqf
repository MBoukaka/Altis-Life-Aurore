/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
if(!(_this select 0)) exitWith {}; //Not server
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";

//Chargement du mapping
[] execVM "mapping\bandit.sqf";
[] execVM "mapping\macumba.sqf";
[] execVM "mapping\bar.sqf";
[] execVM "mapping\traincop.sqf";
[] execVM "mapping\athiracop.sqf";
[] execVM "mapping\agios.sqf";
[] execVM "mapping\entreekavalacop.sqf";
[] execVM "mapping\ateamlamp.sqf";
[] execVM "mapping\fdckavala.sqf";
[] execVM "mapping\bureaufal.sqf";
[] execVM "mapping\caviar.sqf";
[] execVM "mapping\bijoux.sqf";
[] execVM "mapping\coffee.sqf";
[] execVM "mapping\vegas.sqf";