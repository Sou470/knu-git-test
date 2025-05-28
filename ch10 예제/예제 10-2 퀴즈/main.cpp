#include <iostream>
using namespace std;

template <class A>
A add(A a, A b) {
	return a + b;
}

int main() {
	int a=10, b = 20;
	double c=3.141592, d=2.7156;

	cout << "정수 10과 20의 합 : " << add(a, b) << endl;
	cout << "실수 3.141592와 2.7156의 합 : " << add(c, d) << endl;
	return 0;
}