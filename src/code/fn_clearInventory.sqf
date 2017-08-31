disableSerialization;
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _target = _display getVariable ['EIM_Target', objNull];
private _inventoryTree = _display displayCtrl 1500;

tvClear _inventoryTree;
_inventoryTree tvAdd [[], "Weapons"];
_inventoryTree tvAdd [[], "Magazines"];
_inventoryTree tvAdd [[], "Items"];
_inventoryTree tvAdd [[], "Backpacks"];

[_target] call EIM_fnc_setVehicleInventory;
['Inventory cleared'] call EIM_fnc_message;