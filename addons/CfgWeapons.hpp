class CfgWeapons {
	// ========== Helmets ==========
	class ItemCore;
	class scout_reich_helm: ItemCore {
		ACE_hearing_lowervolume = 0.25;
	};

	// ========== Weapons ==========
	class Rifle;
	class Rifle_Base_F: Rifle {};
	class SF7_Metro_Bastard_Base: Rifle_Base_F { // values taken from the Sterling submachine gun mk 4/5 (https://old.weaponsystems.net/weaponsystem/AA02%20-%20Sterling.html)
		ACE_barrelTwist = 250;
		ACE_barrelLength = 198;
	};
	class SF7_Metro_Kalash_Base: Rifle_Base_F {
		ACE_barrelTwist = 200;
		ACE_barrelLength = 415;
	};
};
