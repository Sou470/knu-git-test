#include <iostream>
/*
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	
	cout << "�簢���� ������ " << rect.getArea() << endl;

	return 0;
}
*/

//���� 3-2 �߰�����
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int thickness;
	int getVolume();
};

int Rectangle::getVolume() {
	return width * height * thickness;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	rect.thickness = 7;

	cout << "�簢���� ü���� " << rect.getVolume() << endl;
	return 0;
}
