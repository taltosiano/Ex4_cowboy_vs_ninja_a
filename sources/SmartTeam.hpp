#ifndef SMARTTEAM_HPP
#define SMARTTEAM_HPP

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Point.hpp"
#include "Character.hpp"

namespace ariel{
class SmartTeam{
private:
    Character* leader;
    vector<Character> members;

    public:
    Team(Character* leader);
    ~Team();
    void add(Character* member);
    void attack(Team* enemy);
    int stillAlive();
    string print();

};
}
#endif