#include "Car.h"

#include <iostream>

Car::Car(const std::string& n) : Vehicle(n) {}

Car::Car(const Car& other)
{
    this->speed = other.speed;
    this->name = other.name;
}

Car::Car& operator= (const Car& other)
{
    this->speed = other.speed;
    this->name = other.name;
    return *this;
}

Car::~Car()
{
    
}

void Car::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}
