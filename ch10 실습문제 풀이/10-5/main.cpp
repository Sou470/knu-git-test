#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* p = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++)
		p[i] = a[i];
	for (int i = 0; i < sizeb; i++) 
		p[i + sizea] = b[i];
	
	return p;
}

int main() {

	int x[] = { 1,2,3,4,5,6 };
	int y[] = { 100,200,300,400,500 };

	int* p = concat(x, 6, y, 5);
	for (int i = 0; i < 11; i++)
		cout << p[i] << "  ";
	cout << endl;
	delete[] p;


	char z[] = { 'a', 'b', 'c', 'd', 'e' };
	char w[] = { 'q', 'r', 's' };

	char* q = concat(z, 5, w, 3);

	for (int i = 0; i < 8; i++)
		cout << q[i] << "  ";
	cout << endl;
	delete[] q;

	return 0;
}