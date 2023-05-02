#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    do {
        int j = 0;
        do {
            cout << '*';
            j++;
        } while (j < n - i);
        cout << '\n';
        i++;
    } while (i < n);
    return 0;
}