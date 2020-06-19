#include "HighwayPatrol.h"
#include "Highway.h"
#include <iostream>

HighwayPatrol::HighwayPatrol() : Vehicle("HighwayPatrol")
{

}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << name << "\n: scanning highway for speeders" << std::endl;

    h->printVehicles("before for loop :");

    // for( size_t i = 0; i < h->vehicles.size(); ++i  )
    for( size_t i = h->vehicles.size(); --i; i >= 0 )
    {
        std::cout <<"i is: " << i << std::endl;
        auto* v = h->vehicles[i];
        std::cout << "\n" << v->name << " checking" << std::endl;
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
        std::cout << "\n" << v->name << " scanned" << std::endl;
        h->printVehicles("after if statement :");
        
    }
    std::cout << "after for loop scope" << std::endl;
}

void HighwayPatrol::pullOver( Vehicle* v, bool willArrest, Highway* h )
{
    std::cout << "\n\n";
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if( willArrest )
    {
        //print the vehicle type in this std::cout between "THE [" and "] PULL". 
        std::cout << name << ": YOU IN THE [ " << v->name <<" ] PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}
