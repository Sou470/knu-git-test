#include <iostream>
using namespace std;

// 컴파일 오류가 발생하는 예제
float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0);
	cout << square(3);		//중복된 함수에 대한 모호한 호출, 컴파일 오류, 명시적 형변환으로 float, double로 바꾸면 ok!
}