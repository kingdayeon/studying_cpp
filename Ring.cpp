#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl; //중심 프린트
	}
};

class Circle {
private:
	int rad; //반지름
	Point center; //원의 중심
public:
	void Init(int x, int y, int r) {
		rad = r;
		center.Init(x, y);
	}

	void ShowCircleInfo() const{
		cout << "radius : " << rad << endl; //반지름 프린트
		center.ShowPointInfo(); //중심 프린트
	}
};

class Ring {
private:
	Circle inCircle; //반지름이랑 원의 중심 들어있어
	Circle outCircle; //반지름이랑 원의 중심 들어있어
public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR) {
		inCircle.Init(inX, inY, inR);
		outCircle.Init(outX, outY, outR);
	}
	void ShowRingInfo() const {
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo(); //반지름 + 중심 프린트
		cout << "Outter Circle Info..." << endl;
		outCircle.ShowCircleInfo(); //반지름 + 중심 프린트
	}
};

int main(void) {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}