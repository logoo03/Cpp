#include <iostream>
using namespace std;

int add(int[], int);
int add(int[], int, int[]);


int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 6, 7, 8, 9, 10 };
    int c = add(a, 5);
    int d = add(a, 5, b);
    cout << c << endl;
    cout << d << endl;
    return 0;
}

int add(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int add(int arr1[], int n, int arr2[]) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr1[i] + arr2[i];
    return sum;
}