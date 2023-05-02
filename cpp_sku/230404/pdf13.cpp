#include <iostream>

using namespace std;

class Circle {
    public:
    int radius;
    double getArea();
    Circle(int);
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

Circle::Circle(int r) {
    this->radius = r;
}

int main() {
    Circle donut(1);
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << endl;

    Circle cake(20);
    area = cake.getArea();
    cout << "cake의 면적은 " << area << endl;

    return 0;
}