#include <iostream>

using namespace std;

class Rectangle {
public:
    int width;
    int height;
    double getArea();
    void setWidth(int);
    void setHeight(int);
};

double Rectangle::getArea() {
    return this->width * this->height;
}

void Rectangle::setHeight(int _h) {
    this->height = _h;
}

void Rectangle::setWidth(int _w) {
    this->width = _w;
}

int main() {
    Rectangle rect;
    rect.setHeight(5);
    rect.setWidth(3);
    cout << "직사각형의 면적은 " << rect.getArea() << endl;

    return 0;
}