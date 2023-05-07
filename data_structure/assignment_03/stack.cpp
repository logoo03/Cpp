#include "stack.h"

stackClass::stackClass() { } // 아무것도 하지 않는 생성자
stackClass::~stackClass() { } // 아무것도 하지 않는 소멸자

void stackClass::Push(char Item) {
    // 리스트의 마지막에 삽입
    // 만약 삽입위치 이격 혹은 가득 차 있을 경우 listClass가 에러 발생시키므로 예외처리 필요 없음
    L.Insert(L.Length() + 1, Item);
}

// 빈 Stack에 Pop() 혹은 GetTop() 호출할 경우 listClass가 에러 발생시키므로 예외처리 필요 없음
void stackClass::Pop() {
    // 리스트의 마지막 원소 삭제
    L.Delete(L.Length());
}

char stackClass::GetTop() {
    // 리스트의 마지막 원소 반환
    char topValue;
    L.Retrieve(L.Length(), topValue);
    return topValue;
}

bool stackClass::IsEmpty() {
    // 리스트의 IsEmpty() 함수 활용
    return L.IsEmpty();
}

bool stackClass::IsFull() {
    // 리스트의 Length() 함수 활용
    return L.Length() == MAX;
}