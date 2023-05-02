#include <bits/stdc++.h>

using namespace std;

char getDiv(int score);

int main() {
    cout << "2022305080 주현준" << endl;
    while (true) {
        int score;
        cout << "점수를 입력하세요 >> ";
        cin >> score;
        char div_c = getDiv(score);
        if (div_c != '\0') {
            cout << div_c << "입니다.";
        } else {
            cout << "잘못된 점수입니다.";
        }
        cout << "\n계속할까요? (y/n) >> ";
        char isEnd;
        cin >> isEnd;
        if (isEnd == 'N' || isEnd == 'n') {
            cout << "종료합니다." << endl;
            return 0;
        } else if (isEnd == 'Y' || isEnd == 'y') {
        } else {
            cout << "잘못된 입력입니다." << endl;
            return 1;
        }
    }
}

char getDiv(int _score) {
    if (_score > 100 || _score < 0) return '\0';
    else if (_score == 100) return 'A';
    else if (_score < 60) return 'F';
    else return static_cast<char>('F' - _score / 10 + 4);
}