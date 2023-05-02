#include <iostream>

using namespace std;

int main() {
    cout << "2022305080 주현준\n";
    int m = 100, n = 1000;
    int *p = &m;
    cout << "m=" << *p << "\n";
    p = &n;
    cout << "n=" << *p << "\n";

    return 0;
}