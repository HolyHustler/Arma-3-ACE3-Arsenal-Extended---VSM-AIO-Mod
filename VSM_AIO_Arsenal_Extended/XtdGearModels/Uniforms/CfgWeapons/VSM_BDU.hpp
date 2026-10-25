class VSM_BDU
{
	options[] = {"camo","variant"};
	label = "VSM Battle Dress Uniform";
	class camo
	{
		alwaysSelectable = 1;
		values[] = {"DESERT_TIGER_STRIPE","AOR1","M81","MULTICAM","MULTICAMTROPIC","OCP","PROJECTHONOR"};
		class DESERT_TIGER_STRIPE { label = "Desert Tiger Stripe"; };
		class AOR1 { label = "AOR1"; };
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
		values[] = {"STANDARD","OD_PANTS","TAN_PANTS"};
		class STANDARD { label = "Standard"; };
		class OD_PANTS { label = "OD Pants"; };
		class TAN_PANTS { label = "Tan Pants"; };
	};
};
