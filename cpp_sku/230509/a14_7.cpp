#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    Circle carr[3];
    int answer = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Circle #" << i + 1 << " radius = ";
        int r; cin >> r;
        carr[i].setRadius(r);
        if (carr[i].getArea() > 100)
            answer++;
    }
    cout << "There are " << answer << " Circle(s) with an area > 100";
    return 0;
}