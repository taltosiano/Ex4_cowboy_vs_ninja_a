#ifndef NINJA_HPP
#define NINJA_HPP

#pragma once
#include <cmath>
#include <iostream>
#include <string>
#include "Character.hpp"

class Ninja : public Character {
    private:
    int speed; 

    public:
    Ninja( string name,  Point location, int hitPoint, int speed): Character(location, hitPoint, std::move(name)), speed(speed){}
    void move( Characte* enemy);
    void slash( Characte* enemy);
    int getSpeed();
    string getType();
}

#endif