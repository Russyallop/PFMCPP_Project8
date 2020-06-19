#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);

    ~SemiTruck() = default;
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;
 
    void driveInSlowLane();
    
    void pullInToRoadside();   
};

