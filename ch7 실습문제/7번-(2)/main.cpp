#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		this->a = a; this->b = b; this->c = c; this->d = d;
	}
	void show() {
		cout << "Matrix = {" << ' ' << a << ' ' << b << ' ' << c << ' ' << d << ' ' << "}" << endl;
	}
	friend Matrix operator >> (Matrix m, int x[4]);
	friend Matrix& operator << (Matrix& m, int* y);
};

Matrix operator >> (Matrix m, int x[4]) {
	x[0] = m.a;
	x[1] = m.b;
	x[2] = m.c;
	x[3] = m.d;
	return m;
}

Matrix& operator << (Matrix& m, int* y) {
	m.a = y[0];
	m.b = y[1];
	m.c = y[2];
	m.d = y[3];
	return m;
}


int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)
		cout << x[i] << ' ';
	cout << endl;
	b.show();
}