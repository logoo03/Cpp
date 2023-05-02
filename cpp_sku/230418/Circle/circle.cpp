#include <iostream>

using namespace std;

#include "circle.h"

Circle::Circle(): Circle(1) { }

Circle::Circle(int r): radius(r) {
    cout << "반지름 " << radius
        << "인 원 생성\n";
}

double Circle::getArea() { return 3.14 * radius * radius; }