#include <iostream>
#include <string>
using namespace std;

//컴파일 오류가 발생하는 예제이다. protected로 지정된 변수를 메인 함수에서 직접 접근하려고 시도해서 그렇다.

class Point {
protected:
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout << color << " : ";
	showPoint();
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color)
		return true;
	else
		return false;
}

int main() {
	Point p;
	p.set(2, 3);
	p.x = 5;
	p.y = 5;
	p.showPoint();

	ColorPoint cp;
	cp.x = 10;
	cp.y = 10;
	cp.set(3, 4);
	cp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false");

}