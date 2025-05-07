#include <iostream>
using namespace std;

//1-(1)
/*
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원" << pages << " 페이지" << endl;
	}
	Book& operator+= (int op) {
		price += op;
		return *this;
	}
	Book& operator-= (int op) {
		price -= op;
		return *this;
	}
	string getTitle() { return title; }
};


int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
*/

//1-(2)
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	friend Book& operator+=(Book& b, int x);
	friend Book& operator-=(Book& b, int x);
	string getTitle() { return title; }
};

Book& operator+=(Book& b, int x) {
	b.price += x;
	return b;
}

Book& operator-=(Book& b, int x) {
	b.price -= x;
	return b;
}

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;  // operator+=(a, 500) 호출
	b -= 500;  // operator-=(b, 500) 호출
	a.show();
	b.show();
}