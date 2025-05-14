#include <iostream>
using namespace std;

//오류가 발생하는 코드이다.

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

class GrandDerived : private Derived {
	int c;
protected:
	void setAB(int x) {
		setA(x);		//컴파일 오류
		showA();	//컴파일 오류
		setB(x);
	}
};