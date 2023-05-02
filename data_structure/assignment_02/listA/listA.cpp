#include <iostream>
#include "listA.h"

/* 에러를 코드로 매핑하여 어떤 에러인지 결정 */
#define LIST_FULL 1
#define INVLD_POS 2
#define LIST_EMTY 3

/* 리스트 생성자: 초기화 */
listClass::listClass(): Count(0) { }

/* 리스트 소멸자: 아무것도 하지 않음 */
listClass::~listClass() { }

/* 오류 발생 시 오류 메시지 출력 */
void listClass::Error(int Detail) {
    std::string s;
    switch (Detail) {
    case LIST_FULL:
        s = "List Full"; break;
    case INVLD_POS:
        s = "Position out of range"; break;
    case LIST_EMTY:
        s = "List Empty"; break;
    }
    std::cout << "[ERROR] " << s << std::endl;
}

/* Position 위치에 Item 삽입 */
void listClass::Insert(int Position, int Item) {
    if (Count == MAX) Error(LIST_FULL);
    else if ((Position < 1) || ((Count + 1) < Position)) {
        Error(INVLD_POS);
    } else {
        for (int i = (Count - 1); i >= (Position - 1); i--) {
            Data[i + 1] = Data[i];
        }
        Data[Position - 1] = Item;
        Count++;
    }
}

/* Position 위치의 데이터 지움 */
void listClass::Delete(int Position) {
    if ((Position < 1) || (Count < Position)) {
        Error(INVLD_POS);
    } else {
        for (int i = (Position - 1); i <= (Count - 1); i++) {
            Data[i] = Data[i + 1];
        }
        Count--;
    }
}

void listClass::Retrieve(int Position, int* Item) {
    if ((Position < 1) || (Count < Position)) {
        Error(INVLD_POS);
    } else {
        *Item = Data[Position - 1];
    }
}

bool listClass::IsEmpty() { return (Count == 0); }

int listClass::Length() { return Count; }


void listClass::Print() {
    std::cout << "{ ";
    for (int i = 0; i < (Count - 1); i++) {
        if ((i % 10 == 0) && (i != 0)) std::cout << "\n"; // 10개 단위로 줄바꿈
        // 1번째 원소부터 마지막 원소까지
        std::cout << Data[i] << ", "; // 각각 원소를 출력
    }
    if (Count != 0) { // 원소가 하나도 없으면 출력하지 않음
        std::cout << Data[Count - 1] << " "; // 마지막 원소는 쉼표 생략
    }
    std::cout << "}\n";
}