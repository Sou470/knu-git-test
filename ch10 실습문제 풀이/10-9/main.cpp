#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	while (true) {
		double sum = 0;
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << "  ";
			sum += v[i];
		}
		cout << endl;
		double result = sum / v.size();
		cout << "평균 = " << result << endl;
	}
	return 0;
}