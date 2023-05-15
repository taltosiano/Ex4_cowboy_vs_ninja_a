#include <cmath>
#include <iostream>
#include <string>
#include "Point.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel{

    Character::Character(Point location, int hitPoint, string name)
    : location(location), hitPoint(hitPoint), name(name) {}

    bool Character::isAlive(){
        return true;
    }

    double Character::distance( Character* other){
        return 0.0;
    }

    void Character::hit(int num) {}

    string Character::getName() {
        return this->name;
    }

    Point Character::getLocation(){
        return this->location;
    }

    string Character::print(){
        return "";
    }

    int Character::getHitPoints(){
        return this->hitPoint;
    }
}

