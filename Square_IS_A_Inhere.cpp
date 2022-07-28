#include <iostream>
using namespace std;

class Rectangle {
private:
	int width; //가로
	int height; //세로
public:
	Rectangle(int wid, int hei)
		: width(wid), height(hei)
	{ }
	void ShowAreaInfo() {
		cout << "면적: " << width * height << endl;
	}
};

//Rectangle is a Square!!

class Square : public Rectangle
{
public:
	Square(int side)
		:Rectangle(side, side)
	{ }
};

int main(void) {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();

	return 0;
}