#ifndef BOX_H
#define BOX_H

class Box {
	int width, height;
	char fill;
public:
	Box();
	Box(int x, int y);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};

#endif
