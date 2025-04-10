#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p;
	int size;
public :
	Family(string name, int size);
	void show();
	~Family();
};


int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}