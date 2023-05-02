#include <iostream>

using namespace std;

#include "circle.h"

int main() {
    Circle donut;
    cout << "donut 면적은 " << donut.getArea() << endl;

    Circle pizza(30);
    cout << "pizza 면적은 " << pizza.getArea() << endl;

    return 0;
}