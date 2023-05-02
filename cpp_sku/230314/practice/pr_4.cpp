#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "2022305080 주현준" << endl;

    const int length = 5;
    double array[length], sum;
    cout << "실수 " << length << "개 입력 >> ";
    for (int i = 0; i < length; i++) {
        cin >> array[i];
        sum += array[i];
        cout << array[i] << " ";
    }
    cout << "의 평균 = " << sum / length;
    return 0;
}