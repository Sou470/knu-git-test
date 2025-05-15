#include <iostream>
using namespace std;

class Calculator {

public:
	virtual void add(int a, int b) {
		int result = a + b;
		cout << "Base : " << result << endl;
	}
};


class upgradeCalculator : public Calculator {

public:
	virtual void add(double a, double b) {
		double result = a + b;
		cout << "Derived : " << result<<endl;
	}
};


int main() {
	upgradeCalculator d, * p;
	p = &d;
	p->add(2.458, 4.378);

	Calculator* e = p;
	e->add(2, 3);
	return 0;
}