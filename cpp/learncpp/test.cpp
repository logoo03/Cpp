#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int basket[N];

    for (int i = 0; i < M; i++) {
        int from, to, num;
        cin >> from >> to >> num;
        for (int j = from; j < to; j++) {
            basket[j - 1] = num;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << basket[i] << ' ';
    }

    return 0;
}