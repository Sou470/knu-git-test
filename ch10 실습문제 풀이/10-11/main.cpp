#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
	int year;
	string name, author;
	Book(int year, string name, string author) {
		this->year = year;
		this->name = name;
		this->author = author;
	}
};

int main() {
	vector<Book> v;
	int y;
	string n, a;
	string choice;

	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;

	while (true) {
		cout << "년도 >> ";
		cin >> y;
		if (y == -1) break;

		cin.ignore(); 

		cout << "책이름 >> ";
		getline(cin, n);

		cout << "저자 >> ";
		getline(cin, a);

		v.push_back(Book(y, n, a));
	}

	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;

	cout << "검색하시고자 하는 저자 이름을 입력하세요 >> ";
	cin >> choice;

	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i].author == choice) {
			cout << v[i].year << ", " << v[i].name << ", " << v[i].author << endl;
		}
	}

	cout << "검색하고자 하는 년도를 입력하세요 >> ";
	cin >> y;

	for (int i = v.size() - 1; i >= 0; i--) {
		if (v[i].year == y) {
			cout << v[i].year << ", " << v[i].name << ", " << v[i].author << endl;
		}
	}

	return 0;
}