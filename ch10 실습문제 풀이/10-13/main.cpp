#include <iostream>
#include <map>
using namespace std;

int main() {
	map <string, int> tuple;
	string name; int score;

	cout << "***** 점수관리 프로그램 HIGH SCORE를 시작합니다. *****" << endl;
	while (true)
	{
		int choice;
		cout << "입력 : 1, 조회 : 2, 종료 : 3 >> ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "이름과 점수 >> ";
			cin >> name >> score;
			if (tuple.find(name) != tuple.end())
				tuple.erase(name);
			tuple.insert(make_pair(name, score));
			break;
		case 2:
			cout << "이름 >> ";
			cin >> name;
			if (tuple.find(name) == tuple.end()) {
				cout << "없음" << endl;
			}
			else 
			cout << name <<"의 점수는 "<< tuple[name] << endl;
			break;
		case 3:
			cout << "프로그램을 종료합니다..." << endl;
			return 0;
		}
	}
return 0;
}