#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "2022305080 주현준" << endl;
    int a, b, sum = 0;
    cout << "두 개의 정수 입력 >> ";
    cin >> a >> b;
    int i = a;
    while (i <= b) {
        sum += i;
        i++;
    }
    cout << a << " ~ " << b << " 의 합은 " << sum << endl;
}