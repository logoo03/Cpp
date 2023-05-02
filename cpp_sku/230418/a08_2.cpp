/* 포인터 ver. */
#include <iostream>

using namespace std;

void swapArray(int*, int*, int);
void printArray(int*, int);

int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 9, 8, 7, 6, 5 };

    cout << "배열 a = ";
    printArray(a, 5);
    cout << "배열 b = ";
    printArray(b, 5);
    swapArray(a, b, 5);

    cout << "배열 a = ";
    printArray(a, 5);
    cout << "배열 b = ";
    printArray(b, 5);

    return 0;
}

void swapArray(int* _a, int* _b, int s) {
    cout << "swapArray() 실행...\n";
    while (s--) {
        int tmp = *(_b + s);
        *(_b + s) = *(_a + s);
        *(_a + s) = tmp;
    }
}

void printArray(int* a, int s) {
    for (int i = 0; i < s; i++) cout << *(a + i) << " ";
    cout << "\n";
}