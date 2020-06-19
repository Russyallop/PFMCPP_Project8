#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

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



