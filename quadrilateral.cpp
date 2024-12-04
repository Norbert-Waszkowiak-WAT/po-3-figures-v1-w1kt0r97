#include "quadrilateral.h"
#include <sstream>
#include <iomanip>
#include <cmath>
#include <iostream>

Quadrilateral :: Quadrilateral(Point a, Point b, Point c, Point d)
: a(a), b(b), c(c), d(d){};

Quadrilateral :: Quadrilateral(Quadrilateral &other)
: a(other.a), b(other.b), c(other.c), d(other.d){};

bool Quadrilateral :: equals(Quadrilateral &other){
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c) && d.equals(other.d);
}

void Quadrilateral :: flip(){
    a.flip();
    b.flip();
    c.flip();
    d.flip();
}

void Quadrilateral :: move(double x, double y){
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
    d.move(x, y);
}

double Quadrilateral :: getSurface(){
    double ab = a.distanceTo(b);
    double bc = b.distanceTo(c);
    double cd = c.distanceTo(d);
    double da = d.distanceTo(a);

    double s = (ab + bc + cd + da) / 2.0;

    double area = sqrt((s - ab) * (s - bc) * (s - cd) * (s - da));

    return area;
};
string Quadrilateral :: toString(){
    std :: ostringstream oss;
    oss << "Quadrilateral(" << a.toString() << ", " << b.toString() << ", " << c.toString() << ", " << d.toString() << ")";
    return oss.str();
};