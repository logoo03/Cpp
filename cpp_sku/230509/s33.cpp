#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() : radius(1) { }
    Circle(int r) : radius(r) { }
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle&);

int main() {
    cout << "2022305080 주현준\n\n";

    Circle donut;
    readRadius(donut);
    cout << "donut's area = " << donut.getArea() << endl;

    return 0;
}

void readRadius(Circle& c) {
    cout << "radius >> ";
    int r; cin >> r;
    c.setRadius(r);
}