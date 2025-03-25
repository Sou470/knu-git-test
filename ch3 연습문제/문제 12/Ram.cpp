#include "Ram.h"
#include <cstring>
#include <iostream>

using namespace std;

Ram::Ram() {
	size = 100 * 1024;
	memset(mem, 0, sizeof(mem));
}

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}