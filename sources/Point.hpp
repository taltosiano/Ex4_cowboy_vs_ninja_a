#ifndef POINT_HPP
#define POINT_HPP

#pragma once
#include <cmath>
#include <iostream>


class Point {
public:
    double x;
    double y;

private:
    Point();
    Point(double x, double y);
    double distance(const Point& p);
    void print();
    Point moveTowards(const Point& source, const Point& dest, double distance);
};

#endif