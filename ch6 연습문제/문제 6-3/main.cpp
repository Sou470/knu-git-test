#include <iostream>
using namespace std;

// 3-(1)
/*
int big(int a, int b) {
	int max = 100;
	int res;

	if (a > b) res= a;
	else res = b;

	if (max > res)
		return res;
	else
		return max;
}


int big(int a, int b, int c) {
	int arr[3] = { 0 };
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	int max = 100;
	int res = -9999;

	for (int i = 0; i < 3; i++) {
		if (res < arr[i])
			res = arr[i];
		else
			res = res;
	}

	if (max > res)
		return res;
	else
		return max;
}
*/

//3 - (2)
int big(int a, int b, int c= -99999) {
	int arr[3] = { 0 };
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	int max = 100;
	int res = -9999;

	for (int i = 0; i < 3; i++) {
		if (res < arr[i])
			res = arr[i];
		else
			res = res;
	}

	if (max > res)
		return res;
	else
		return max;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' ' << z  << endl;
}