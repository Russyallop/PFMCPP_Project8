#pragma once
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);
    
    Car(const Car& other);

    Car& operator= (const Car& other);

    ~Car();
    
    void closeWindows();

    void tryToEvade() override;
};