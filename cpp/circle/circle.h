#ifndef CIRCLE_H
#define CIRCLE_H

const double PI = 3.141592;

class Circle {
    private:
    int radius;
    double area;
    void updateArea();

    public:
    Circle(int r);
    void operator = (Circle c);
    bool operator > (Circle c);
    bool operator < (Circle c);
    bool operator >= (Circle c);
    bool operator <= (Circle c);
    bool operator == (Circle c);
    bool operator != (Circle c);

    void setRadius(int r); // 반지름을 설정하는 함수
    int getRadius(); // 반지름을 되돌려주는 함수
    double getArea();
    char* getShapeName();
};

#include "circle.cpp"
#endif