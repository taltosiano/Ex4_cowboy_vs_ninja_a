#include <cmath>
#include <iostream>
#include <string>
#include "Character.hpp"

class Cowboy : public Character {
    private:
    int numOfBoolets;

    public:
    Cowboy(const string& name, const Point& location);
    void shoot(const Characte& enemy);
    bool hasboolets();
    void reload();
}