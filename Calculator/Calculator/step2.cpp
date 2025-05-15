#include <iostream>
#include <cmath>
using namespace std;


class Calculator {
protected:
	int a;
	int b;

public:
	Calculator();

	int add(int a, int b);
	int minus(int a, int b);
	int multiply(int a, int b);
	float divide(int a, int b);

};

Calculator::Calculator() { a = 1; b = 1; }

int Calculator::add(int a, int b) {
	int result;
	result = a + b;
	cout << "add; " << result << endl;

	return result;
}

int Calculator::minus(int a, int b) {
	int result;

	result = a - b;
	cout << "minus; " << result << endl;

	return result;
}

int Calculator::multiply(int a, int b) {
	int result;

	result = a * b;
	cout << "multiply; " << result << endl;

	return result;

}


float Calculator::divide(int a, int b) {
	float result;

	result = float(a) / float(b);
	cout << "divide; " << result << endl;

	return result;
}

class AdvancedCalculator : public Calculator {
	double num;
public:
	AdvancedCalculator() { num = 1; }
	double power(double a, double b) {
		double  result = pow(a, b);
		cout << "exponential : " << result << endl;
		return result;
	}

	double Logarithm(double b, double num) {
		double result = log10(num) / log10(b);
		cout << "Logarithm : " << result << endl;
		return result;
	}
};


int main() {
	AdvancedCalculator cal;
	
	cal.power(3, 7);
	cal.Logarithm(2, 10);
	cal.add(3, 4); 
	cal.minus(3, 4); 
	cal.multiply(3, 4); 
	cal.divide(3, 4); 
}
