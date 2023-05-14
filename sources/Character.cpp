#include <cmath>
#include <iostream>
#include <string>
#include "Point.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel{

    Character::Character(string name, Point location, int hitPoint)
    : name(name), location(location), hitPoint(hitPoint) {}

    bool Character::isAlive(){
        return true;
    }

    double Character::distance(const Character& other){
        return 0.0
    }

    void Character::hit(int num) {}

    string Character::getName() {
        return this->name;
    }

    Point Character::getLocation(){
        return this->location
    }

    void Character::print(){}
}

