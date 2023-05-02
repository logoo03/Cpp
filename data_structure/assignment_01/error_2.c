#include <stdio.h>
#include "list.h"

int main() {
    listType list; // listType형의 변수를 선언
    listType *listptr = &list; // list를 가리키는 포인터
    Init(listptr); // list 초기화
    for (int i = 1; i <= 100; i++) {
        // 1 번째부터 100 번째까지 55 삽입
        Insert(listptr, i, 55);
    }

    Insert(listptr, 10, 7); // 10 번째 위치에 7 삽입 (List full Error)

    return 0;
}

