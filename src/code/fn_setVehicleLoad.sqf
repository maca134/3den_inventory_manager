disableSerialization;
params [
	['_target', objNull, [objNull]]
];
private _inventory = [_target] call EIM_fnc_getVehicleInventory;
private _maximumLoad = getNumber (configFile >> 'CfgVehicles' >> typeOf _target >> 'maximumLoad');
private _totalLoad = 0;

{
	private _amount = ((_inventory select 0) select 1) select _forEachIndex;
	private _mass = getNumber (configFile >> 'CfgWeapons' >> _x >> 'WeaponSlotsInfo' >> 'mass');
	_totalLoad = _totalLoad + (_amount * _mass);
} forEach ((_inventory select 0) select 0);

{
	private _amount = ((_inventory select 1) select 1) select _forEachIndex;
	private _mass = getNumber (configFile >> 'CfgMagazines' >> _x >> 'mass');
	_totalLoad = _totalLoad + (_amount * _mass);
} forEach ((_inventory select 1) select 0);

{
	private _amount = ((_inventory select 2) select 1) select _forEachIndex;
	private _mass = getNumber (configFile >> 'CfgWeapons' >> _x >> 'ItemInfo' >> 'mass');
	_totalLoad = _totalLoad + (_amount * _mass);
} forEach ((_inventory select 2) select 0);

{
	private _amount = ((_inventory select 3) select 1) select _forEachIndex;
	private _mass = getNumber (configFile >> 'CfgVehicles' >> _x >> 'mass');
	_totalLoad = _totalLoad + (_amount * _mass);
} forEach ((_inventory select 3) select 0);

private _percent = if (_totalLoad isEqualTo 0 || _maximumLoad isEqualTo 0) then {0} else {_totalLoad / _maximumLoad};

private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _capacityForeground = _display displayCtrl 1009;
if (_percent > 1) then {
	_capacityForeground ctrlSetBackgroundColor [1,0.1,0.1,0.75];
} else {
	_capacityForeground ctrlSetBackgroundColor [1,1,1,0.75];
};
_capacityForeground ctrlSetPosition [
	0.525,
	0.15,
	(18 min (18 * _percent)) * 0.025,
	0.02
];
_capacityForeground ctrlCommit 0;