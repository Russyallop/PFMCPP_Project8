#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

SemiTruck::SemiTruck(const SemiTruck& other)
{
    this->speed = other.speed;
    this->name = other.name;
}

SemiTruck::SemiTruck& operator= (const SemiTruck& other)
{
    this->speed = other.speed;
    this->name = other.name;
    return *this;
}

SemiTruck::~SemiTruck()
{
    
}

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

