class Socket_Reciever
{
	tag = "SOCK";
	class SQL_Socket
	{
		file = "core\session";
		class requestReceived {};
		class dataQuery {};
		class insertPlayerInfo {};
		class updateRequest {};
		class syncData {};
		class updatePartial {};
	};
};

class Life_Client_Core
{
	tag = "life";
	
	class Master_Directory
	{
		file = "core";
		class setupActions {};
		class setupEVH {};
		class initCiv {};
		class initCop {};
		class initMedic {};
		class welcomeNotification {};
		class survival {};
	};
	
	class DynMarket
    {
        file = "core\DynMarket";
        class bought {};
        class update {};
        class DisplayPrices {};
        class LoadIntoListbox {};
        class ForcePrice {};
        class DYNMARKET_getPrice {};
    };
	
	class Admin
	{
		file = "core\admin";
		class admininfo {};
		class adminid {};
		class admingetID {};
		class adminMenu {};
		class adminQuery {};
	};
	
	class depanneur
	{
		file = "core\depanneur";
		class dep_impound {};
		class depLights {};
		class dsirenLights {};		
	};
	
	class macumba
	{
		file = "core\macumba";
		class MacumbaMenu {};
		class MacumbaMenuMusic {};
		class MacumbaSelect {};
		class MacumbaMusicSelect {};
	};
	
	class Saisie
	{
		file = "core\saisie";
		class removeL1 {};
		class removeL2 {};
		class removeL3 {};
		class removeL4 {};
		class removeW {};
		class removeU {};
		class removeV {};
		class removeHD {};
		class SaisieL1 {};
		class SaisieL2 {};
		class SaisieL3 {};
		class SaisieL4 {};
		class SaisieU {};
		class SaisieW {};
		class SaisieV {};
		class SaisieHD {};
	};
	
	class Medical_System
	{
		file = "core\medical";
		class onPlayerKilled {};
		class onPlayerRespawn {};
		class respawned {};
		class revivePlayer {};
		class revived {};
		class medicMarkers {};
		class requestMedic {};
		class medicRequest {};
		class deathScreen {};
		class medicLoadout {};
		class medicSirenLights {};
		class medicLights {};
		class medicSiren {};
	};
	
	class Actions
	{
		file = "core\actions";
		class gatherReliques {};
		class gatherpute {};
		class gatherputeluxe {};
		class gatherOeuf {};
		class radarFlash {};
		class radarFlash50 {};
		class radarFlash90 {};
		class animMenu {};
		class serviceTruck {};
		class sitDown {};
		class InteractionMenu {};
		class buyLicense {};
		class healHospital {};
		class pushVehicle {};
		class repairTruck {};
		class serviceChopper {};
		class catchFish {};
		class catchTurtle {};
		class dpFinish {};
		class dropFishingNet {};
		class getDPMission {};
		class postBail {};
		class processAction {};
		class arrestAction {};
		class escortAction {};
		class impoundAction {};
		class pulloutAction {};
		class putInCar {};
		class stopEscorting {};
		class restrainAction {};
		class searchAction {};
		class searchVehAction {};
		class unrestrain {};
		class pickupItem {};
		class pickupMoney {};
		class ticketAction {};
		class packupSpikes {};
		class packupmauer {};
		class packupdouble {};
		class packuppan1 {};
		class packupcone {};
		class packupvird {};
		class packupvirg {};
		class storeVehicle {};
		class robAction {};
		class captureHideout {};
		class gather {};
		class gutAnimal {};
		class surrender {};
		class depdemission {};
		class taxidemission {};
		class rebdemission {};
		class banditdemission {};
		class suicideBomb {};
		class gagAction {};
		class gagged {};
		class removeGagAction {};
	};
	
	class Housing
	{
		file = "core\housing";
		class buyHouse {};
		class getBuildingPositions {};
		class houseMenu {};
		class lightHouse {};
		class lightHouseAction {};
		class sellHouse {};
		class initHouses {};
		class copBreakDoor {};
		class raidHouse {};
		class lockupHouse {};
		class copHouseOwner {};
		class lockHouse {};
		class garageRefund {};
	};
	
	class Config
	{
		file = "core\config";
		class itemWeight {};
		class taxRate {};
		class vehicleAnimate {};
		class vehicleWeightCfg {};
	};

	class Player_Menu
	{
		file = "core\pmenu";
		class AAN {};
		class bugExtDB {};
		class wantedList {};
		class wantedInfo {};
		class wantedMenu {};
		class wantedAddP {};
		class pardon {};
		class giveItem {};
		class giveMoney {};
		class p_openMenu {};
		class p_openAdminMenu {};
		class p_openIphone {};
		class inventaire {};
		class p_updateInventory {};
		class p_updateMenu {};
		class removeItem {};
		class useItem {};
		class cellphone {};
		class cellphone2 {};
		class keyMenu {};
		class keyGive {};
		class keyDrop {};
		class s_onSliderChange {};
		class updateViewDistance {};
		class settingsMenu {};
		class s_onChar {};
		class s_onCheckedChange {};
		class smartphone {};
		class newMsg {};
		class showMsg {};
	};
	
