#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "Point.hpp"

using namespace std;
namespace ariel {
class Character{
    private:
        Point location;
        int hitPoint;
        string name;

    public:
    Character(Point location, int hitPoint, string name);
    virtual ~Character() = default;
    bool isAlive();
    double distance(Character* other);
    void hit(int num);
    string getName();
    Point getLocation();
    virtual string print() = 0;
    int getHitPoints();

};
}
#endif