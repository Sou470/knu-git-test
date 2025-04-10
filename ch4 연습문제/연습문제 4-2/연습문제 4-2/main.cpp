#include <iostream>
using namespace std;

int main() {
    int* p = new int[5]; 
    int sum = 0;

    if (!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    cout << "정수 5개를 입력하세요: ";
    for (int i = 0; i < 5; ++i) {
        cin >> p[i];
        sum += p[i];
    }

    double average = double(sum) / 5;
    cout << "평균: " << average << endl;

    delete[] p;
    return 0;
}