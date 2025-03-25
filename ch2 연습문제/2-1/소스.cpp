#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int count = 1;
	while (true) {
		cout << i << "	";
		if (count == 10) {			//count 변수가 10이 되면 줄바꿈을 실행
			cout << '\n';
			count = 0;
		}

		i += 1;
		count += 1;

		if (i > 100)		//변수 i의 값이 100을 넘기면 while루프에서 벗어남
			break;
	}
	return 0;
}