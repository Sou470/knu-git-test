#include <iostream>

using namespace std;

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int x, int y);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() {
	width = height = 1;
}

Rectangle::Rectangle(int x, int y) {
	width = x, height = y;
}

Rectangle::Rectangle(int length) {
	width = height = length; 
}

bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rec1;
	Rectangle rec2(3, 5);
	Rectangle rec3(3);

	if (rec1.isSquare()) cout << "rec1은 정사각형이다." << endl;
	if (rec2.isSquare()) cout << "rec2는 정사각형이다." << endl;
	if (rec3.isSquare()) cout << "rec3는 정사각형이다." << endl;
	return 0;
}