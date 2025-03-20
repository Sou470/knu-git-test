#include <iostream>

using namespace std;

//예제 3-1
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
	cout << "donut의 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl;
}
*/

// 예제 3-1의 추가 문제
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
	cout << "donut 외부 원의 넓이는 " << area << endl;
	return 0;
}