#include <iostream>

using namespace std;

//���� 3-1
/*
class Circle {
public:
	int radius;
	double getArea();

};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut�� ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza�� ������ " << area << endl;
}
*/

// ���� 3-1�� �߰� ����
class Circle {
public:
	int innerRadius;
	int outerRadius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * (outerRadius * outerRadius - innerRadius * innerRadius);
}

int main() {
	Circle donut_two;
	donut_two.innerRadius = 3;
	donut_two.outerRadius = 10;
	double area = donut_two.getArea();
	cout << "donut �ܺ� ���� ���̴� " << area << endl;
	return 0;
}