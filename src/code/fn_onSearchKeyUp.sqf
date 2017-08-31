params ['_ctrl'];
if (isNil 'EIM_searchTimeoutThread') then {
	EIM_searchTimeoutThread = scriptNull;
};
EIM_searchTimeout = diag_tickTime + 0.5;
if (isNull EIM_searchTimeoutThread || scriptDone EIM_searchTimeoutThread) then {
	EIM_searchTimeoutThread = [_ctrl] spawn {
		waitUntil {
			uiSleep 0.1;
			EIM_searchTimeout <= diag_tickTime
		};
		[ctrlText (_this select 0)] call EIM_fnc_loadItemTree;
	};
};
