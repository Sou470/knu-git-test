#include <iostream>
using namespace std;

class Calculator {
protected:
	double x, y;
public:
	Calculator(double x = 0, double y = 0) {
		this->x = x; this->y = y;
	}
	void Input() {
		cout << "두 숫자를 입력하세요." << endl;
		cout << "첫 번째 숫자 : ";
		cin >> x;
		cout << "두 번째 숫자 : ";
		cin >> y;
	}

};

class Add : public Calculator {
public:
	Add(double x = 0, double y = 0) : Calculator(x, y) {}
	double adder() {
		return x + y; 
	}
};

class Multiply : public Calculator {
public:
	Multiply(double x = 0, double y = 0) : Calculator(x, y) {}
	double multi() {
		return x * y;
	}
};

int main() {
	Add n;
	Multiply m;

	n.Input();
	cout << n.adder() << endl;
	m.Input();
	cout << m.multi() << endl;
}