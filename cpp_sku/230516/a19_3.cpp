#include <iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b ? a : b);
}

inline int min(int a, int b) {
    return (a < b ? a : b);
}

inline int big(int a, int b, int c = 100) {
    return min(max(a, b), c);
}

int main() {
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;

    return 0;
}