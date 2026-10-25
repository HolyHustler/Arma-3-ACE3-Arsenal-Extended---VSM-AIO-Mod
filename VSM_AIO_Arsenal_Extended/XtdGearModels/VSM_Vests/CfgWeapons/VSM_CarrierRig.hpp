class VSM_CarrierRig
{
	options[] = {"camo","Loadout"};
	label = "LBT Armatus Carrier Rig";
	class camo
	{
		alwaysSelectable = 1;
		values[] = {"OGA_OD","PROJECTHONOR","MULTICAMTROPIC","OGA","M81","MULTICAM","AOR1","OCP","ALPINE","AOR2","ARID","DTS"};
	};
	class Loadout
	{
		label = "Loadout";
		alwaysSelectable = 1;
		values[] = {"OPERATOR","BREACHER","GUNNER"};
	};
};
