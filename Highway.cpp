#include "Highway.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"

#include <cassert>

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    if(auto* car = dynamic_cast<Car*>(v))
    {
        car->closeWindows();
    }
    if(auto* motorcycle = dynamic_cast<Motorcycle*>(v))
    {
        motorcycle->lanesplitAndRace(100);
    }
}

void Highway::removeVehicleInternal(Vehicle* v)
{

    if(auto* car = dynamic_cast<Car*>(v))
    {
        
        car->tryToEvade();
    }
    if(auto* motorcycle = dynamic_cast<Motorcycle*>(v))
    {
        
        motorcycle->tryToEvade();
    }
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}
