#include <iostream>
#include <string>

using namespace std;

class Account {
    string name;
    int id, balance;
public:
    Account(string, int, int);
    string getOwner();
    void deposit(int);
    int withdraw(int);
    int inquiry();
};

Account::Account(string _name, int _id, int _bal):
    name(_name), id(_id), balance(_bal) {}

string Account::getOwner() { return name; }

void Account::deposit(int n) { balance += n; }

int Account::withdraw(int n) {
    balance -= n;
    return n;
}

int Account::inquiry() { return balance; }

int main() {
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "'s balance = " << a.inquiry() << "\n";
    int money = a.withdraw(20000);
    cout << a.getOwner() << "'s balance = " << a.inquiry() << "\n";

    return 0;
}