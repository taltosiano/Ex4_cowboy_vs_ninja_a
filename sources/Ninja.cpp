#include <cmath>
#include <iostream>
#include <string>
#include "Ninja.hpp"
#include "Character.hpp"

using namespace std;

class Ninja : public Character {
    Ninja::Ninja(const string& name, const Point& location, int hitPoints, int speed)
    : Character(name, location, hitPoint), speed(speed) {}

    void Ninja::move(const Characte& enemy){}
    void Ninja::slash(const Characte& enemy){}
    int Ninja::getSpeed(){
        return speed;
    }
    string Ninja::getType(){}
}

class YoungNinja : public Ninja {
public:
    YoungNinja(Point location, std::string name) : Ninja(location, 100, name, 14) {}

    std::string getType() override {
        return "NY";
    }
};

class TrainedNinja : public Ninja {
public:
    TrainedNinja(Point location, std::string name) : Ninja(location, 120, name, 12) {}

    std::string getType() override {
        return "TN";
    }
};

class OldNinja : public Ninja {
public:
    OldNinja(Point location, std::string name) : Ninja(location, 150, name, 8) {}

    std::string getType() override {
        return "ON";
    }
};