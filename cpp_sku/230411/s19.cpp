#include <iostream>

using namespace std;

class Tower {
int height;
public:
    Tower();
    Tower(int);
    int getHeight();
};

Tower::Tower(): Tower(1) {}
Tower::Tower(int h): height(h) {}
int Tower::getHeight() { return height; }

int main() {
    Tower mytower;
    Tower seoulTower(100);
    cout << "height: " << mytower.getHeight() << "m\n";
    cout << "height: " << seoulTower.getHeight() << "m\n";

    return 0;
}