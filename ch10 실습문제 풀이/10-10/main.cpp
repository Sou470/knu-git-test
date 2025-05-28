#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Nation {
public:
	string nation, capital;
	Nation(string nation, string capital) {
		this->nation = nation;
		this->capital = capital;
	}
};

int main() {
	srand(time(0));
	vector <Nation> v;
	v.push_back(Nation("일본", "도쿄"));
	v.push_back(Nation("미국", "와싱턴"));
	v.push_back(Nation("독일", "베를린"));
	v.push_back(Nation("튀르키예", "이스탄불"));
	v.push_back(Nation("영국", "런던"));
	v.push_back(Nation("중국", "베이징"));
	v.push_back(Nation("대만", "타이페이"));
	v.push_back(Nation("러시아", "모스크바"));
	v.push_back(Nation("프랑스", "파리"));
	while (true) {
		int choice;
		string name, capital;
		cout << "정보 입력 : 1, 퀴즈 : 2, 종료 : 3 >>";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;;
			cout << "나라와 수도를 입력하세요(no no 이면 입력 끝)" << endl;

			while (true)
			{
				cout << v.size() + 1 << ">>";
				cin >> name >> capital;

				if ([&]() {
					for (auto& n : v) {
						if (n.nation == name) return true;
					}
					return false;
					}()) {
					cout << "already exist!" << endl;
				}

				if (name == "no" && capital == "no")
					break;

				else {
					v.push_back(Nation(name, capital));
				}
			}
			break;
		case 2:
			while (true) {
				int index = rand() % v.size(); // 무작위 인덱스 선택
				cout << v[index].nation << "의 수도는? >> ";
				string answer;
				cin >> answer;
				if (answer == "exit") break;

				if (answer == v[index].capital) {
					cout << "Correct !!" << endl;
				}
				else
					cout << "NO !!" << endl;
			}
			break;

		case 3:
			return 0;
			}
		}
	}
