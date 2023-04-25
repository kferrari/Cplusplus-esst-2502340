#include "fahrzeug.h"

#include <iostream>

Fahrzeug::Fahrzeug()
{

}

void Fahrzeug::showValues() const
{
    // TODO: Show speed only
    std::cout << "Speed is " << mSpeed << " km/h." << std::endl;
}

float Fahrzeug::getSpeed() const
{
    return mSpeed;
}

void Fahrzeug::setSpeed(float newSpeed)
{
    mSpeed = newSpeed;
}
