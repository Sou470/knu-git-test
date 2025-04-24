#include <iostream>
#include <string>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius= 0; }
	Circle(int a) { radius = a; }
	int getRadius() { return radius; }
};

void swap(Circle& a, Circle& b) {
	Circle temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	Circle a(3), b(5);
	swap(a, b);
	cout << "원 a의 반지름 크기 : " << a.getRadius() << endl;
	cout << "원 b의 반지름 크기 : " << b.getRadius() << endl;
}
