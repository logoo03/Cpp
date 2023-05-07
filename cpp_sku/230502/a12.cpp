#include <iostream>
using namespace std;

class Color {
    short red, green, blue;
public:
    Color() { red = green = blue = 0; }
    Color(int r, int g, int b) : red(r), green(g), blue(b) { }
    void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
    void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main() {
    Color screenColor(255, 0, 0);
    Color* p;
    p = &screenColor; // (1)
    p->show(); // (2)
    Color colors[3]; // (3)
    p = colors; // (4)

    // (5)
    colors[0].setColor(255, 0, 0);
    colors[1].setColor(0, 255, 0);
    colors[2].setColor(0, 0, 255);

    // (6)
    for (Color* cp = p; cp < (p + 3); cp++)
        cp->show();

    return 0;
}