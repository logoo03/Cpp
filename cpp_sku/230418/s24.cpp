#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle(): Circle(1) { }
    Circle(int r): radius(r) { }
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    cout << "2022305080 주현준\n\n";

    Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

    for (int i = 0; i < 3; i++) {
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << "\n";
    }
    return 0;
}