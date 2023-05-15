#include <cmath>
#include <iostream>
#include <string>
#include "Point.hpp"
#include "Ninja.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel {
    //Ninja::Ninja(string name, Point location, int hitPoints, int speed): Character(location, getHitPoints(), std::move(name)), speed(speed){}

    void Ninja::move( Character* enemy){}
    void Ninja::slash( Character* enemy){}
    int Ninja::getSpeed(){
        return this->speed;
    }
    string Ninja::print(){
        return "";
    }
};
