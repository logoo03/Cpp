#include <iostream>
#include "listA.h"

using namespace std;

void checkEmpty(listClass*);
void checkLength(listClass*);

int main() {
    listClass list;
    listClass* lptr = &list;
    checkEmpty(lptr);

    checkLength(lptr);

    list.Insert(1, 5);

    list.Print();

    checkEmpty(lptr);

    for (int i = 0; i < 99; i++) {
        list.Insert(1, i);
    }

    checkLength(lptr);

    list.Insert(50, 90);

    list.Print();

    return 0;
}

void checkEmpty(listClass* list) {
    if (list->IsEmpty()) cout << "List is empty" << endl;
    else cout << "List is not empty" << endl;
}

void checkLength(listClass* list) {
    cout << "length of list is " << list->Length() << endl;
}