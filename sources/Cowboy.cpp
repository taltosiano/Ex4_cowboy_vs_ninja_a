#include <cmath>
#include <iostream>
#include <string>
#include "Cowboy.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel{

Cowboy::Cowboy(string name, Point location)
    : Character(location, 110, name), numOfBoolets(6) {}

void Cowboy::shoot(Character* enemy){}
bool Cowboy::hasboolets(){
    return true;
}
void Cowboy::reload(){}

int Cowboy::getNumOfBoolets(){
    return this->numOfBoolets;
}

string Cowboy::print(){
    return "";
}


}