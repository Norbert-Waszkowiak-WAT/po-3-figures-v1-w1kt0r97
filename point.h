#include <iostream>
#include <string>
#ifndef H_POINT
#define H_POINT

using namespace std;

class Point {

    private:
        double x;
        double y;


    public:
        Point(double x, double y);

        Point (Point &other);

        bool equals(Point &other);

        double getX();

        double getY();

        void flip();

        void move(double x, double y);

        string toString();

};

#endif