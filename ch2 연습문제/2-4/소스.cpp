#include <iostream>
#include <cstring>

using namespace std;
int main() {
	double a1, a2, a3, a4, a5;
	double max = -999999;
	int i = 0;

	cout << "5개의 실수를 입력하라>>";
	cin >> a1 >> a2 >> a3 >> a4 >> a5;

	//배열에 입력받은 숫자를 입력 후 for문으로 비교
	double list[5] = { a1, a2, a3, a4, a5 };
	for (i; i < 5; ++i) {
		if (max <= list[i]) {
			max = list[i];
		}
	}
	cout << "제일 큰 수 = " << max;
	return 0;
}