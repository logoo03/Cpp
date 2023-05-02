#include <iostream>
using namespace std;

#define LENGTH 5

int main() {
    cout << "2022305080 주현준\n\n";

    int* arr = new int[LENGTH];
    if (!arr) {
        cout << "Failed to allocate memory." << endl;
        return 1;
    }

    int sum = 0;
    cout << "정수 " << LENGTH << "개 입력 >> ";
    for (int i = 0; i < LENGTH; i++) {
        int n; cin >> n;
        sum += n; arr[i] = n;
    }

    cout << "평균: " << static_cast<double>(sum) / LENGTH << endl;
    delete[] arr;
    
    return 0;
}