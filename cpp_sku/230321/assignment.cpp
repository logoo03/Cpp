// 2차원 배열을 이용하여 구구단 출력
#include <iostream>

using namespace std;

int main() {
    cout << "2022305080 주현준" << endl;
    int start, end;
    cout << "시작 단? >> ";
    cin >> start;
    cout << "끝 단? >> ";
    cin >> end;
    int gugudan[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            gugudan[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 1; i <= 9; i++) {
        for (int j = start; j < end + 1; j++) {
            cout << j << 'x' << i << '=' << gugudan[j - 1][i - 1] << '\t';
        }
        cout << '\n';
    }
    return 0;
}
