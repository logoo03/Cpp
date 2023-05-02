#include <iostream>

using namespace std;

bool equalArray(int*, int*, int);

int main() {
    cout << "2022305080 주현준\n";

    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 1, 2, 3, 4, 5 };
    
    if (equalArray(a, b, 5)) cout << "arrays equal\n";
    else cout << "arrays not equal\n";

    return 0;
}

bool equalArray(int* _a, int* _b, int s) {
    while (s--) {
        if (_a[s] != _b[s]) return false;
    }
    return true;
}