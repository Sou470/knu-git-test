#include <iostream>
using namespace std;

class HomeCalculator {
protected:
	int a, b;

	void input() {
		cout << "정수 두 개를 입력하세요 >> ";
		cin >> a >> b;
	}

public:
	virtual int add(int a, int b) = 0;
	virtual int sub(int a, int b) = 0;
	virtual int multi(int a, int b) = 0;
	virtual int div(int a, int b) = 0;

	void run() {
		int op;
		input();
		cout << "사칙연산을 선택하세요 (1:+ 2:- 3:* 4:/) >> ";
		cin >> op;

		switch (op) {
		case 1:
			cout << "결과: " << add(a, b) << endl;
			break;
		case 2:
			cout << "결과: " << sub(a, b) << endl;
			break;
		case 3:
			cout << "결과: " << multi(a, b) << endl;
			break;
		case 4:
			if (b == 0) cout << "0으로 나눌 수 없습니다." << endl;
			else cout << "결과: " << div(a, b) << endl;
			break;
		default:
			cout << "잘못된 선택입니다." << endl;
		}
	}
};

class EngineeringCalculator {
protected:
	double a, b;

	void input() {
		cout << "실수 두 개를 입력하세요 >> ";
		cin >> a >> b;
	}

public:
	virtual double add(double a, double b) = 0;
	virtual double sub(double a, double b) = 0;
	virtual double multi(double a, double b) = 0;
	virtual double div(double a, double b) = 0;

	void run() {
		int op;
		input();
		cout << "사칙연산을 선택하세요 (1:+ 2:- 3:* 4:/) >> ";
		cin >> op;

		switch (op) {
		case 1:
			cout << "결과: " << add(a, b) << endl;
			break;
		case 2:
			cout << "결과: " << sub(a, b) << endl;
			break;
		case 3:
			cout << "결과: " << multi(a, b) << endl;
			break;
		case 4:
			if (b == 0.0) cout << "0으로 나눌 수 없습니다." << endl;
			else cout << "결과: " << div(a, b) << endl;
			break;
		default:
			cout << "잘못된 선택입니다." << endl;
		}
	}
};

class Home : public HomeCalculator {
public:
	int add(int a, int b) { return a + b; }
	int sub(int a, int b) { return a - b; }
	int multi(int a, int b)  { return a * b; }
	int div(int a, int b) { return a / b; }
};

class Industry : public EngineeringCalculator {
public:
	double add(double a, double b) { return a + b; }
	double sub(double a, double b)  { return a - b; }
	double multi(double a, double b)  { return a * b; }
	double div(double a, double b) { return a / b; }
};

int main() {
	Home m;
	Industry n;
	int choice;

	while (true) {
		cout << "계산 실행 1번, 종료 2번 >> ";
		cin >> choice;

		if (choice == 1) {
			cout << "가정용 1번, 공업용 2번 >> ";
			cin >> choice;

			if (choice == 1) {
				m.run();
			}
			else if (choice == 2) {
				n.run();
			}
			else {
				cout << "잘못된 선택입니다." << endl;
			}
		}
		else if (choice == 2) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else {
			cout << "잘못된 선택입니다." << endl;
		}
	}

	return 0;
}