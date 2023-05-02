#ifndef _LIST_P_H
#define _LIST_P_H

struct node {
    int Data;
    node* Next;
};

typedef node* Nptr;

class listClass {
public:
    listClass();
    ~listClass();
    void Insert(int, int);
    void Delete(int);
    void Retrieve(int, int*);
    bool IsEmpty();
    int Length();
    void Print();

private:
    int Count;
    Nptr Head;
    void Error(int);
};

#include "listP.cpp"
#endif