// #6
#include <iostream>
#include <string>
using namespace std;

void printReverse(string&);

int main() {
    string s;
    cout << "Input (exit to terminate)" << endl;
    while (cout << ">> ", getline(cin, s), s != "exit") {
        printReverse(s);
    }
    return 0;
}

void printReverse(string& s) {
    for (int i = 0; i < s.length(); i++) {
        cout << s[s.length() - i - 1];
    }
    cout << endl;
}