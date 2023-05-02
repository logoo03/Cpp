#include <iostream>

using namespace std;

int bigger(int, int);
bool dividedByThree(int);

int main() {
    cout << "2022305080 주현준" << endl;
    int a, b, n;
    cout << "두 개의 정수 입력 >>";
    cin >> a >> b;
    n = bigger(a, b);
    cout << a << "와 " << b << " 중 큰 값은 "
    << n << "입니다." << endl;
    cout << n << "은 3의 배수";
    if (dividedByThree(n)) cout << "입니다.";
    else cout << "가 아닙니다.";

    return 0;
}

int bigger(int a, int b) {
    return a > b ? a : b;
}

bool dividedByThree(int n) {
    return n % 3 == 0 ? true : false;
}