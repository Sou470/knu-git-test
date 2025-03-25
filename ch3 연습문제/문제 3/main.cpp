#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name; int id; int balance;
public:
	Account();
	Account(string s, int a, int b);
	string getOwner();
	void deposit(int a);
	int withdraw(int b);
	int inquiry();
};

Account::Account() : Account("Unkouwn", 0, 10) {}

Account::Account(string s, int a, int b) {
	name = s;
	id = a;
	balance = b;
}

string Account::getOwner() {
	return name;
}

void Account::deposit(int a) {
	balance += a;
}

int Account::withdraw(int b) {
	balance -= b;
	return b;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	return 0;
}