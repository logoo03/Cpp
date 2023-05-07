#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"
#include "list.h"
using namespace std;

/**
 * @class MismatchBraces
 * @brief 입력된 텍스트에서 짝이 맞지 않는 열린 중괄호의 라인번호 찾기
 * @see line 24 comment
*/
class MismatchBraces {

    int currentLine; // 현재 검사 중인 줄
    stackClass stack; // 열린 중괄호({)의 위치를 스택에 저장
public:
    MismatchBraces() : currentLine(1) { } // 현재 검사 중인 줄을 1로 설정
    void inputLine(string); // 줄 단위로 입력받음
    void printAnswer(); // 답 출력
};

void MismatchBraces::inputLine(string s) {
    /*
        가장 정석적으로 문제를 해결하려면
        <stack> 라이브러리의 pair과 같은 역할을 수행하는
        int, char의 튜플을 저장하는 스택이 있으면 좋겠지만,
        구현 형식이 정해져있으므로 char형 스택을 쓰되
        현재 라인번호를 char 형태로 저장하는 방식으로 구현했습니다.
        *아스키 코드가 아닌, 1 -> '1'과 같이 저장하기 위해
        '0' 을 currentLine에 더하였습니다.
    */
    for (char c : s) { // 받아온 문자열의 각 문자에 대해서
        if (c == '{') {
            // 열린 중괄호이면 스택에 Push (짝이 맞지 않는 중괄호의 후보군)
            stack.Push(currentLine + '0');
        } else if (c == '}') {
            // 닫힌 중괄호이면 스택에서 Pop (해당 중괄호의 짝을 제거)
            stack.Pop();
        }
    }
    currentLine++; // 한 줄이 끝나면 currentLine을 1 증가
}

void MismatchBraces::printAnswer() {
    if (stack.IsEmpty()) { // 짝이 맞지 않는 중괄호가 없을 경우
        cout << "There is no mismatching braces." << endl;
    } else {
        while (!stack.IsEmpty()) {
            // 짝이 맞지 않는 중괄호가 없을 때 까지
            cout << stack.GetTop() << ' '; // Top 원소 출력
            stack.Pop(); // Top 원소 Pop
        }
    }
}

int main() {
    ifstream inputFile; // 입력받을 파일 스트림
    inputFile.open("text.txt"); // text.txt로 받아서 열기
    if (!inputFile) { // 파일 열기 실패 시
        cout << "Error while opening file." << endl;
        return 1;
    }
    string line; // 입력 파일에서 읽어올 텍스트를 저장할 string
    MismatchBraces solver; // MismatchBraces 객체 solver
    while (getline(inputFile, line)) { // 입력 파일을 한 줄씩 읽어옴
        solver.inputLine(line); // solver에 한 줄씩 입력
    }
    solver.printAnswer(); // 짝이 맞지 않는 중괄호가 포함된 라인번호 출력
    inputFile.close(); // 파일 스트림 닫기
    return 0;
}