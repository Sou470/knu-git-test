#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int count = 1;

	while (true) {
		cout << i << "*" << count << "=";
		cout.width(4);
		cout << std::left << i * count;
		++i;

		if (i > 9) {	//i의 값이 9를 넘으면 줄바꿈을 실행
			i = 1;
			cout << "\n";
			count += 1;
		}


		if (count > 9)	//숫자가 9보다 커지면 구구단 루프 벗어남
			break;
	}
}