#ifndef HEADER_H
#define HEADER_H

class Add {
private:
	int a; int b;
public:
	Add();
	void setValue(int x, int y);
	int calculate();
};

class Sub {
private:
	int a; int b;
public:
	Sub();
	void setValue(int x, int y);
	int calculate();
};

class Mul {
private:
	int a; int b;
public:
	Mul();
	void setValue(int x, int y);
	int calculate();
};

class Div {
private:
	int a; int b;
public:
	Div();
	void setValue(int x, int y);
	int calculate();
};

#endif