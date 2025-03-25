#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int year; int month; int day;
	string s;
public:
	Date();
	Date(int a, int b, int c);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date() {
	year = 2025; month = 1; day = 1;
}


Date::Date(int a, int b, int c) {
	year = a; month = b; day = c;
}

Date::Date(string s) {
	string a, b, c;
	a = s.substr(0, 4); b = s.substr(5, 1); c = s.substr(7);
	year = stoi(a); month = stoi(b); day = stoi(c);
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	return 0;
}