#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char input1[100], input2[100];

	cout << "새 암호를 입력하세요>>";
	cin >> input1;
	cout << "새 암호를 다시 입력하세요>>";
	cin >> input2;

	if (strcmp(input2, input1) == 0)
		cout << "같습니다";
	else
		cout << "같지 않습니다";

	return 0;
}