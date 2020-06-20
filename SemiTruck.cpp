#include "SemiTruck.h"
#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::driveInSlowLane()
{
    setSpeed(50);
    std::cout << name << ": is driving in slow lane" << std::endl;
}

void SemiTruck::pullInToRoadside()
{
    setSpeed(0);
    std::cout << name << ": hello officer, I have a licence for that machine gun turret" << std::endl;
}



