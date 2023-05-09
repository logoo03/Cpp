#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    cout << "# of Circles >> ";
    int n; cin >> n;
    Circle* carr = new Circle[n];
    int answer = 0;
    for (int i = 0; i < n; i++) {
        cout << "Circle #" << i + 1 << " radius = ";
        int r; cin >> r;
        carr[i].setRadius(r);
        if (carr[i].getArea() > 100)
            answer++;
    }
    cout << "There are " << answer << " Circle(s) with an area > 100";
    delete[] carr;
    return 0;
}