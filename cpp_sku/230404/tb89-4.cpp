#include <iostream>
#define SIZE 5

using namespace std;

float getMax(float*);

int main() {
    cout << "2022305080 주현준" << endl;
    float arr[SIZE];
    cout << SIZE << "개의 실수를 입력하라 >> ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    cout << "제일 큰 수 = " << getMax(arr) << endl;
    return 0;
}

float getMax(float* _a) {
    float max = -__FLT_MAX__;
    for (int i = 0; i < SIZE; i++) {
        if (_a[i] > max) max = _a[i];
    }
    return max;
}