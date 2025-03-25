#include <iostream>
using namespace std;
int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

	while (true) {
		int choice = 0;
		int count = 0;
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
		cin >> choice;

		if (choice == 4) {
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else if (choice >= 1 and choice <= 3) {
			// choice가 1, 2, 3일 경우 그냥 지나간다.
		}
		else {
			cout << "다시 주문하세요!!\n";
			continue;
		}

		switch (choice) {
		case 1:
			cout << "몇인분?";
			cin >> count;
			cout << "짬뽕 " << count << "인분 나왔습니다.\n";
			break;

		case 2:
			cout << "몇인분?";
			cin >> count;
			cout << "짜장 " << count << "인분 나왔습니다.\n";
			break;

		case 3:
			cout << "몇인분?";
			cin >> count;
			cout << "군만두 " << count << "인분 나왔습니다.\n";
			break;
		}
	}
	return 0;
}