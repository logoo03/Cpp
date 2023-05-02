#include <iostream>
using namespace std;

int main() {
    cout << "2022305080 주현준\n\n";

    cout << "입력할 정수의 개수는? >> ";
    int n; cin >> n;
    if (n <= 0) return 0;
    int* p = new int[n];
    if (!p) {
        cout << "Memory Full!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수 입력 >> ";
        cin >> p[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) sum += p[i];
    cout << "Avg: " << sum / n << endl;

    delete[] p;
    return 0;
}