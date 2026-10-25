class VSM_Massif
{
	options[] = {"camo","variant","sleeve"};
	label = "VSM Massif Combat Uniform";
	class camo
	{
		alwaysSelectable = 1;
		values[] = {"ALPINE","AOR2","DESERT_TIGER_STRIPE","AOR1","OGA_OD","SCORPION","OGA","BLACK","OGA_BLACK","MULTICAMWOODLAND","M81","MULTICAM","MULTICAMTROPIC","OCP","PROJECTHONOR"};
		class ALPINE { label = "Alpine"; };
		class AOR2 { label = "AOR2"; };
		class DESERT_TIGER_STRIPE { label = "Desert Tiger Stripe"; };
		class AOR1 { label = "AOR1"; };
		class OGA_OD { label = "OGA OD"; };
		class SCORPION { label = "Scorpion"; };
		class OGA { label = "OGA"; };
		class BLACK { label = "Black"; };
		class OGA_BLACK { label = "OGA Black"; };
		class MULTICAMWOODLAND { label = "MulticamWoodland"; };
		class M81 { label = "M81"; };
		class MULTICAM { label = "Multicam"; };
		class MULTICAMTROPIC { label = "MulticamTropic"; };
		class OCP { label = "OCP"; };
		class PROJECTHONOR { label = "ProjectHonor"; };
	};
	class variant
	{
		label = "variant";
		alwaysSelectable = 1;
		values[] = {"STANDARD","OD_PANTS","OD_SHIRT","TAN_PANTS","TAN_SHIRT","BLACK_PANTS","BLACK_SHIRT"};
		class STANDARD { label = "Standard"; };
		class OD_PANTS { label = "OD Pants"; };
		class OD_SHIRT { label = "OD Shirt"; };
		class TAN_PANTS { label = "Tan Pants"; };
		class TAN_SHIRT { label = "Tan Shirt"; };
		class BLACK_PANTS { label = "Black Pants"; };
		class BLACK_SHIRT { label = "Black Shirt"; };
	};
	class sleeve
	{
		label = "sleeve";
		alwaysSelectable = 1;
		values[] = {"LS","SS","TEE"};
		class LS { label = "Long sleeves"; };
		class SS { label = "Rolled sleeves"; };
		class TEE { label = "T-Shirt"; };
	};
};
