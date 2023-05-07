#pragma once
#define MAX 5000

class listClass {
public:
    listClass();
    ~listClass();
    void Insert(int, char);
    void Delete(int);
    void Retrieve(int, char&);
    bool IsEmpty();
    int Length();
private:
    int Count;
    char Data[MAX];
    void Error(int);
};