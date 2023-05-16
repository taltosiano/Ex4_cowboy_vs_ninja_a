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
 
 TEST_CASE("initialize Cowboy"){
   Cowboy cowboy1("Tibi", Point(1.0, 2.0)), cowboy2("Melo", Point(2, 3));
   CHECK(cowboy1.isAlive());
   CHECK(cowboy2.isAlive());
   CHECK_NOTHROW(cowboy1.shoot(&cowboy2));
   CHECK_EQ(cowboy1.getNumOfBoolets(), 6);
   for(int i=0; i<6; i++){
      cowboy2.shoot(&cowboy1);
   }
   CHECK_THROWS(cowboy2.shoot(&cowboy1));
   CHECK_FALSE(cowboy2.hasboolets());

 }

 TEST_CASE("initialize Ninja"){
   Point p1(1, 1), p2(2, 2), p3(3, 3);
   TrainedNinja tn1("Nini", p1), tn2("Shibi", p2);
   CHECK(tn1.isAlive());
   CHECK(tn2.isAlive());
   CHECK(tn1.getSpeed() == 12);
   CHECK(tn1.getHitPoints() == 120);
   CHECK_NOTHROW(tn1.move(&tn2));

   YoungNinja yn("YN", Point(1, 2));
   CHECK(yn.getSpeed() == 14);
   CHECK(yn.getHitPoints() == 100);

   OldNinja on("ON", Point(8, 3));
   CHECK(on.getSpeed() == 8);
   CHECK(on.getHitPoints() == 150);

   CHECK_NOTHROW(tn1.print());
   CHECK_NOTHROW(yn.print());
   CHECK_NOTHROW(on.print());
 }

 TEST_CASE("Team"){
   Point p1(1, 1);
   Cowboy cowboy1("Tibi", Point(1.0, 2.0)), cowboy2("Melo", Point(2, 3));
   TrainedNinja tn1("Nini", p1);
   Team teamA(&cowboy1);
   Team teamB(&cowboy2);
   CHECK_NOTHROW(teamA.add(&tn1));
   CHECK(teamA.stillAlive() == 2);
   CHECK_NOTHROW(teamA.attack(&teamB));   
 }

 TEST_CASE("The Game"){
    Point p1(1, 1), p2(2, 2), p3(3, 3);
    TrainedNinja tn1("Nini", p1), tn2("Shibi", p2);
    YoungNinja yn("YN", Point(1, 2));
    OldNinja on("ON", Point(8, 3));
    Cowboy cowboy1("Tibi", Point(1.0, 2.0)), cowboy2("Melo", Point(2, 3));
    CHECK_THROWS(cowboy1.shoot(&cowboy1));
    CHECK_THROWS(tn1.slash(&tn1));
    cowboy1.reload();
    CHECK_EQ(cowboy1.hasboolets(), true);
    Team teamA(&cowboy1);
    Team teamB(&tn1);
    teamA.add(&cowboy2);
    teamB.add(&tn2);
    CHECK(teamA.stillAlive() == 2);
    CHECK(teamB.stillAlive() == 2);
    CHECK_NOTHROW(teamA.attack(&teamB));
    if(teamB.stillAlive() == 0)
    {
        CHECK_FALSE(tn1.isAlive());
        CHECK_FALSE(tn2.isAlive());
        CHECK_THROWS(teamA.attack(&teamB));
    }

 }