#include <iostream>
using namespace std;

class Comparable {
public:
    virtual bool operator > (Comparable& op2) = 0;
    virtual bool operator < (Comparable& op2) = 0;
    virtual bool operator == (Comparable& op2) = 0;
};

class Circle : public Comparable {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() const { return radius; }

    // Comparable 인터페이스 구현
    bool operator > (Comparable& op2) override {
        Circle& c = dynamic_cast<Circle&>(op2);  // 안전한 다운캐스팅
        return this->radius > c.radius;
    }

    bool operator < (Comparable& op2) override {
        Circle& c = dynamic_cast<Circle&>(op2);
        return this->radius < c.radius;
    }

    bool operator == (Comparable& op2) override {
        Circle& c = dynamic_cast<Circle&>(op2);
        return this->radius == c.radius;
    }
};

// 비교 함수 (T는 Comparable을 상속받은 클래스여야 함)
template <class T>
T bigger(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50 중 큰 값은 " << c << endl;

    Circle waffle(10), pizza(20), y;
    y = bigger(waffle, pizza);
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;

    return 0;
}
