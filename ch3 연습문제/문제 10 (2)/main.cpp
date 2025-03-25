#include <iostream>
#include "Header.h"
using namespace std;

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