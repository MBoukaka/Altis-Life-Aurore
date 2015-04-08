#define true 1
#define false 0

class DefaultEventHandler;
class CfgPatches
{
	class life_headless_client
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F"};
		fileName = "life_hc.pbo";
		author[]= {"H4SHK3KS"}; 
	};
};

/*Server Settings*/

class CfgServerSettings
{
	class extDB
	{
		/* Enabling */
		Enabled = true;	// extDB HC enabled?

		/* Database Selection */
		Database = "Database2"; //Database config name

		/* RCON Settings */
		RCON = false; //Enabled?
		RCON_Selection = "RCON"; //Selection of what RCON config to pull from the extDB Configuration file eg. [RCON]

		/* VAC Settings */
		VAC = false; //Enabled? If you want to ban VAC'd players, edit it in the extDB Configuration file.

		/* MISC settings */
		MISC = false; //Enabled? Allows you to use certain features that are not really related to the database for extDB

		/* Debug */
		MySQL_Query = true; //Log queries? Only set this to true if you are developing.

		/* Debug queries */
		MySQL_Debug_Queries = true; // Execute several MySQL-statements on startup to prove for a working connecting

		/* Status message time */
		MySQL_Status_Time = 1; // The time between the status messages in minutes - in idle there wouldn't any message being send

		/* Custom Logging */
		Custom_Logging = false; 	// Enable logging to the custom log file (by Arkensor) - if false, then logging to the rpt

	};
};

class CfgFunctions
{
	class General
	{
		tag = "HC";
		class General
		{
			file = "\life_hc";
			class debugQueries{};
			class testConnection{};
		};
	};

	class MP
	{
		tag = "life";
		class General
		{
			file = "\life_hc\MP";
			class MP{};
			class MPexec{};
		};
	};


	class MySQL
	{
		tag = "DB";
		class General
		{
			file = "\life_hc\MySQL\General";
			class asyncCall {};			
			class bool {};			
			class insertRequest {};			
			class insertVehicle {};			
			class mresArray {};			
			class mresString {};			
			class mresToArray {};			
			class numberSafe {};			
			class queryRequest {};			
			class updatePartial {};			
			class updateRequest {};			
		};	
	};

	class Tonic
	{
		tag = "TON";

		class Housing
		{
			file = "\life_hc\MySQL\Housing"
			class addHouse {};
			class fetchPlayerHouses {};
			class preCheckHouse {};
			class sellHouse {};
			class updateHouseContainers {};
			class updateHouseTrunk {};
		};

		class Gangs
		{
			file = "\life_hc\MySQL\Gangs"
			class insertGang {};
			class queryPlayerGang {};
			class removeGang {};
			class updateGang {};			
		};

		class Vehicles
		{
			file = "\life_hc\MySQL\Vehicles"
			class getVehicles {};
			class spawnVehicle {};
			class vehicleCreate {};
			class vehicleDead {};
			class vehicleDelete {};			
			class keyManagement {};			
			class vehicleIsDead {};			
			class vehicleStoreCop {};			
			class vehicleStore {};			
		};

		class Other
		{
			file = "\life_hc\MySQL\Other";
			class logIt;
		};

		class Smartphone 
		{
			file = "\life_hc\MySQL\Smartphone";
			class handleMessages{};
			class msgRequest {};
		};
	};

	class Life
	{
		tag = "life";
		class WantedSystem
		{
			file = "\life_hc\MySQL\WantedSystem"
			class wantedAdd {};
			class wantedBounty {};
			class wantedCrimes {};
			class wantedFetch {};
			class wantedPerson {};			
			class wantedProfUpdate {};		
			class wantedRemove {};
		};
	};

};