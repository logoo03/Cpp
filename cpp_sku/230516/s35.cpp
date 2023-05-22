#include <iostream>
using namespace std;

class MyVector {
    int* p;
    int size;
public:
    MyVector(int n = 100) {
        p = new int[n];
        size = n;
        cout << "Constructor (size=" << size << ")" << endl;
    }
    ~MyVector() {
        cout << "Destructor (size=" << size << ")" << endl;
        delete[] p;
    }
};

int main() {
    cout << "2022305080 주현준\n\n";

    MyVector* v1, * v2;
    v1 = new MyVector();
    v2 = new MyVector(1024);

    delete v1;
    delete v2;

    return 0;
}