	class Functions
	{
		file = "core\functions";
		class equipGear {};
		class fadeSound {};
		class playSound {};
		class playLight {};
		class calWeightDiff {};
		class fetchCfgDetails {};
		class handleInv {};
		class hudSetup {};
		class hudUpdate {};
		class tazeSound {};
		class callbackup {};
		class backupCall {};
		class animSync {};
		class simDisable {};
		class keyHandler {};
		class dropItems {};
		class handleDamage {};
		class numberText {};
		class handleItem {};
		class accType {};
		class receiveItem {};
		class giveDiff {};
		class receiveMoney {};
		class playerTags {};
		class clearVehicleAmmo {};
		class pullOutVeh {};
		class nearUnits {};
		class actionKeyHandler {};
		class playerCount {};
		class fetchDeadGear {};
		class loadDeadGear {};
		class isnumeric {};
		class escInterupt {};
		class onTakeItem {};
		class fetchVehInfo {};
		class pushObject {};
		class onFired {};
		class revealObjects {};
		class nearestDoor {};
		class inventoryClosed {};
		class inventoryOpened {};
		class isUIDActive {};
		class saveGear {};
		class loadGear {};
		class stripDownPlayer {};
		class nearATM {};
	};
	
	class Network
	{
		file = "core\functions\network";
		class broadcast {};
		class MP {};
		class MPexec {};
		class corpse {};
		class jumpFnc {};
		class soundDevice {};
		class setFuel {};
		class setTexture {};
		class say3D {};
	};
	
	class Civilian
	{
		file = "core\civilian";
		class gangMarkers {};
		class jailMe {};
		class jail {};
		class tazed {};
		class knockedOut {};
		class knockedOut2 {};
		class knockoutAction {};
		class robReceive {};
		class robPerson {};
		class removeLicenses {};
		class demoChargeTimer {};
		class civLoadout {};
	};
	
	class Vehicle
	{
		file = "core\vehicle";
		class colorVehicle {};
		class openInventory {};
		class lockVehicle {};
		class vehicleOwners {};
		class vehStoreItem {};
		class vehTakeItem {};
		class vehInventory {};
		class vInteractionMenu {};
		class vehicleWeight {};
		class stealVehicle {};
		class deviceMine {};
		class addVehicle2Chain {};
	};
	
	class Cop
	{
		file = "core\cop";
		class copMarkers {};
		class copEnter {};
		class copLights {};
		class vehInvSearch {};
		class copSearch {};
		class bountyReceive {};
		class searchClient {};
		class restrain {};
		class ticketGive {};
		class ticketPay {};
		class ticketPrompt {};
		class copSiren {};
		class spikeStripEffect {};
		class radar {};
		class questionDealer {};
		class copInteractionMenu {};
		class sirenLights {};
		class licenseCheck {};
		class licensesRead {};
		class repairDoor {};
		class doorAnimate {};
		class fedCamDisplay {};
		class copLoadout {};
		class copDeleteVehicle {};
		class ticketPaid {};
		class wantedGrab {};
		class breathalyzer {};
	};
	
	class Gangs
	{
		file = "core\gangs";
		class initGang {};
		class createGang {};
		class gangCreated {};
		class gangMenu {};
		class gangKick {};
		class gangLeave {};
		class gangNewLeader {};
		class gangUpgrade {};
		class gangInvitePlayer {};
		class gangInvite {};
		class gangDisband {};
		class gangDisbanded {};
	};
	
	class Shops
	{
		file = "core\shops";
		class atmMenu {};
		class buyClothes {};
		class changeClothes {};
		class clothingMenu {};
		class clothingFilter {};
		class vehicleShopMenu {};
		class vehicleShopLBChange {};
		class vehicleShopBuy {};
		class weaponShopFilter {};
		class weaponShopMenu {};
		class weaponShopSelection {};
		class weaponShopBuySell {};
		class virt_buy {};
		class virt_menu {};
		class virt_update {};
		class virt_sell {};
		class chopShopMenu {};
		class chopShopSelection {};
		class chopShopSell {};
		class FuelStatOpen {};
		class RefuelCar {};
		class FuelLBchange {};
	};
	
	class Items
	{
		file = "core\items";
		class pickaxeUse {};
		class lockpick {};
		class spikeStrip {};
		class jerryRefuel {};
		class flashbang {};
		class boltcutter {};
		class blastingCharge {};
		class defuseKit {};
		class storageBox {};
		class mauer {};
		class double {};
		class pan1 {};
		class gpsTracker {};
		class cone {};
		class vird {};
		class virg {};
		class drinkbeer {};
		class drinkmoonshine {};
		class drinkwhiskey {};
		class weed {};
		class speedBomb {};
	};
	
	class Dialog_Controls
	{
		file = "dialog\function";
		class calldialog {};
		class sendChannel {};
		class setMapPosition {};
		class displayHandler {};
		class spawnConfirm {};
		class spawnMenu {};
		class spawnPointCfg {};
		class spawnPointSelected {};
		class progressBar {};
		class impoundMenu {};
		class unimpound {};
		class sellGarage {};
		class bankDeposit {};
		class bankWithdraw {};
		class gangWithdraw {};
		class bankTransfer {};
		class garageLBChange {};
		class safeInventory {};
		class safeOpen {};
		class safeTake {};
		class safeFix {};
		class vehicleGarage {};
		class gangDeposit {};
		class wireTransfer {};
		class InsureCar {};
	};
};