#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);

    SemiTruck(const SemiTruck& other);

    SemiTruck& operator= (const SemiTruck& other);

    ~SemiTruck();
    
    void pullInToRoadside();
    
    void setSpeed(int s) override;
};

