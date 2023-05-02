#include <iostream>

using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle(): Circle(1) {}

Circle::Circle(int r): radius(r) {
    cout << "반지름 " << radius << "인 원 생성" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    cout << "2022305080 주현준\n";
    Circle donut;
    cout << "Area of donut = " << donut.getArea() << endl;

    Circle pizza(30);
    cout << "Area of pizza = " << pizza.getArea() << endl;

    Circle cake(15);
    cout << "Area of cake = " << cake.getArea() << endl;

    return 0;
}