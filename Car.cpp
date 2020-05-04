#include "Car.h"

#include <iostream>


Car::Car(const std::string& n) : Vehicle(n)
{
    std::cout<<name<< " created"<<std::endl;
}
Car::~Car()
{
    std::cout<<name<<" destroyed"<<std::endl;
}

void Car::closeWindows()
{
   std::cout<<"Car::closeWindows"<<" is called" << std::endl;
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
   std::cout<<"Car::tryToEvade"<<" is called" << std::endl;
    setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}