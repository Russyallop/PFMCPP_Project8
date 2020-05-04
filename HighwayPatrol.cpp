#include "HighwayPatrol.h"

#include <iostream>

HighwayPatrol::HighwayPatrol() : Vehicle("HighwayPatrol")
{
    
}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << std::endl <<name << ": scanning highway for speeders" << std::endl;
    
    
    
    for( size_t i = 0; i < h->vehicles.size(); i++ )
    {
        h->printVehicles();
        auto* v = h->vehicles[i];
        std::cout<<"\n\n"<<v->name<<" sighted"<<std::endl;
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            std::cout<<"HighwayPatrol::changeSpeed after pullover is called which set speeds to 50" << std::endl;
            h->changeSpeed(50); //slow down for the highway patrol
            std::cout<<"end of if"<<std::endl;
        }
        else std::cout<<v->name<<"you're ok"<<std::endl;
    }
    std::cout<<"scanned"<<std::endl;
    
}

void HighwayPatrol::pullOver( Vehicle* v, bool willArrest, Highway* h )
{
    
    std::cout<<"HighwayPatrol::pullOver"<<" is called" << std::endl;
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if( willArrest )
    {
        //print the vehicle type in this std::cout between "THE [" and "] PULL".
        std::cout << name << ": YOU IN THE [ " <<v->name<< " ] PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}
