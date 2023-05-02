#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x, int y);
    int x, y;
    void setPos(int x, int y);
    void shiftx(int s);
    void shifty(int s);
    void operator = (Point p);
    bool operator == (Point p);
    bool operator != (Point p);
};

#include "point.cpp"
#endif