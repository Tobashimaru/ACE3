#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Jonpas"};
        PBO_URL;
        VERSION_CONFIG;
    };
};

#include "ACE_Settings.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMoves.hpp"
#include "CfgVehicles.hpp"