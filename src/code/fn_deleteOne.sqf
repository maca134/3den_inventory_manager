disableSerialization;
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _target = _display getVariable ['EIM_Target', objNull];
private _inventoryTree = _display displayCtrl 1500;
private _sel = tvCurSel _inventoryTree;
if !((count _sel) isEqualTo 2) exitWith {};
private _amount = _inventoryTree tvValue _sel;
if (_amount < 2) then {
	_inventoryTree tvDelete _sel;
} else {
	private _classname = _inventoryTree tvData _sel;
	private _cfg = switch (_sel select 0) do {
		case 0: {configFile >> 'CfgWeapons' >> _classname};
		case 1: {configFile >> 'CfgMagazines' >> _classname};
		case 2: {configFile >> 'CfgWeapons' >> _classname};
		case 3: {configFile >> 'CfgVehicles' >> _classname};
	};
	_inventoryTree tvSetValue [_sel, _amount - 1];
	_inventoryTree tvSetText [_sel, (format ['%1 x %2', _amount - 1, getText (_cfg >> 'displayName')])];
};
[_target] call EIM_fnc_setVehicleInventory;
