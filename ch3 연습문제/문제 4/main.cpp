#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee, water, suger;
public:
	CoffeeMachine();
	CoffeeMachine(int a, int b, int c);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void show();
};

CoffeeMachine::CoffeeMachine() {
	coffee = water = suger = 1;
}

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	coffee = a; water = b; suger = c;
}

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1;
	water -= 2;
	suger -= 1;
}

void CoffeeMachine::fill() {
	coffee = water = suger = 10;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, " << "커피 :";
	cout.width(4);
	cout << std::left << coffee << "물 :";
	cout.width(4);
	cout << std::left << water << "설탕 :";
	cout.width(4);
	cout << std::left << suger << endl;

}


int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}