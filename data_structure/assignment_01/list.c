#include <stdio.h>
#include <assert.h>
#include "list.h"
#define check_empty() assert(Lptr->Count > 0);
#define check_position() assert((1 <= Position) && (Position <= (Lptr->Count)));

void Insert(listType *Lptr, int Position, int Item) {
    /* Position 위치에 Item을 삽입 */
    // 예외 처리 시작
    assert(Lptr->Count != MAX); // List full
    assert((1 <= Position) && (Position <= (Lptr->Count + 1))); // Position out of range
    // 예외 처리 끝
    for (int i = (Lptr->Count - 1); i >= (Position - 1); i--) {
        // 마지막 원소부터 Position 위치의 원소까지 (역순으로)
        Lptr->Data[i + 1] = Lptr->Data[i]; // 앞쪽 원소를 한칸씩 뒤로 이동
    }
    Lptr->Data[Position - 1] = Item; // Position 위치에 Item을 넣음
    Lptr->Count++; // Count를 1 증가
}

void Delete(listType *Lptr, int Position) {
    /* Position 위치의 데이터를 삭제 */
    // 예외 처리 시작
    check_position(); // Position out of range
    // 예외 처리 끝
    Lptr->Data[Position - 1] = 0; // Position 위치의 원소를 0으로 수정
    for (int i = (Position - 1); i < (Lptr->Count - 1); i++) {
        // Position 위치의 원소부터 Count 위치의 원소까지
        Lptr->Data[i] = Lptr->Data[i + 1]; // 뒷쪽 원소를 한칸씩 앞으로 이동
    }
    Lptr->Count--; // Count를 1 감소
}

void Retrieve(listType *Lptr, int Position, int *ItemPtr) {
    /* Position 위치의 데이터를 ItemPtr에 넣음 */
    // 예외 처리 시작
    check_position(); // Position out of range
    // 예외 처리 끝
    *ItemPtr = Lptr->Data[Position - 1]; // Itemptr이 가리키는 값을 찾은 값으로 바꿈
}

void Init(listType *Lptr) {
    /* 초기화 */
    Lptr->Count = 0; // Count를 0으로 세팅
}

bool IsEmpty(listType *Lptr) {
    /* List가 비어있는 지 여부 */
    return (Lptr->Count == 0); // Count 값이 0이면 true, 아니면 false 반환
}

int Length(listType *Lptr) {
    /* List의 데이터 개수 */
    return Lptr->Count; // Count 값을 반환
}


// 추가로 구현한 기능들

void Append(listType *Lptr, int Item) {
    /* List의 마지막에 Item을 삽입 */
    Insert(Lptr, Lptr->Count + 1, Item);
}

void Update(listType *Lptr, int Position, int Item) {
    /* Position 위치의 데이터를 Item으로 수정 */
    // 예외 처리 시작
    check_position(); // Position out of range
    // 예외 처리 끝
    Lptr->Data[Position - 1] = Item; // Position 위치의 원소를 Item으로 수정
}

long Sum(listType *Lptr) {
    /* 모든 원소들의 합 출력 */
    // 예외 처리 시작
    check_empty(); // List empty
    // 예외 처리 끝
    long _sum = 0;
    for (int i = 0; i < Lptr->Count; i++) {
        _sum += Lptr->Data[i];
    }
    return _sum;
}

int Max(listType *Lptr) {
    /* 가장 큰 원소 출력 */
    // 예외 처리 시작
    check_empty(); // List empty
    // 예외 처리 끝
    int _max = -__INT32_MAX__; // int형의 최솟값으로 설정
    for (int i = 0; i < Lptr->Count; i++) {
        // List 내의 모든 원소를 대상으로
        if (Lptr->Data[i] > _max) _max = Lptr->Data[i];
        // 만약 현재 _max값보다 해당 값이 더 크면 max 값 수정
    }
    return _max;
}

int Min(listType *Lptr) {
    /* 가장 작은 원소 출력 */
    // 예외 처리 시작
    check_empty(); // List empty
    // 예외 처리 끝
    int _min = __INT32_MAX__; // int형의 최댓값으로 설정
    for (int i = 0; i < Lptr->Count; i++) {
        // List 내의 모든 원소를 대상으로
        if (Lptr->Data[i] < _min) _min = Lptr->Data[i];
        // 만약 현재 _min값보다 해당 값이 더 작으면 min 값 수정
    }
    return _min;
}

void Reverse(listType *Lptr) {
    /* List 뒤집기 */
    // 예외 처리 시작
    check_empty(); // List empty
    // 예외 처리 끝
    int mid = Lptr->Count / 2; // List의 중간 위치 저장
    for (int i = 0; i < mid; i++) {
        // List의 첫 번째 부터 중간 위치까지
        // List의 중간값을 기준으로 앞 뒤로 swap
        // ex.) {1, 2, 3, 4, 5} -> {5, 2, 3, 4, 1} -> {5, 4, 3, 2, 1}
        int tmp = Lptr->Data[i];
        Lptr->Data[i] = Lptr->Data[Lptr->Count - i - 1];
        Lptr->Data[Lptr->Count - i - 1] = tmp;
    }
}

int Pop(listType *Lptr) {
    /* List의 마지막 원소를 반환하고 해당 원소를 List에서 삭제 */
    // 예외 처리 시작
    check_empty(); // List empty
    // 예외 처리 끝
    int _pop = Lptr->Data[Lptr->Count - 1];
    Delete(Lptr, Lptr->Count);
    return _pop;
}

int Index(listType *Lptr, int Item) {
    /* List에서 Item을 찾아 그 위치를 반환, 없으면 -1 반환 */
    // 예외 처리 시작
    check_empty(); // List empty
    // 예외 처리 끝
    for (int i = 0; i < Lptr->Count; i++) {
        // List 내의 모든 원소를 대상으로
        if (Item == Lptr->Data[i]) {
            return (i + 1); // 만약 Item을 찾으면 해당 위치를 반환
        }
    }
    return -1; // Item을 찾지 못한 경우
}

void Print(listType *Lptr) {
    /* List를 보기 쉬운 형태로 출력 */
    printf("{ ");
    for (int i = 0; i < (Lptr->Count - 1); i++) {
        if ((i % 10 == 0) && (i != 0)) printf("\n"); // 10개 단위로 줄바꿈
        // 1번째 원소부터 마지막 원소까지
        printf("%d, ", Lptr->Data[i]); // 각각 원소를 출력
    }
    if (Lptr->Count != 0) { // 원소가 하나도 없으면 출력하지 않음
        printf("%d ", Lptr->Data[Lptr->Count - 1]); // 마지막 원소는 쉼표 생략
    }
    printf("}\n");
}

