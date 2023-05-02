#include <iostream>

using namespace std;

int main() {
    int C; cin >> C;
    while (C--) {
        int N, sum = 0; cin >> N;
        int scores[N];
        
        for (int i = 0; i < N; i++) {
            int s; cin >> s;
            scores[i] = s;
            sum += s;
        }
        double avg = sum / N;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (scores[i] > avg) cnt++;
        }
        double rat = cnt / static_cast<double>(N) * 100;
        cout << fixed;
        cout.precision(3);
        cout << rat << '%' << '\n';
    }
    return 0;
}