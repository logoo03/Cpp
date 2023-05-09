#include <iostream>
using namespace std;

void swapByRef(int&, int&);
void swapByAddr(int*, int*);

int main() {
    cout << "m, n >> ";
    int m, n; cin >> m >> n;
    cout << m << ' ' << n << endl;
    cout << "call swapByRef()\n"; 
    swapByRef(m, n);
    cout << m << ' ' << n << endl;
    cout << "call swapByAddr()\n";
    swapByAddr(&m, &n);
    cout << m << ' ' << n << endl;
    return 0;
}

void swapByRef(int& a, int& b) {
    int tmp = a; a = b; b = tmp;
}

void swapByAddr(int* a, int* b) {
    int tmp = *a; *a = *b; *b = tmp;
}