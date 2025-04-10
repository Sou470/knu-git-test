#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int n;
	int k;
	cout << "원의 개수 >> ";
	cin >> n;
	Circle* p = new Circle[n];

	for (int i = 0; i < n; ++i) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> k;
		p[i].setRadius(k);
	}
	int count = 0;
	for (int i = 0; i < 3; ++i) {
		if (p->getArea() > 100) {
			count++;
		}
		++p;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다.";
	return 0;
}