#include <iostream>
using namespace std;

class Myvector {
	int* p;
	int size;
public:
	Myvector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~Myvector() {
		delete[] p;
	}
};

int main() {
	Myvector* v1, * v2;
	v1 = new Myvector();
	v2 = new Myvector(1024);

	delete v1;
	delete v2;

}