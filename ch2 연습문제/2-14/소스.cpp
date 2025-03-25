#include <iostream>
using namespace std;

int main() {
	char coffee[100];
	int num;
	int sum = 0;

	cout << "에스프레소 2000원, 아메리카노 2300, 카푸치노 2500원입니다.\n";

	while (true) {
		int price = 0;
		cout << "주문>>  ";
		cin >> coffee >> num;

		//커피 주문 개수가 0 이하인 경우 다시 주문하도록 처리한다.
		if (num <= 0) {
			cout << "주문을 다시 입력하세요. \n";
			continue;
		}

		// 커피 메뉴에 따라 가격을 계산한다.
		if (strcmp(coffee, "에스프레소") == 0) {
			price = 2000 * num;
			sum += price;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			price = 2300 * num;
			sum += price;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			price = 2500 * num;
			sum += price;
		}
		// 메뉴판에 없는 메뉴를 주문하거나 오타가 난 경우 다시 주문하도록 한다.
		else {
			cout << "주문을 다시 입력하세요. \n";
			continue;
		}

		//판매 금액에 따라 분기를 나눈다.
		if (sum < 20000) {
			cout << price << "원입니다. 맛있게 드세요\n";
			continue;
		}
		else {
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요 ~~~";
			break;
		}
	}
	return 0;
}