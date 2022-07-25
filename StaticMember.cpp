#include <iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt;
public:
	SoSimple() { //按眉 积己登搁 角青蹬,, 积己磊??
		simObjCnt++;
		cout << simObjCnt << "锅掳 SoSimple 按眉" << endl;
	}
};
int SoSimple::simObjCnt = 0;

class SoComplex {
private:
	static int cmxObjCnt;
public:
	SoComplex() {
		cmxObjCnt++;
		cout << cmxObjCnt << "锅掳 SoComplex 按眉" << endl;
	}

	SoComplex(SoComplex& copy) {
		cmxObjCnt++;
		cout << cmxObjCnt << "锅掳 SoComplex 按眉" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();

	return 0;
}
