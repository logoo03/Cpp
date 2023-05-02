#ifndef _LIST_A_H
#define _LIST_A_H

#define MAX 100

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
    int Data[MAX];
    void Error(int);
};

#endif