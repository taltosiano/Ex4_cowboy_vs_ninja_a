#include <cmath>
#include <iostream>
#include <string>
#include "Point.hpp"
#include "Ninja.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel {
    Ninja::Ninja(const string& name, const Point& location, int hitPoints, int speed)
    : Character(name, location, hitPoint), speed(speed) {}

    void Ninja::move( Characte* enemy){}
    void Ninja::slash( Characte* enemy){}
    int Ninja::getSpeed(){
        return this->speed;
    }
    string Ninja::getType(){
        return "";
    }
}

class YoungNinja : public Ninja {
public:
    YoungNinja(Point location, string name) : Ninja(location, 100/*hit point*/, name, 14/*ninja speed*/) {}

    std::string getType() override {
        return "NY";
    }
};

class TrainedNinja : public Ninja {
public:
    TrainedNinja(Point location, string name) : Ninja(location, 120, name, 12) {}

    std::string getType() override {
        return "TN";
    }
};

class OldNinja : public Ninja {
public:
    OldNinja(Point location, string name) : Ninja(location, 150, name, 8) {}

    std::string getType() override {
        return "ON";
    }
};