#include <iostream>
#include <string>
using namespace std;

//디폴트 매개 변수로 인해 함수 중복의 모호성이 발생

void msg(int id) {
	cout << id << endl;
}

void msg(int id, string s = "") {
	cout << id << " : " << s << endl;
}

int main() {
	msg(5, "Good Morning!");
	msg(6);
}