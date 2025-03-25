#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int next();
	int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	while (true) {
		int k = rand();
		if (k % 2 == 0)
			return k;
	}
}

int SelectableRandom::nextInRange(int a, int b) {
	int n = (b - a) + 2;
	int k = 0;
	while (true) {
		int k = a + (rand() % n);
		if (k % 2 != 0)
			return k;
	}
}

int main() {
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;

	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}