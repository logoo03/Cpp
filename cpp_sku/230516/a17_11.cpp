#include <iostream>
#include <string>
using namespace std;

class Book {
    char *title;
    int price;
public:
    Book(const char*, int);
    Book(const Book&);
    ~Book();
    void set(const char*, int);
    void show();
};

Book::Book(const char* t, int p): price(p) {
    int len = sizeof(t) + 4;
    title = new char[len];
    for (int i = 0; i <= len; i++)
        title[i] = t[i];
}

Book::Book(const Book& b) {
    int len = sizeof(b.title) + 4;
    title = new char[len];
    for (int i = 0; i <= len; i++)
        title[i] = b.title[i];
}

Book::~Book() {
    if (title) delete[] title;
}

void Book::set(const char* t, int p) {
    if (title) delete[] title;
    int len = sizeof(t) + 4;
    title = new char[len];
    for (int i = 0; i <= len; i++) 
        title[i] = t[i];
    price = p;
}

void Book::show() {
    cout << title << ' ' << price << "won" << endl;
}

int main() {
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
    return 0;
}