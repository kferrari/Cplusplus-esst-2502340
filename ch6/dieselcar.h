#ifndef DIESELCAR_H
#define DIESELCAR_H

#include "pkw.h"

class DieselCar : public PKW
{
public:

    // TODO: Override accelerate
    virtual void accelerate(const float seconds) override;

    DieselCar();

private:

    const float mAcceleration = 10000.0f; // km/(h^2)
};

#endif // DIESELCAR_H
