#include <iostream>
using namespace std;

template <class T>
void equalArrays(T x[], T y[], int n) {
	int i = 0;
	while (i < n) {
		if (x[i] != y[i]) {
			cout << "다르다";
			break;
		}
		if (i == n - 1 && x[i] == y[i]) cout << "같다";
		i++;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };

	equalArrays(x, y, 5);
	return 0;
}