#ifndef PKW_H
#define PKW_H

#include "fahrzeug.h"

class PKW : public Fahrzeug
{
public:
    PKW();

    void drive(const float seconds);

    void showValues() const;

    float getPosition() const;
    void setPosition(float newPosition);

    virtual void accelerate(const float seconds) override = 0;

private:
    float mPosition = 0.0f; // km

};

#endif // PKW_H
