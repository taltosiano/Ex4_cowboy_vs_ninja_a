#include <cmath>
#include <iostream>
#include <Point.hpp>

using namespace std;

class Point{

Point::Point(double x, double y) : x(x), y(y) {}
Point::Point() : x(0), y(0) {}

double Point::distance(const Point& other) {
}

void Point::print(){
}

Point Point::moveTowards(const Point& source, const Point& dest, double distance){  
}
}