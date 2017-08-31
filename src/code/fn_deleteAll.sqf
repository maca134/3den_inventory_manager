disableSerialization;
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _target = _display getVariable ['EIM_Target', objNull];
private _inventoryTree = _display displayCtrl 1500;
private _sel = tvCurSel _inventoryTree;
if !((count _sel) isEqualTo 2) exitWith {};
_inventoryTree tvDelete _sel;
[_target] call EIM_fnc_setVehicleInventory;