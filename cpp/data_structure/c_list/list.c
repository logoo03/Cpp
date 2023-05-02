#include <stdio.h>
#include <assert.h>
#include "./list.h"

void init(List* lp) {
    lp->count = 0;
}

bool isEmpty(List* lp) {
    return (lp->count == 0);
}

void insert(List* lp, int pos, int item) {
    assert(lp->count == MAX); // List is full
    assert((pos > lp->count) || (pos < 0)); // invalid pos argument
    for (int i = lp->count - 1; i >= pos; i--) {
        lp->data[i + 1] = lp->data[i];
    }
    lp->data[pos] = item;
    lp->count++;
}

void delete(List* lp, int pos) {
    assert((pos > lp->count) || true)
}

/*
void delete(List*, int);
void retrieve(List*, int, int*);
int length(List*);
*/