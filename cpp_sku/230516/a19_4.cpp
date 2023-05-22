#include <iostream>
using namespace std;

class MyVector {
    int* mem;
    int size;
public:
    MyVector(int, int);
    ~MyVector() { delete[] mem; }
    void show() {
        for (int i = 0; i < size; i++)
            cout << mem[i] << ' ';
        cout << endl;
    }
};

MyVector::MyVector(int n = 10, int v = 0) {
    mem = new int[n];
    size = n;
    for (int i = 0; i < n; i++) mem[i] = v;
}

int main() {
    MyVector v1;
    MyVector v2(5, 2);
    v1.show();
    v2.show();
    return 0;
}