#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(): Circle(1) { }
    Circle(int);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

Circle::Circle(int r): radius(r) {
    cout << "생성자 실행 radius = " << radius << endl;
}

int main() {
    cout << "2022305080 주현준\n\n";

    Circle *pArray = new Circle[3];

    (pArray + 0)->setRadius(10);
    (pArray + 1)->setRadius(20);
    (pArray + 2)->setRadius(30);

    for (int i = 0; i < 3; i++)
        cout << (pArray + i)->getArea() << '\n';
    
    for (Circle* ptr = pArray; ptr < pArray + 3; ptr++)
        cout << ptr->getArea() << '\n';
    
    delete[] pArray;
    return 0;
}