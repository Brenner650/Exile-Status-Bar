/*
	Exile Status Bar by [FPS]kuplion - Based on Stats Bar by Creampie
*/

class StatusBar
{
	idd = -1;
	onLoad = "uiNamespace setVariable ['StatusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['StatusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['StatusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls
	{
		class statusBarText
		{
			idc = 55554;
			x = safezoneX;
			y = safeZoneY + safeZoneH - 40 * pixelH;
			w = safeZoneW;
			h = 30 * pixelH;
			shadow = 2;
			font = "OrbitronLight";
			size = 0.04;
			type = 13;
			style = 2;
			text="";
			class Attributes
			{
				align="center";
				color = "#ffffff";
                font = "OrbitronLight";
			};
		};
	};
};