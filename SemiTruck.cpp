#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::pullInToRoadside()
{
    std::cout<<"SemiTruck::pullInToRoadside is called" << std::endl;
    setSpeed(0);
    std::cout << name << ": hello officer, I have a licence for that machine gun turret" << std::endl;
}

void SemiTruck::setSpeed(int s)
{
    Vehicle::setSpeed(s);
}

