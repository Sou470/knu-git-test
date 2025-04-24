#include <iostream>
using namespace std;
//참조 매개 변수로 인해 함수 중복의 모호성이 발생

int add(int a, int b) {
	return a + b;
}

int add(int a, int& b) {
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t);
}