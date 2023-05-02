#include <iostream>

using namespace std;

class Rectangle {
    public:
    int width;
    int height;
    double getArea();
};

double Rectangle::getArea() {
    return this->width * this->height;
}

int main() {
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "직사각형의 면적은 " << rect.getArea() << endl;

    return 0;
}