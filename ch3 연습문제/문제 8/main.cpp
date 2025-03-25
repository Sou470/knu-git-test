#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int n;
public:
	Integer();
	Integer(int a);
	Integer(string a);
	void set(int a);
	int get();
	int isEven();
};

inline Integer::Integer() {
	n = 1;
}

inline Integer::Integer(int a) {
	n = a;
}

inline  Integer::Integer(string a) {
	n = stoi(a);
}

inline void Integer::set(int a) {
	n = a;
}

inline int Integer::get() {
	return n;
}

inline int Integer::isEven() {
	if (n % 2 == 0)
		return true;
	else
		return false;
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven() << ' ';
}