#include <iostream>

using namespace std;

int main() {
    cout << "주소를 입력하세요 >> ";
    char address[100];
    cin.getline(address, 100, '\n');
    cout << "주소: " << address << endl;

    return 0;
}