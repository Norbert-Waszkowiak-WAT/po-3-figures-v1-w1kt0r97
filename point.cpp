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
