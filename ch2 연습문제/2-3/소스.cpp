#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;

	if (a >= b)
		cout << "큰수 = " << a;


	else
		cout << "큰수 = " << b;

	return 0;
}