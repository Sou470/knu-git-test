#include <iostream>
using namespace std;

class Stack {
	int* data;
	int capacity;
	int top;
public:
	Stack(int size = 1000) {
		capacity = size;
		data = new int[capacity];
		top = 0;
	}
	bool operator! () {
		if (top == 0) return true;
		else return false;
	}

	~Stack() {
		delete[] data;
	}

	Stack& operator << (int x);
	Stack& operator >> (int& x);
};

Stack& Stack::operator << (int x) {
	data[top] = x;
	top++;
	return *this;
}

Stack& Stack::operator>>(int& x) {
	x = data[--top];
	return *this;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}