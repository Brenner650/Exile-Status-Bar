/*
	Exile Status Bar by [FPS]kuplion - Based on Stats Bar by Creampie
*/
 
disableSerialization;

// Wait until main display is available..
waitUntil
{
	!(isNull (findDisplay 46))
};

_rscLayer = "StatusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["StatusBar","PLAIN"];

[
	1,
	statusBar_update,
	[],
	true,
	false
]
call ExileClient_system_thread_addTask;
