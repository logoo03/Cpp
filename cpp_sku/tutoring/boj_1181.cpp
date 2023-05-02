#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    string words[N];
    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }
    sort(words, words + N);
    for (int i = 0; i < N; i++) {
        cout << words[i] << "\n";
    }
    int count = N, min = __INT32_MAX__;
    while (count--) {
        for (int i = 0; i < N; i++) {
            int length = words[i].length();
            if (length < min) min = length;
        }
    }
    return 0;
}