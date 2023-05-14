#include <cmath>
#include <iostream>
#include <Point.hpp>

using namespace std;

namespace ariel{

Point::Point(double x, double y) : x(x), y(y) {}
Point::Point() : x(0), y(0) {}

double Point::distance(const Point& other) {
    return 0.0;
}

void Point::print(){
}

Point Point::moveTowards(const Point& source, const Point& dest, double distance){  
    return (*this);
}
}