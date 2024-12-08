#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <string>
#include "line.h"
#include "point.h"


class Triangle{
private: 
    Point a;
    Point b;
    Point c;
public:
    Triangle(Point a, Point b, Point c);
    Triangle(const Triangle &other);
    bool equals(const Triangle &other);
    void flip();
    void move(double x, double y);
    double getSurface();
    string toString();
};
#endif