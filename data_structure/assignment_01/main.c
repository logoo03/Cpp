#include <stdio.h>
#include "list.h"

int main() {
    listType list; // listType형의 변수를 선언
    listType* listptr = &list; // list를 가리키는 포인터
    Init(listptr); // list 초기화
    printf("00. Init() 실행 완료\n");

    // 1. IsEmpty() 함수를 실행하여 비어있으면 true, 비어있지 않으면 false 출력
    printf("01. IsEmpty() 실행 결과: %s\n", IsEmpty(listptr) ? "true" : "false");

    // 2. 1 번째 위치에 "5" 삽입
    Insert(listptr, 1, 5);
    printf("02. 1 번째 위치에 5 삽입 완료\n");

    // 3. 방금 삽입한 첫 번째 원소 반환하여 출력
    int n;
    Retrieve(listptr, 1, &n);
    printf("03. 1 번째 원소: %d\n", n);

    // 4. 두 번째 원소부터 열 번째 원소까지 2로 채움
    for (int i = 2; i <= 10; i++) {
        Insert(listptr, i, 2);
    }
    printf("04. 두 번째 부터 열 번째 위치까지 2 삽입 완료\n");

    // 5. 현재 list를 보기 쉬운 형태로 출력
    printf("05. list = ");
    Print(listptr);

    // 6. IsEmpty() 함수를 실행하여 비어있으면 true, 비어있지 않으면 false 출력
    printf("06. IsEmpty() 실행 결과: %s\n", IsEmpty(listptr) ? "true" : "false");

    // 7. Length() 함수를 실행하여 list의 원소 개수 반환
    printf("07. Length() 실행 결과: %d\n", Length(listptr));

    // 8. Update() 함수를 실행하여 다섯 번째 원소를 999으로 수정
    Update(listptr, 5, 999);
    printf("08. 5 번째 원소를 999으로 수정 완료\n");

    // 9. Append() 함수를 실행하여 원소 "-50"을 추가
    Append(listptr, -50);
    printf("09. 마지막에 -50 삽입 완료\n");

    // 10. 현재 list를 보기 쉬운 형태로 출력
    printf("10. list = ");
    Print(listptr);

    // 11. 모든 원소의 합을 구하고 출력
    printf("11. 모든 원소의 합: %ld\n", Sum(listptr));

    // 12. 가장 큰 원소를 출력
    printf("12. 가장 큰 원소: %d\n", Max(listptr));

    // 13. 가장 작은 원소를 출력
    printf("13. 가장 작은 원소: %d\n", Min(listptr));

    // 14. List를 뒤집고 보기 쉽게 출력
    Reverse(listptr);
    printf("14. 뒤집은 list = ");
    Print(listptr);

    // 15. 원소 "999" 찾기
    printf("15. \"999\"는 %d번째 원소\n", Index(listptr, 999));

    // 16. 마지막 원소를 pop하기
    printf("16. 마지막 원소: %d\n", Pop(listptr));

    // 17. 현재 list를 보기 쉬운 형태로 출력
    printf("17. list = ");
    Print(listptr);

    // 18. list 초기화 및 확인
    Init(listptr);
    printf("18. 초기화 완료, list = ");
    Print(listptr);

    // 19. n번째 위치에 n 삽입; n은 50까지
    for (int i = 1; i <= 50; i++) {
        Insert(listptr, i, i);
    }
    printf("19. 50까지 삽입 완료\n");

    // 20. list 다시 뒤집은 후 현재 상태 전부 출력
    Reverse(listptr);
    printf("20. 뒤집기 완료\n\n");
    Print(listptr);
    printf("List의 최댓값: %d\n", Max(listptr));
    printf("List의 최솟값: %d\n", Min(listptr));
    printf("List의 원소 개수: %d\n", Length(listptr));
    printf("List는 비어있는가? %s\n", (IsEmpty(listptr) ? "true" : "false"));
    printf("List 모든 원소의 합: %ld\n", Sum(listptr));
    printf("21의 위치: %d\n", Index(listptr, 21));
    printf("60의 위치: %d\n", Index(listptr, 60));

    return 0;
}

