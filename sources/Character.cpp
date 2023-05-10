#include <cmath>
#include <iostream>
#include <string>
#include "Point.hpp"
#include "Character.hpp"

using namespace std;

class Character{

    Character::Character(const string& name, const Point& location, int hitPoint)
    : name(name), location(location), hitPoint(hitPoint) {}

    bool Character::isAlive(){}

    double Character::distance(const Character& other){}

    void Character::hit(int num) {}

    string Character::getName() {}

    Point Character::getLocation(){}

    void Character::print(){}


