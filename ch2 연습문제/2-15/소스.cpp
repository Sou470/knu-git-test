#include <iostream>
#include <cstring>
using namespace std;

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int multi(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}
int remain(int a, int b) {
	return a % b;
}

int main() {
	while (true) {
		int i = 0;
		int j = 0;
		char input[100] = { '\0' };
		char temp1[100] = { '\0' };
		char temp2[100] = { '\0' };
		int result = 0;
		char oper;

		cout << "?  ";
		cin.getline(input, 100, '\n');

		//연산자 왼쪽에 적힌 숫자를 저장
		for (i; input[i] != ' '; ++i) {
			temp1[i] = input[i];
		}
		int atoinum1 = atoi(temp1);

		//연산자를 입력받아 저장
		oper = input[i + 1];

		//연산자 왼쪽에 적힌 숫자를 저장
		for (i = i + 3; input[i] != '\0'; ++i) {
			temp2[j] = input[i];
			++j;
		}
		int atoinum2 = atoi(temp2);

		//숫자 입력이 제대로 되지 않은 경우 프로그램을 종료한다.
		if (atoinum1 == '\0' || atoinum2 == '\0') {
			cout << "숫자 입력이 잘못 되었습니다.\n프로그램을 종료합니다";
			return 0;
		}

		//연산자에 맞게 계산하는 조건문
		if (oper == '+') {
			result = add(atoinum1, atoinum2);
		}
		else if (oper == '-') {
			result = sub(atoinum1, atoinum2);
		}
		else if (oper == '*') {
			result = multi(atoinum1, atoinum2);
		}
		else if (oper == '/') {
			result = divide(atoinum1, atoinum2);
		}
		else if (oper == '%')
			result = remain(atoinum1, atoinum2);
		else {
			cout << "연산자를 잘못 입력했습니다.\n프로그램을 종료합니다.";
			return 0;
		}

		//출력
		cout << atoinum1 << " " << oper << " " << atoinum2 << " = " << result << "\n";
	}
	return 0;
}