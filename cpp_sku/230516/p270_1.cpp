#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() : Circle(1) { }
    Circle(int n) : radius(n) { }
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

void swap(Circle&, Circle&);

int main() {
    Circle c1(3), c2(5);
    cout << "before swap" << endl;
    cout << "c1: " << c1.getArea() << endl;
    cout << "c2: " << c2.getArea() << endl;

    swap(c1, c2);
    cout << "after swap" << endl;
    cout << "c1: " << c1.getArea() << endl;
    cout << "c2: " << c2.getArea() << endl;
    return 0;
}

void swap(Circle& c1, Circle& c2) {
    Circle tmp = c1;
    c1 = c2;
    c2 = tmp;
}