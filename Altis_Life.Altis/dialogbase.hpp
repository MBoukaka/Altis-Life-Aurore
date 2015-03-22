#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUT_BUTTON  16
   
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_List_N_Box       102
   
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0c

#define ST_TYPE           0xF0
#define ST_SINGLE         0
#define ST_MULTI          16
#define ST_TITLE_BAR      32
#define ST_PICTURE        48
#define ST_FRAME          64
#define ST_BACKGROUND     80
#define ST_GROUP_BOX      96
#define ST_GROUP_BOX2     112
#define ST_HUD_BACKGROUND 128
#define ST_TILE_PICTURE   144
#define ST_WITH_RECT      160
#define ST_LINE           176
 
#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

#define FontEB             "EtelkaMonospaceProBold"
#define FontEM             "EtelkaNarrowMediumPro"
#define FontA             "Purista"
#define FontB             "PuristaBold"
#define FontL             "PuristaLight"
#define FontM             "PuristaMedium"
#define FontSB             "PuristaSemibold"
#define FontZ32             "Zeppelin32"
#define FontZ33             "Zeppelin33"
#define FontZ33I             "Zeppelin33-Italic"

class BaseRscSingleText
{
	access = 0;
	type =  CT_STATIC ;
	style = ST_LEFT; 
	colorText[] = { 0, 0, 0, 1 };
	colorBackground[] = { 1, 1, 1, 0.8 };
	font = FontM;
	sizeEx = 0.023;
	w = 0.3; h = 0.075;
	text = "";
};

class BaseRscBox : baseRscSingleText
{
	access = 0;
	w = 0; h = 0;
	colorBackground[] = { 1, 1, 1, 0.8 };
	text = "";
};

class BaseRscButton 
{ 
	access = 0; 
	type = CT_BUTTON; 
	style = ST_LEFT; 
	w = 0.3; h = 0.075; 
	text = ""; 
	font = FontM; 
	sizeEx = 0.03; 
	colorText[] = { 0, 0, 0, 1 }; 
	colorDisabled[] = { 0, 0, 0, 0.8 }; 
	colorBackground[] = { 1, 1, 1, 0.8 }; 
	colorBackgroundDisabled[] = { 0, 0, 0, 0.8 }; 
	colorBackgroundActive[] = { 0.8, 0.8, 0.8, 0.8 }; 
	offsetX = 0; offsetY = 0; 
	offsetPressedX = 0; offsetPressedY = 0; 
	colorFocused[] = { 1, 1, 1, 0.5 }; 
	colorShadow[] = { 0, 0, 0, 0.4 }; 
	shadow = 0; 
	colorBorder[] = {1, 0, 0, 1}; 
	borderSize = 0; 
	soundEnter[] = {"",0.1,1}; 
	soundPush[] = {"",0.1,1}; 
	soundClick[] = {"",0.1,1}; 
	soundEscape[] = {"",0.1,1}; 
};


class BankAmende
{
	idd = -1;
	movingEnable = true;
	enableSimulation = true;
	controlsBackground[] = {Background};
	objects[] = {};
	controls[] = {TarifDesAmendes1,TarifDesAmendes2,TarifDesAmendes3,TarifDesAmendes4,TarifDesAmendes5,TarifDesAmendes6,TarifDesAmendes7,TarifDesAmendes8,TarifDesAmendes9,Close};
	
	class Background : BaseRscBox
	{
		idc = -1;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 0.8 };
		x = 0; y = 0;
		w = 0; h = 0;
	};

	class TarifDesAmendes1 : BaseRscSingleText
	{
		idc = 99999;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.0;
		w = 0.8; 
	};
	class TarifDesAmendes2 : BaseRscSingleText
	{
		idc = 99998;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.1;
		w = 0.8;
	};
	class TarifDesAmendes3 : BaseRscSingleText
	{
		idc = 99997;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.2;
		w = 0.8;
	};
	class TarifDesAmendes4 : BaseRscSingleText
	{
		idc = 99996;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.3;
		w = 0.8;
	};
	class TarifDesAmendes5 : BaseRscSingleText
	{
		idc = 99995;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.4;
		w = 0.8;
	};
	class TarifDesAmendes6 : BaseRscSingleText
	{
		idc = 99994;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.5;
		w = 0.8;
	};
	class TarifDesAmendes7 : BaseRscSingleText
	{
		idc = 99993;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.6;
		w = 0.8;
	};
	class TarifDesAmendes8 : BaseRscSingleText
	{
		idc = 99992;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.7;
		w = 0.8;
	};
	class TarifDesAmendes9 : BaseRscSingleText
	{
		idc = 99991;
		moving = 1;
		colorBackground[] = { 0, 0, 0, 1 };
		colorText[]={0.8,0.9,0.9,0.7};
		sizeEx = 0.04;
		x = 0; y = 0.8;
		w = 0.8;
	};

	class Close : BaseRscButton
	{
		idc = -1;
		text = "Fermer";
		action = "closeDialog 0";
		x = 0; y = 1.00;
		w = 0.8;
	};
};