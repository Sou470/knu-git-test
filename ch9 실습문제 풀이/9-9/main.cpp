#include<iostream>
using namespace std;

class Printer {
protected:
    string model, manuf;
    int printedCount, AvailableCount;
public:
    Printer(string mo, string maf, int ava_c) {
        model = mo; manuf = maf; AvailableCount = ava_c;
    }
    virtual void print(int pages) = 0;
    virtual void show() = 0;
};

class InkJetPrinter : public Printer {
    int availableInk;
public:
    InkJetPrinter(string mo, string maf, int ava_c, int ava_ik) : Printer(mo, maf, ava_c) { availableInk = ava_ik; }
    virtual void show() {
        cout << model << " ," << manuf << " ,남은 종이 " << AvailableCount << "장 ,남은 잉크 " << availableInk << endl;
    }
    virtual void print(int pages) {
        if (AvailableCount >= pages && availableInk >= pages) {
            AvailableCount -= pages;
            availableInk -= pages;
            cout << "프린트하였습니다.\n";
        }
        else
            cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
    }
};

class LaserPrinter : public Printer {
    int availableToner;
public:
    LaserPrinter(string mo, string maf, int ava_c, int ava_tnr) : Printer(mo, maf, ava_c) { availableToner = ava_tnr; }
    virtual void show() {
        cout << model << " ," << manuf << " ,남은 종이 " << AvailableCount<< "장 ,남은 토너 " << availableToner<< endl;
    }
    virtual void print(int pages) {
        if (AvailableCount >= pages && availableToner >= pages) {
            AvailableCount-= pages;
            availableToner--;
            cout << "프린트하였습니다.\n";
        }
        else
            cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
    }
};

int main() {
    int printer_num, pages;
    string choice;
    Printer* p[2];
    p[0] = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    p[1] = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : "; p[0]->show();
    cout << "레이저 : "; p[1]->show(); cout << endl;
    while (true) {
        cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력>>";
        cin >> printer_num >> pages;
        if (printer_num == 1) {
            p[printer_num - 1]->print(pages);
            p[0]->show();
            p[1]->show();
        }
        else if (printer_num == 2) {
            p[printer_num - 1]->print(pages);
            p[0]->show();
            p[1]->show();
        }
        else
            cout << "잘못 입력하셨습니다.\n";

        cout << "계속 프린트 하시겠습니까(y/n)>>";
        cin >> choice;
        if (choice != "y") return 0;
        cout << endl;
    }
}
