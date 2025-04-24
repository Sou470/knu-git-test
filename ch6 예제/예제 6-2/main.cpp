#include<iostream>
using namespace std;

/*테스트
sum(1, 100, 4)
1에서 100까지 4씩 증가하여 합을 구하는 핵심 코드 작성하라.
*/

int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++) {
		s += i;
	}
	return s;
}

int sum(int a) {
	int s = 0;
	for (int i = 0; i <= a; i++) {
		s += i;
	}
	return s;
}

int sum(int start, int end, int step) {
	int s = 0;
	for (int i = start; i <= end; i += step) {
		s += i;
	}
	return s;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(1, 100, 4) << endl;
}