#include <stdio.h>
#include "list.h"

int main() {
    listType list; // listType형의 변수를 선언
    listType *listptr = &list; // list를 가리키는 포인터
    Init(listptr); // list 초기화

    Insert(listptr, 2, 10); // 2 번째 위치에 10 삽입 (Position out of range Error)

    return 0;
}

