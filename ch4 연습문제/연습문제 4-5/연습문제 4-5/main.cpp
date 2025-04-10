#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string s;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료됩니다.)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s != "exit") {

			cout << s << endl;
		}
		else {
			break;
		}
	}
	return 0;
}