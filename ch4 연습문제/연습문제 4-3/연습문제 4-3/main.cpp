#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "문자열 입력 >>";
	getline(cin, s, '\n');
	int len = s.length();
	int counting_a = 0;
	for (int i = 0; i < len; i++) {
		if (s.at(i) == 'a') {
			counting_a += 1;
		}
	}
	cout << "문자 a는 " << counting_a << "개 있습니다.";
	return 0;
}