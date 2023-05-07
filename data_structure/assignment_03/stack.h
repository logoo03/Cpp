#pragma once
#include "list.h"

class stackClass {
public:
    stackClass();
    ~stackClass();
    void Push(char);
    void Pop();
    char GetTop();
    bool IsEmpty();
    bool IsFull();
private:
    listClass L;
};