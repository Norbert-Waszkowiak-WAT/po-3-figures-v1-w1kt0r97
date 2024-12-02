#include "line.h"
#include <iostream>
#include <string>
#include <iomanip>

Line::Line(Point a, Point b): a(a), b(b) {};
Line::Line(const Line &other): a(other.a), b(other.b) {};



bool Line::equals(const Line &other) {
    return a.equals(other.a) && b.equals(other.b);
}

void Line::flip() {
    a.flip();
    b.flip();
};

void Line::move(double x, double y) {
    a.move(x, y);
    b.move(x, y);
};


string Line::toString() {
        return "Line(" + a.toString() + ", " + b.toString() + ")";
};






