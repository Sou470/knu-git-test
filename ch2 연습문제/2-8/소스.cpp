#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int i;
	char name[100] = { '\0' };
	char output[100] = { '\0' };

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << '\n' << ">>";
	for (i = 1; i < 6; ++i) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;

		// strcpy() 함수 사용시 오류가 생겼다. strcpy_s()로 대체한다.
		if (strlen(output) <= strlen(name))
			strcpy_s(output, name);
	}

	cout << "가장 긴 이름은 " << output << endl;

	return 0;
}