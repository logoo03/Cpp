#include <iostream>
using namespace std;

bool bigger(int, int, int&);

int main() {
    int a, b, m;
    cout << "input 2 numbers >> ";
    cin >> a >> b;
    if (bigger(a, b, m))
        cout << "a and b are same";
    else
        cout << "the bigger number is " << m;
    return 0;
}

bool bigger(int a, int b, int& big) {
    big = (a > b ? a : b);
    return (a == b);
}