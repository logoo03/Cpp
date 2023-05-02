#include <iostream>
#include "listP.h"

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

    for (int i = 1; i <= 5; i++) {
        list.Insert(1, i);
    }

    list.Print();
    
    int n;
    list.Retrieve(2, &n);
    cout << "list의 두 번째 값은 " << n << endl;

    checkLength(lptr);

    list.Insert(7, 90);

    list.Print();

    list.Delete(3);
    list.Delete(1);

    list.Print();
    cout << endl;

    cout << "0 번째 위치 Delete()" << endl;
    list.Delete(0); // erroneous
    cout << "\n6 번째 위치 Delete()" << endl;
    list.Delete(6); // erroneous

    cout << "\n0 번째 위치 Insert()" << endl;
    list.Insert(0, 1); // erroneous

    cout << "\n7 번째 위치 Insert()" << endl;
    list.Insert(7, 1); // erroneous

    cout << "\n6 번째 위치 Retrieve()" << endl;
    list.Retrieve(6, &n);

    cout << "\n0 번째 위치 Retrieve()" << endl;
    list.Retrieve(0, &n);

    cout << endl;
    list.Print(); // 에러 발생 시 요청 무효 확인

    return 0;
}

void checkEmpty(listClass* list) {
    if (list->IsEmpty()) cout << "List is empty" << endl;
    else cout << "List is not empty" << endl;
}

void checkLength(listClass* list) {
    cout << "length of list is " << list->Length() << endl;
}