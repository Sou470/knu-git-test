#include <iostream>
using namespace std;

class Tower {
private:
	int height;

public:
	Tower();
	Tower(int r);
	void getHeight();
};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int r) {
	height = r;
}

void Tower::getHeight() {
	cout << "높이는 " << height << "미터" << endl;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	myTower.getHeight();
	seoulTower.getHeight();
	return 0;
}

#include <iostream>
using namespace std;

class Tower {
private:
	int height;

public:
	Tower();
	Tower(int r);
	void getHeight();
};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int r) {
	height = r;
}

void Tower::getHeight() {
	cout << "높이는 " << height << "미터" << endl;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	myTower.getHeight();
	seoulTower.getHeight();
	return 0;
}

