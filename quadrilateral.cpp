#include "quadrilateral.h"
#include <sstream>
#include <iomanip>
#include <cmath>
#include <iostream>

Quadrilateral :: Quadrilateral(Point a, Point b, Point c, Point d)
: a(a), b(b), c(c), d(d){};

Quadrilateral :: Quadrilateral(const Quadrilateral &other)
: a(other.a), b(other.b), c(other.c), d(other.d){};

bool Quadrilateral :: equals(const Quadrilateral &other){
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

#include "point.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>

Point :: Point (double x, double y) : x(x), y(y){};
Point :: Point (const Point &other) : x(other.x), y(other.y){};

double Point::getX(){
    return x;
};
double Point::getY(){
    return y;
};
bool Point::equals(const Point &other){
    return other.x == x && other.y == y;
};
void Point::flip(){
    x*=-1;
    y*=-1;
};
void Point::move(double x, double y){
    this->x+=x;
    this->y+=y;
};
string Point::toString(){
        ostringstream oss;
        oss<<fixed<<setprecision(1);
        oss<<"Point(" << x << ", " << y << ")";
        return oss.str();
};
double Point::distanceTo(const Point &other) {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
};

string Quadrilateral :: toString(){
    std :: ostringstream oss;
    oss << "Quadrilateral(" << a.toString() << ", " << b.toString() << ", " << c.toString() << ", " << d.toString() << ")";
    return oss.str();
};