#include <cmath>
#include <iostream>
#include <string>
#include "Character.hpp"

class Ninja : public Character {
    private:
    int speed; 

    public:
    Ninja(const string& name, const Point& location, int hitPoint, int speed);
    void move(const Characte& enemy);
    void slash(const Characte& enemy);
    int getSpeed();
    string getType();


}
