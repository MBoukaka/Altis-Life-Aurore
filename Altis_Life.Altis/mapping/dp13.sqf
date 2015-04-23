_vehicle_1 = objNull;
if (true) then
{
	_this = createVehicle ["Land_HBarrier_5_F", [18834.672, 16688.592, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
	_vehicle_1 = _this;
	_this setDir -25.816902;
	_this setPos [18834.672, 16688.592, 6.8664551e-005];
};

_vehicle_3 = objNull;
if (true) then
{
	_this = createVehicle ["Land_HBarrier_5_F", [18829.678, 16686.174, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
	_vehicle_3 = _this;
	_this setDir -25.816902;
	_this setPos [18829.678, 16686.174, 7.6293945e-006];
};

_vehicle_5 = objNull;
if (true) then
{
	_this = createVehicle ["Land_HBarrier_5_F", [18818.822, 16680.797, -9.1552734e-005], [], 0, "CAN_COLLIDE"];
	_vehicle_5 = _this;
	_this setDir -25.816902;
	_this setPos [18818.822, 16680.797, -9.1552734e-005];
};

_vehicle_7 = objNull;
if (true) then
{
	_this = createVehicle ["Land_HBarrier_5_F", [18832.316, 16681.188, -3.0517578e-005], [], 0, "CAN_COLLIDE"];
	_vehicle_7 = _this;
	_this setDir -115.73093;
	_this setPos [18832.316, 16681.188, -3.0517578e-005];
};

_vehicle_11 = objNull;
if (true) then
{
	_this = createVehicle ["Land_HBarrier_5_F", [18825.068, 16677.561, -0.00011825562], [], 0, "CAN_COLLIDE"];
	_vehicle_11 = _this;
	_this setDir -114.96529;
	_this setPos [18825.068, 16677.561, -0.00011825562];
};

_vehicle_13 = objNull;
if (true) then
{
	_this = createVehicle ["Land_HBarrier_3_F", [18833.053, 16681.783, -4.5776367e-005], [], 0, "CAN_COLLIDE"];
	_vehicle_13 = _this;
	_this setDir -24.18659;
	_this setPos [18833.053, 16681.783, -4.5776367e-005];
};

_vehicle_19 = objNull;
if (true) then
{
	_this = createVehicle ["Land_HBarrier_3_F", [18822.201, 16676.475, 0.0001335144], [], 0, "CAN_COLLIDE"];
	_vehicle_19 = _this;
	_this setDir -24.18659;
	_this setPos [18822.201, 16676.475, 0.0001335144];
};

_vehicle_21 = objNull;
if (true) then
{
	_this = createVehicle ["Land_BarGate_F", [18832.131, 16680.203, -3.8146973e-006], [], 0, "CAN_COLLIDE"];
	_vehicle_21 = _this;
	_this setDir -26.112305;
	_this setPos [18832.131, 16680.203, -3.8146973e-006];
	_initCodes set [count _initCodes,[_this,"this enableSimulation false; this allowDamage false;"]];
};

_vehicle_23 = objNull;
if (this enableSimulation false; this allowDamage false;true) then
{
	_this = createVehicle ["Land_BarGate_F", [18822.439, 16683.764, -6.4849854e-005], [], 0, "CAN_COLLIDE"];
	_vehicle_23 = _this;
	_this setDir 153.97951;
	_this setPos [18822.439, 16683.764, -6.4849854e-005];
	_initCodes set [count _initCodes,[_this,"this enableSimulation false; this allowDamage false;"]];
};

_vehicle_25 = objNull;
if (true) then
{
	_this = createVehicle ["Land_Billboard_F", [18833.693, 16686.631, -0.00021362305], [], 0, "CAN_COLLIDE"];
	_vehicle_25 = _this;
	_this setDir -26.034513;
	_this setPos [18833.693, 16686.631, -0.00021362305];
};

_vehicle_27 = objNull;
if (true) then
{
	_this = createVehicle ["Land_Billboard_F", [18832.463, 16689.064, 0.00011062622], [], 0, "CAN_COLLIDE"];
	_vehicle_27 = _this;
	_this setDir -205.73344;
	_this setPos [18832.463, 16689.064, 0.00011062622];
};

{
	this = _x select 0;
	[] call compile (_x select 1);
} foreach _initCodes;