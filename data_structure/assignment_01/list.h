#ifndef _LIST_H
#define _LIST_H
#include <stdbool.h>

#define MAX 100 // List의 최대 원소 개수

typedef struct {
    int Count;
    int Data[MAX];
} listType;

void Insert(listType *Lptr, int Position, int Item);
/* Position 위치에 Item을 삽입 */

void Delete(listType *Lptr, int Position);
/* Position 위치의 데이터를 삭제 */

void Retrieve(listType *Lptr, int Position, int *ItemPtr);
/* Position 위치의 데이터를 ItemPtr에 넣음 */

void Init(listType *Lptr);
/* 초기화 */

bool IsEmpty(listType *Lptr);
/* List가 비어있는 지 여부 */

int Length(listType *Lptr);
/* List의 데이터 개수 */

void Append(listType *Lptr, int Item);
/* List의 마지막에 Item을 삽입 */

void Update(listType *Lptr, int Position, int Item);
/* Position 위치의 데이터를 Item으로 수정 */

long Sum(listType *Lptr);
/* 모든 원소들의 합 출력 */

int Max(listType *Lptr);
/* 가장 큰 원소 출력 */

int Min(listType *Lptr);
/* 가장 작은 원소 출력 */

void Reverse(listType *Lptr);
/* List 뒤집기 */

int Pop(listType *Lptr);
/* List의 마지막 원소를 반환하고 해당 원소를 List에서 삭제 */

int Index(listType *Lptr, int Item);
/* List에서 Item을 찾아 그 위치를 반환, 없으면 -1 반환 */

void Print(listType *Lptr);
/* List를 보기 쉬운 형태로 출력 */

#include "list.c"
#endif

