#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char* name;
    int id;
public:
    Person(int, const char*);
    Person(const Person&);
    ~Person();
    void changeName(const char*);
    void show();
};

Person::Person(int i, const char* n) : id(i) {
    int len = strlen(n);
    name = new char[len + 1];
    strcpy(name, n);
}

Person::Person(const Person& p): id(p.id) {
    int len = strlen(p.name);
    name = new char[len + 1];
    strcpy(name, p.name);
}

Person::~Person() {
    if (name) delete[] name;
}

void Person::changeName(const char* n) {
    if (strlen(n) > strlen(name)) return;
    strcpy(name, n);
}

void Person::show() {
    cout << id << ", " << name << endl;
}

int main() {
    cout << "2022305080 주현준\n\n";

    Person father(1, "Kitae");
    Person daughter(father);

    cout << "--- daughter init ---" << endl;
    father.show(); daughter.show();

    daughter.changeName("Grace");
    cout << "--- changeName() ---" << endl;
    father.show(); daughter.show();

    return 0;
}