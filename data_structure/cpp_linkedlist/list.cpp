#include <iostream>
#include "list.h"

using namespace std;

listClass::listClass(): Count(0), Head(NULL) { }

bool listClass::IsEmpty() { return Count == 0; }

void listClass::Delete(int Position) {
    if (IsEmpty()) {
        cout << "Deletion on Empty List\n";
    } else if ((Position > Count) || (Position < 1)) {
        cout << "Position out of Range\n";
    } else {
        Nptr Temp = Head; // 삭제 직전 노드
        Nptr p = Head->Next; // 삭제할 노드
        for (int i = 0; i < (Position - 2); i++) {
            Temp = Temp->Next;
            p = p->Next;
        }
        Temp->Next = p->Next;
        Count -= 1;
        delete(p);
    }
}
