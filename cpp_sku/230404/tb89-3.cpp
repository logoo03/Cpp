#include <iostream>

using namespace std;

int bigger(int, int);

int main() {
    cout << "두 수를 입력하라 >>";
    int a, b;
    cin >> a >> b;
    cout << "큰 수 = " << bigger(a, b) << endl;

    return 0;
}

int bigger(int _a, int _b) {
    return (_a > _b ? _a : _b);
}