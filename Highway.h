#pragma once

// for debugging
#include <iostream>

#include <vector>
#include <algorithm>
#include <string>

struct Vehicle;
struct HighwayPatrol;

struct Highway
{
    ~Highway()
    {
        std::cout << "Highway destructor called" << std::endl;
    }

    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
    
    //for debugging
    void printVehicles(std::string point);

private:
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;
    friend HighwayPatrol;
};

