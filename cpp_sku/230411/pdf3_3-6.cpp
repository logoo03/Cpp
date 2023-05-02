#include <iostream>

using namespace std;

class Rectangle {
public:
    int width, height;
    bool isSquare();
    Rectangle();
    Rectangle(int);
    Rectangle(int, int);
};

Rectangle::Rectangle(): Rectangle(1, 1) {}
Rectangle::Rectangle(int w): Rectangle(w, w) {}
Rectangle::Rectangle(int w, int h): width(w), height(h) {}
bool Rectangle::isSquare() {
    return width == height;
}

int main() {
    cout << "2022305080 주현준\n";
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare()) cout << "rect1은 정사각형이다.\n";
    if (rect2.isSquare()) cout << "rect2은 정사각형이다.\n";
    if (rect3.isSquare()) cout << "rect3은 정사각형이다.\n";

    return 0;
}
