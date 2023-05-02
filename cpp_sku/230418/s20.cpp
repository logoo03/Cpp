#include <iostream>

using namespace std;

int main() {
    cout << "2022305080 주현준\n";
    
    int n[10], *p = NULL;

    for (int i = 0; i < 10; i++) {
        n[i] = i * 3;
    }

    p = n;
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        *(p + i) += 2;
    }

    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }
    cout << "\n";
    return 0;
}