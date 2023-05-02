#include <iostream>

using namespace std;

bool isMultiple(int a, int b);

int main() {
    cout << "2022305080 주현준" << endl;
    int n, m;
    cout << "두 정수 입력 >>";
    cin >> n >> m;
    cout << (isMultiple(n, m) ? "Yes" : "No");
    return 0;
}

bool isMultiple(int a, int b) {
    return b % a == 0 ? true : false;
}