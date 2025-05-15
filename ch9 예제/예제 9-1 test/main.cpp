#include <iostream>
using namespace std;

class Calculator {
public:
    virtual double add(double a, double b) {
        double result = a + b;
        cout << "Base add : " << result << endl;
        return result;
    }
};

class upgradeCalculator : public Calculator {
public:
    double add(double a, double b) override {
        double result = a + b;
        cout << "Derived add : " << result << endl;
        return result;
    }
};

int main() {
    upgradeCalculator d, * p;
    p = &d;
    p->add(2, 5);       

    Calculator* b = &d;
    b->add(2.5, 3.9);     

    return 0;
}