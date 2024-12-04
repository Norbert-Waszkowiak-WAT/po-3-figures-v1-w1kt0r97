#include "triangle.h"
#include <iostream>
#include <string>
#include "line.h"
#include "point.h"
#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
using namespace std;

class Quadrilateral{
private:
    Point a;
    Point b;
    Point c;
    Point d;
public:
    Quadrilateral(Point a, Point b, Point c, Point d);
    Quadrilateral(Quadrilateral &other);
    bool equals(Quadrilateral &other);
    void flip();
    void move(double x, double y);
    double getSurface();
    string toString();
};
#endif