_vehicle_228 = objNull;
if (true) then
{
	_this = createVehicle ["Shop_Escobar_NiiRoZz", [5945.7607, 10364.066, 1.0387745], [], 0, "CAN_COLLIDE"];
	_vehicle_228 = _this;
	_this setDir 110.31631;
	_this setPos [5945.7607, 10364.066, 1.0387745];
};

_vehicle_230 = objNull;
if (true) then
{
	_this = createVehicle ["Land_BC_Court_F", [5911.9302, 10371.909, -0.15022625], [], 0, "CAN_COLLIDE"];
	_vehicle_230 = _this;
	_this setDir -158.36961;
	_this setPos [5911.9302, 10371.909, -0.15022625];
};

_vehicle_233 = objNull;
if (true) then
{
	_this = createVehicle ["Land_BC_Court_F", [5927.5562, 10357.708, 0.54545039], [], 0, "CAN_COLLIDE"];
	_vehicle_233 = _this;
	_this setDir 110.35026;
	_this setPos [5927.5562, 10357.708, 0.54545039];
};

_vehicle_236 = objNull;
if (true) then
{
	_this = createVehicle ["Land_BC_Court_F", [5935.7363, 10362.962, 0.48447031], [], 0, "CAN_COLLIDE"];
	_vehicle_236 = _this;
	_this setDir -340.24982;
	_this setPos [5935.7363, 10362.962, 0.48447031];
};

_vehicle_241 = objNull;
if (true) then
{
	_this = createVehicle ["Land_BC_Court_F", [5914.5527, 10362.341, 0.39379689], [], 0, "CAN_COLLIDE"];
	_vehicle_241 = _this;
	_this setDir -248.88634;
	_this setPos [5914.5527, 10362.341, 0.39379689];
};

_vehicle_244 = objNull;
if (true) then
{
	_this = createVehicle ["Land_BC_Court_F", [5922.6411, 10367.764, 0.15759318], [], 0, "CAN_COLLIDE"];
	_vehicle_244 = _this;
	_this setDir -159.14397;
	_this setPos [5922.6411, 10367.764, 0.15759318];
};
{
	this = _x select 0;
	[] call compile (_x select 1);
} foreach _initCodes;
