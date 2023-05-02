#include <bits/stdc++.h>
#include "circle.h"

Circle::Circle(int r) {
    radius = r;
    updateArea();
}

void Circle::setRadius(int r) {
    std::cout << "반지름을 " << radius << "에서 " << r << "로 설정했습니다.\n";
    radius = r;
    updateArea();
}

void Circle::updateArea() {
    area = radius * radius * PI;
}

int Circle::getRadius() {
    return radius;
}

double Circle::getArea() {
    return area;
}

void Circle::operator=(Circle c) {
    radius = c.radius;
    updateArea();
}

bool Circle::operator<(Circle c) {
    return radius < c.radius ? true : false;
}

bool Circle::operator>(Circle c) {
    return radius > c.radius ? true : false;
}

bool Circle::operator<=(Circle c) {
    return radius <= c.radius ? true : false;
}

bool Circle::operator>=(Circle c) {
    return radius >= c.radius ? true : false;
}

bool Circle::operator==(Circle c) {
    return radius == c.radius ? true : false;
}

bool Circle::operator!=(Circle c) {
    return radius != c.radius ? true : false;
}

char* Circle::getShapeName() {
    return "원";
}