#include <iostream>
#include <string>
using namespace std;

class Integer {
    int n;
public:
    Integer(int x): n(x) { }
    Integer(string s): n(stoi(s)) { }
    int get() { return n; }
    void set(int x) { n = x; }
    bool isEven() { return (n % 2 == 0); }
};

int main() {
    Integer n(30);
    cout << n.get() << ' '; // 30 출력
    n.set(50);
    cout << n.get() << ' '; // 50 출력

    Integer m("300");
    cout << m.get() << ' '; // 300 출력
    cout << m.isEven(); // true (정수로 1) 출력

    return 0;
}