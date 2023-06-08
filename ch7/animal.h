#ifndef ANIMAL_H
#define ANIMAL_H

#include "zookeeper.h"
#include <memory>

class Animal
{
public:
    Animal();

    virtual void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) = 0;

    std::unique_ptr<Zookeeper> && releaseZooKeeper();

protected:
    std::unique_ptr<Zookeeper> mCurZookeeper;
};


class Elefant : public Animal
{
public:
    // TODO: Add definition for catchFoodFrom that overrides the virtual method
    // of Animal
    void catchFoodFrom(std::unique_ptr<Zookeeper> && zk);
};

class Giraffe : public Animal
{
public:
    // TODO: Add definition for catchFoodFrom that overrides the virtual method
    // of Animal
     void catchFoodFrom(std::unique_ptr<Zookeeper> && zk);
};

class Lion : public Animal
{
public:
    // TODO: Add definition for catchFoodFrom that overrides the virtual method
    // of Animal
     void catchFoodFrom(std::unique_ptr<Zookeeper> && zk);
};


#endif // ANIMAL_H
