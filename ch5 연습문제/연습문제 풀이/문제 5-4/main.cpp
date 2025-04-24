#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a > b) big = a;
	else big = b;

	if (a == b) return true;
	else return false;
}


int main() {
	int m, n, big;
	bool b;
	cout << "두 정수를 입력하시오 >>";
	cin >> m >> n;

	b = bigger(m, n, big);

	if (!b)
		cout << big << endl;
	else
		cout << m << endl;

	return 0;
}