#include "rack.hpp"

using namespace rack;

// Forward-declare the Plugin, defined in Template.cpp
extern Plugin *plugin;

// Forward-declare each Model, defined in each module source file
extern Model *modelTorPatch;
extern Model *modelTorPatchNano;
extern Model *modelTorStore;
extern Model *modelTorNotes;

#include "ComponentLibrary/components.hpp"
