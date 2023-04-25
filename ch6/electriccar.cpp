#include "electriccar.h"

ElectricCar::ElectricCar()
{

}

void ElectricCar::accelerate(const float seconds)
{
    // setSpeed(getSpeed() + mAcceleration*(seconds/3600));

    const auto pos = getPosition();
    const auto boost = 0.5f*(mAcceleration*seconds*seconds/(3600*3600));
    setPosition(pos + boost);
    setSpeed(getSpeed() + mAcceleration*(seconds/3600));
}
