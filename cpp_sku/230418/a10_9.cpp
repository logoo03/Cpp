#include <iostream>
#include <string>
using namespace std;

class Oval {
    int width, height;
public:
    Oval(int w, int h): width(w), height(h) { }
    Oval(): Oval(1, 1) { }
    ~Oval();
    void show();
    int getWidth();
    int getHeight();
    void set(int, int);
};

Oval::~Oval() { cout << "Oval 소멸 : "; show(); }
void Oval::show() { 
    cout << "width = " << width
        << ", height = " << height << endl;
}
int Oval::getWidth() { return width; }
int Oval::getHeight() { return height; }
void Oval::set(int w, int h) { width = w, height = h; }

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;
    return 0;
}