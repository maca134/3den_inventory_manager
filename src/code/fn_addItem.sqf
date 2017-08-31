disableSerialization;
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _target = _display getVariable ['EIM_Target', objNull];
private _itemTree = _display displayCtrl 1501;
private _inventoryTree = _display displayCtrl 1500;
private _sel = tvCurSel _itemTree;
if !((count _sel) isEqualTo 2) exitWith {['Nothing selected', 1] call EIM_fnc_message};
private _classname = _itemTree tvData _sel;
if (_classname isEqualTo '') exitWith {['Nothing selected', 1] call EIM_fnc_message};

private _cfg = switch (_sel select 0) do {
	case 0: {configFile >> 'CfgWeapons' >> _classname};
	case 1: {configFile >> 'CfgMagazines' >> _classname};
	case 2: {configFile >> 'CfgWeapons' >> _classname};
	case 3: {configFile >> 'CfgVehicles' >> _classname};
};

private _amount = parseNumber (ctrlText (_display displayCtrl 1401));

_inventoryTree tvExpand [_sel select 0];
private _found = false;
for "_i" from 0 to (_inventoryTree tvCount [_sel select 0]) do {
	private _data = _inventoryTree tvData [_sel select 0, _i];
	if (_data isEqualTo _classname) exitWith {
		_found = true;
		private _path = [_sel select 0, _i];
		private _value = _inventoryTree tvValue _path;
		_inventoryTree tvSetValue [_path, _value + _amount];
		_inventoryTree tvSetText [_path, (format ['%1 x %2', _value + _amount, getText (_cfg >> 'displayName')])];
		_inventoryTree tvSetCurSel _path;
	};
};

if (!_found) then {
	private _index = _inventoryTree tvAdd [[_sel select 0], format ['%1 x %2', _amount, getText (_cfg >> 'displayName')]];
	private _path = [_sel select 0, _index];
	_inventoryTree tvSetData [_path, _classname];
	_inventoryTree tvSetValue [_path, _amount];
	_inventoryTree tvSetPicture [_path, getText (_cfg >> 'picture')];
	_inventoryTree tvSetCurSel _path;
};

[_target] call EIM_fnc_setVehicleInventory;