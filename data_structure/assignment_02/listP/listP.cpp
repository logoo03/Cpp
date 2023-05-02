#include <iostream>
#include "listP.h"

/* 에러를 코드로 매핑하여 어떤 에러인지 결정 */
#define UNKWN_ERR 0
#define LIST_FULL 1
#define INVLD_POS 2
#define LIST_EMTY 3

/* 리스트 생성자: 초기화 */
listClass::listClass(): Count(0), Head(NULL) { }

/* 리스트 소멸자: 아무것도 하지 않음 */
listClass::~listClass() {
    while (!IsEmpty()) Delete(1);
}

/* 오류 발생 시 오류 메시지 출력 */
void listClass::Error(int Detail) {
    std::string s[4] = {
        "Unknown Error",
        "List Full",
        "Position out of range",
        "List Empty"
    };
    std::cout << "[ERROR] " << s[Detail] << std::endl;
}

/* Position 위치에 Item 삽입 */
void listClass::Insert(int Position, int Item) {
    if ((Position < 1) || ((Count + 1) < Position)) {
        Error(INVLD_POS);
    } else {
        if (Position == 1) { // Count == 0인 경우도 포함
            Head = new node({ Item, Head });
        } else {
            Nptr temp = Head; // 다음 노드
            for (int i = 1; i < (Position - 1); i++) temp = temp->Next;
            temp->Next = new node({ Item, temp->Next });
        }
        Count++;
    }
}

/* Position 위치의 데이터 지움 */
void listClass::Delete(int Position) {
    if ((Position < 1) || (Count < Position)) {
        Error(INVLD_POS);
    } else {
        Nptr p;
        if (Position == 1) {
            p = Head;
            Head = Head->Next;
        } else {
            Nptr Temp = Head; // 다음 노드
            for (int i = 1; i < (Position - 1); i++) Temp = Temp->Next;
            p = Temp->Next;
            Temp->Next = p->Next;
        }
        Count--;
        delete(p);
    }
}

void listClass::Retrieve(int Position, int* Item) {
    if ((Position < 1) || (Count < Position)) {
        Error(INVLD_POS);
    } else {
        Nptr temp = Head; // 다음 노드
        for (int i = 1; i < Position; i++) temp = temp->Next;
        *Item = temp->Data;
    }
}

bool listClass::IsEmpty() { return (Count == 0); }

int listClass::Length() { return Count; }

void listClass::Print() {
    std::cout << "{ ";
    Nptr p = Head;
    for (int i = 0; i < (Count - 1); i++) {
        if ((i % 10 == 0) && (i != 0)) std::cout << "\n"; // 10개 단위로 줄바꿈
        // 1번째 원소부터 마지막 원소까지
        std::cout << p->Data << ", "; // 각각 원소를 출력
        p = p->Next;
    }
    if (Count != 0) { // 원소가 하나도 없으면 출력하지 않음
        std::cout << p->Data << " "; // 마지막 원소는 쉼표 생략
    }
    std::cout << "}\n";
}