/*
File: fn_cellphone2.sqf
Author: Timo
 
Description:
With no radio cant use Cellphone
*/
 
 
if("ItemRadio" in assignedItems player) then {
createDialog "Life_my_smartphone";
}else{
hint parseText format ["<t size='1.30' font='puristaMedium' align='center' color='#0D82DF'>iPhone manquant</t><br/><br/>
<t size='0.90 'font='puristaLight' align='left'>Tu n'as pas d'iPhone 9S (Cellphone/Radio) !<br/> Vas en acheter en magasin.</t><br/>"];
};