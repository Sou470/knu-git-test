#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[100];
	int i = 0;
	int count = 0;
	cout << "문자들을 입력하라(100개 미만).\n";
	cin.getline(str, 100, '\n');

	for (i; i < 100; ++i) {
		if (str[i] == 'x')
			count += 1;
	}
	cout << "x의 개수는 " << count << '\n';
}