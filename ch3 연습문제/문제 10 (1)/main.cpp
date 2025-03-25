#include <iostream>
using namespace std;

class Add {
private:
	int a; int b;
public:
	Add();
	void setValue(int x, int y);
	int calculate();
};

Add::Add() {
	a = 0; b = 0;
}

void Add::setValue(int x, int y) {
	a = x; b = y;
}

int Add::calculate() {
	return a + b;
}

class Sub {
private:
	int a; int b;
public:
	Sub();
	void setValue(int x, int y);
	int calculate();
};

Sub::Sub() {
	a = 0; b = 0;
}

void Sub::setValue(int x, int y) {
	a = x; b = y;
}

int Sub::calculate() {
	return a - b;
}

class Mul {
private:
	int a; int b;
public:
	Mul();
	void setValue(int x, int y);
	int calculate();
};

Mul::Mul() {
	a = 0; b = 0;
}

void Mul::setValue(int x, int y) {
	a = x; b = y;
}

int Mul::calculate() {
	return a * b;
}

class Div {
private:
	int a; int b;
public:
	Div();
	void setValue(int x, int y);
	int calculate();
};

Div::Div() {
	a = 0; b = 0;
}

void Div::setValue(int x, int y) {
	a = x; b = y;
}

int Div::calculate() {
	return a / b;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int num1; int num2;
	char c;

	while (true) {
		int result = 0;
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> num1 >> num2 >> c;

		if (c == '+') {
			a.setValue(num1, num2);
			result = a.calculate();
			cout << result << endl;
		}
		else if (c == '-') {
			s.setValue(num1, num2);
			result = s.calculate();
			cout << result << endl;
		}
		else if (c == '*') {
			m.setValue(num1, num2);
			result = m.calculate();
			cout << result << endl;
		}
		else if (c == '/') {
			d.setValue(num1, num2);
			result = d.calculate();
			cout << result << endl;
		}
		else {
			cout << "연산자를 다시 입력해주세요." << endl;
			continue;
		}
	}

	return 0;
}
