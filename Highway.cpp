#include "Highway.h"
#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"
#include <cassert>



void Highway::changeSpeed(int newSpeed)
{
    std::cout<<"Highway::changeSpeed"<<" is called" << std::endl;
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
//    assert(false);
  std::cout<<"Highway::addVehicleInternal"<<" is called" << std::endl;
        if(auto* car = dynamic_cast<Car*>(v))
        {
            car->closeWindows();
        }
        else if(auto* motorcyle = dynamic_cast<Motorcycle*>(v))
        {
            motorcyle->lanesplitAndRace(90);
        }
   
    /*
     depending on the derived type, call the member function that doesn't evade the cops.
     */
}

void Highway::removeVehicleInternal(Vehicle* v)
{
//    assert(false);
    std::cout<<"Highway::removeVehicleInternal"<<" is called" << std::endl;
    /*
     depending on the derived type, call the member function that tries to evade the cops.
     
     trucks pull over, but cars and bikes try to evade!!
     */
    if(auto* car = dynamic_cast<Car*>(v))
    {
        car->tryToEvade();
    }
    else if(auto* motorcyle = dynamic_cast<Motorcycle*>(v))
    {
        motorcyle->tryToEvade();
    }
    else if(auto* semiTruck = dynamic_cast<SemiTruck*>(v))
    {
        semiTruck->pullInToRoadside();
    }
}

void Highway::addVehicle(Vehicle* v)
{
    std::cout<<"\n"<<"Highway::addVehicle"<<" is called" << std::endl;
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
   std::cout<<"Highway::removeVehicle"<<" is called" << std::endl;
    vehicles.erase(std::remove(vehicles.begin(),
                               vehicles.end(),
                               v),
                   vehicles.end());
    removeVehicleInternal(v);
}
void Highway::printVehicles()
{
    for(auto* v : vehicles)
    {
        v->print();
    }
}