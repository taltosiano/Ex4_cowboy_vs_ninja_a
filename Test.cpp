#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "sources/Team.hpp"

using namespace ariel;
using namespace std;

TEST_CASE("Point"){
    Point p1(0, 0), p2(1.5, 2.5), p3(2, 4), p4(-3, -5.5);
    CHECK(p2.getX() == 1.5);
    CHECK(p2.getY() == 2.5);
    CHECK(p4.getX() == -3);
    CHECK(p4.getX() == -5.5);
    CHECK_EQ(p1.distance(p3), 4.47);
 }

 TEST_CASE("initialize character"){
    Point p1(1, 1), p2(2, 2), p3(3, 3);
    Character c1(p1, 15, "Dani"), c2(p2, 10, "Beni");
    CHECK(c1.isAlive());
    CHECK(c2.isAlive());
    CHECK(c1.getHitPoints() == 15);
    CHECK_EQ(c2.getName(), "Beni");
    
 }
 
 TEST_CASE("Cowboy"){
   Cowboy cowboy1("Tibi", Point(1.0, 2.0)), cowboy2("Melo", Point(2, 3));
   CHECK(cowboy1.isAlive());
   CHECK(cowboy2.isAlive());
   CHECK_NOTHROW(cowboy1.shoot(&cowboy2));
   CHECK_EQ(cowboy1.getNumOfBoolets(), 6);
   cowboy1.reload();
   CHECK_EQ(cowboy1.getNumOfBoolets(), 12);
   CHECK_EQ(cowboy2.hasboolets(), true);
   for(int i=0; i<6; i++){
      cowboy2.shoot(&cowboy1);
   }
   CHECK_THROWS(cowboy2.shoot(&cowboy1));
 }
 TEST_CASE("Ninja"){
   Point p1(1, 1), p2(2, 2), p3(3, 3);
   Ninja ninja1(p1, 50, "Nini", 15), ninja2(p2, 70, "Nini", 17);
   CHECK(ninja1.isAlive());
   CHECK(ninja2.isAlive());
   CHECK(ninja1.getSpeed() == 15);
   CHECK_NOTHROW(ninja1.move(&ninja2));

   YoungNinja yn("YN", Point(1, 2));
   CHECK(yn.getSpeed() == 14);
   CHECK(yn.getHitPoints() == 100);
 }

 TEST_CASE("Team"){
   Point p1(1, 1);
   Character c1(p1, 15, "Dani");
   Cowboy cowboy1("Tibi", Point(1.0, 2.0)), cowboy2("Melo", Point(2, 3));
   Ninja ninja1(p1, 50, "Nini", 15);
   Team teamA(&cowboy1);
   Team teamB(&cowboy2);
   CHECK_NOTHROW(teamA.add(&ninja1));
   CHECK(teamA.stillAlive() == 2);
   CHECK_NOTHROW(teamA.attack(&teamB));
   CHECK_FALSE(cowboy2.isAlive());

 }
