#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "Point.h"

class Character{
    private:
        Point location;
        int hitPoint;
        string name;

    public:
    Character( Point location, int hitPoint, string name);
    virtual ~Character() {}
    virtual bool isAlive();
    virtual double distance(const Character& other);
    virtual void hit(int num);
    virtual string getName();
    virtual Point getLocation();
    virtual void print();

}
#endif