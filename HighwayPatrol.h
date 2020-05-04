#pragma once
#include "Highway.h"
#include "Vehicle.h"

struct Vehicle;
struct Highway;
struct HighwayPatrol : Vehicle
{
    HighwayPatrol();
    void scanHighway(Highway* h);
    
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};