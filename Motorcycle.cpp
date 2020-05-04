#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string& n) : Vehicle(n) {}

void Motorcycle::lanesplitAndRace( int topSpeed )
{
    std::cout<<"Motorcycle::lanesplitAndRace"<<" is called" << std::endl;
    setSpeed(topSpeed);
    std::cout << name << (topSpeed > 90 ? ": yeeehawwww" : ": zzzzzzzz") << std::endl;
}
void Motorcycle::tryToEvade()
{
    std::cout<<"Motorcycle::tryToEvade"<<" is called" << std::endl;
    std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
    setSpeed(120);
}

void Motorcycle::setSpeed(int s)
{
   std::cout<<"Motorcycle::setSpeed"<<" is called" << std::endl;
    if( s < 90 )
    {
        //ignore the request to lower the speed
        std::cout<< name << ": uh, no.  i'm currently lane-splitting and racing" << std::endl;
    }
    else
    {
        Vehicle::setSpeed(s);
    }
}