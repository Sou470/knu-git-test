#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};

Person::Person() {
	name = "0";
	tel = "0";
}

int main() {
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	string a, b, s;
	Person Parray[3];

	for (int i = 0; i < 3; ++i) {
		cout << "사람 " << i + 1 << ">>  ";
		getline(cin, a, ' ');
		getline(cin, b, '\n');
		Parray[i].set(a, b);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; ++i) {
		cout << Parray[i].getName() << ' ';
	}
	cout << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요 >>";
	cin >> s;
	for (int i = 0; i < 3; i++) {
		if (s == Parray[i].getName()) {
			cout << "전화 번호는" << Parray[i].getTel();
			break;
		}
	}

	return 0;
}