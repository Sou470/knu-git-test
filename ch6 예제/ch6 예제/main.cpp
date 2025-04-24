#include <iostream>
using namespace std;

// 추가 문제
// 배열과 포인터를 이용하여 최대, 최소, 중간값을 구하라

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int res = a[0];
	for (int i = 0; i < size; i++) {
		if (res < a[i]) res = a[i];
	}
	return res;
}

int main() {
	int array[5] = { 1, 9, -2, 8, 6 };
	int* p = array;
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}

