#include <iostream>
#include <string>
using namespace std;

int eval(string&);

int main() {
    string s;
    cout << "Input expression >> ";
    getline(cin, s);
    cout << "Result: " << eval(s);
    return 0;
}

int eval(string& s) {
    int result = 0, op = 1;
    string buf;
    for (char c : s) {
        if (isdigit(c)) {
            buf += c;
        } else if (c == ' ') {
        } else {
            result += op * stoi(buf);
            buf.clear();
            if (c == '+') op = 1;
            else if (c == '-') op = -1;
            else {
                cout << "Illegal Character" << endl;
                return 0;
            }
        }
    }
    result += op * stoi(buf);
    return result;
}