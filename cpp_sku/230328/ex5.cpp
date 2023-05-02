#include <iostream>

using namespace std;

bool isMultiple(int, int);

int main() {
    cout << "2022305080 주현준" << endl;
    int a, b;
    cout << "두 정수 입력 >> ";
    cin >> a >> b;
    cout << (isMultiple(a, b) ? "Yes" : "No");
    return 0;
}

bool isMultiple(int _a, int _b) {
    return _b % _a == 0 ? true : false;
}