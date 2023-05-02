#include <iostream>

using namespace std;

int getArea(int, int);

int main() {
    cout << "2022305080 주현준\n";
    cout << "너비를 입력하세요 >> ";
    int width; cin >> width;
    cout << "높이를 입력하세요 >> ";
    int height; cin >> height;
    int area = getArea(width, height);
    cout << "면적은 " << area << endl;
}

int getArea(int _width, int _height) {
    return _width * _height;
}