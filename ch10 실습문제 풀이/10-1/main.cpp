#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
T biggest(T x[], int n) {
	T result = x[0];
	for (int i = 0; i < n; i++) {
		if (result < x[i]) 
			result = x[i];
	}
	return result;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 1.1, 5.4, -100.5, 3.141592, 99.99, 42.195 };
	cout << biggest(y, 6) << endl;

	char z[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i' };
	cout << biggest(z, 9) << endl;
	return 0;
}