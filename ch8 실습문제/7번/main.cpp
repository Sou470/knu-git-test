#include <iostream>
using namespace std;

class BaseMemory {
protected:
	char* mem;
public:
	BaseMemory(int size) { mem = new char[size]; }
	~BaseMemory() { delete[] mem; }
	char read(int i) {
		return mem[i]; 
	}
};

class ROM : public BaseMemory {
	int length;
public:
	ROM(int size, char* x, int length) : BaseMemory(size){
		this->length = length;
		for (int i = 0; i < length; i++) {
			mem[i] = x[i];
		}
	}
};

class RAM : public BaseMemory {
public:
	RAM(int size) : BaseMemory(size) {}
	void write(int i, char value) {
		mem[i] = value;
	}
};

int main() {
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosRom(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) {
		mainMemory.write(i, biosRom.read(i));
	}
	
	for (int i = 0; i < 5; i++)
		cout << mainMemory.read(i);
}