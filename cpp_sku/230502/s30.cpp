#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Input String >> ";
    string s; getline(cin, s);
    int len = s.length();
    for (int i = 0; i <= len; i += 2)
        cout << s.substr(i % s.length())
        << s.substr(0, i % s.length()) << endl;
    if (len % 2 == 1)
        cout << s;
    return 0;
}