#include <cmath>
#include <iostream>
#include <string>
#include "Cowboy.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel{

Cowboy::Cowboy(string name, Point location)
    : Character(name, location, 110), numOfBoolets(6) {}

void Cowboy:shoot(const Characte& enemy){}
bool Cowboy::hasboolets(){
    return true;
}
void Cowboy::reload(){}

int Cowboy::getNumOfBoolets(){
    this->numOfBoolets;
}

}