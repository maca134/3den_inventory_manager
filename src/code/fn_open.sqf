params [
	['_target', objNull, [objNull]]
];
if (isNull _target) then {
	_target = if ((count (get3DENSelected 'object')) > 0) then {(get3DENSelected 'object') select 0} else {objNull};
};
if (isNull _target) exitWith {hint 'Can not find target'};
if ((getNumber (configFile >> 'CfgVehicles' >> typeOf _target >> 'maximumLoad')) isEqualTo 0) exitWith {
	['You can only add inventory to objects it space for it'] call EIM_fnc_message;
};
disableSerialization;
createDialog 'EdenInventoryManager';
waitUntil {!isNull (uiNamespace getVariable ['EdenInventoryManager', displayNull])};
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
if (isNil 'EIM_itemCache') then {
	EIM_itemCache = call EIM_fnc_getAllItems;
};
_display setVariable ['EIM_Target', _target];

[] call EIM_fnc_loadItemTree;
call EIM_fnc_loadInventoryTree;

(_display displayCtrl 1400) ctrlSetEventHandler ['KeyUp', '_this call EIM_fnc_onSearchKeyUp'];
