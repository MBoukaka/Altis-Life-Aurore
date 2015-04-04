/*
	File: fn_fadeSoundRadio.sqf
	Auhtor: Nanou @AltisAurore.fr
	
	Description:
	Allumer/Eteindre radio
*/
life_fadeSoundRadio = !life_fadeSoundRadio;

if (life_fadeSoundRadio) then 
{
	1 fadeRadio 0; // R�duit � 10%
	hint "Radio OFF";
	playSound "radioON";
}
else
{
	1 fadeRadio 1; // Retourn� a la normal (100%)
	hint "Radio ON";
	playSound "radioOFF";
};