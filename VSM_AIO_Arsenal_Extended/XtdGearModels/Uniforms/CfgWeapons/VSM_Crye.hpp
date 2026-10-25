class VSM_Crye
{
	options[] = {"camo","variant","sleeve"};
	label = "VSM Crye G3";
	class camo
	{
		alwaysSelectable = 1;
		values[] = {"ALPINE","AOR2","ARID","DESERT_TIGER_STRIPE","MULTICAM_BLACK","AOR1","SCORPION","OGA","OGA_GREY","OGA_OD","OGA_BLACK","MULTICAMTROPIC","MULTICAM","PROJECTHONOR","OCP","M81","MULTICAMWOODLAND"};
		class ALPINE { label = "Alpine"; };
		class AOR2 { label = "AOR2"; };
		class ARID { label = "Arid"; };
		class DESERT_TIGER_STRIPE { label = "Desert Tiger Stripe"; };
		class MULTICAM_BLACK { label = "Multicam Black"; };
		class AOR1 { label = "AOR1"; };
		class SCORPION { label = "Scorpion"; };
		class OGA { label = "OGA"; };
		class OGA_GREY { label = "OGA Grey"; };
		class OGA_OD { label = "OGA OD"; };
		class OGA_BLACK { label = "OGA Black"; };
		class MULTICAMTROPIC { label = "MulticamTropic"; };
		class MULTICAM { label = "Multicam"; };
		class PROJECTHONOR { label = "ProjectHonor"; };
		class OCP { label = "OCP"; };
		class M81 { label = "M81"; };
		class MULTICAMWOODLAND { label = "MulticamWoodland"; };
	};
	class variant
	{
		label = "variant";
		alwaysSelectable = 1;
		values[] = {"STANDARD","WHITE","GREEN_SHIRT","TAN","BLACK","OD_PANTS","OD_SHIRT","TAN_PANTS","TAN_SHIRT","GREY_PANTS","GREY_SHIRT","BLACK_PANTS","BLACK_SHIRT"};
		class STANDARD { label = "Standard"; };
		class WHITE { label = "White"; };
		class GREEN_SHIRT { label = "Green Shirt"; };
		class TAN { label = "Tan"; };
		class BLACK { label = "Black"; };
		class OD_PANTS { label = "OD Pants"; };
		class OD_SHIRT { label = "OD Shirt"; };
		class TAN_PANTS { label = "Tan Pants"; };
		class TAN_SHIRT { label = "Tan Shirt"; };
		class GREY_PANTS { label = "Grey Pants"; };
		class GREY_SHIRT { label = "Grey Shirt"; };
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
