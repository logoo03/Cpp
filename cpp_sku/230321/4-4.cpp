#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "2022305080 주현준" << endl;
    int a, b, sum;
    cout << "두 개의 정수 입력 >> ";
    cin >> a >> b;
    sum = (b * (b + 1) - a * (a - 1)) / 2;
    cout << a << " ~ " << b << " 의 합은 " << sum << endl;
    return 0;
}