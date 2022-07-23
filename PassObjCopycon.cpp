#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{}
	
	SoSimple(const SoSimple& copy) :num(copy.num) {
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	void ShowData() {
		cout << "num: " << num<<endl;
	}
};

void SimpleFuncObj(SoSimple ob) { //ob 객체가 초기화됨
	ob.ShowData();
}

int main(void) {
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj); //SimpleFuncObj함수만 불렀을 뿐인데 위에 SoSimple쪽 프린트문까지 인쇄돼(즉, 복사생성자 호출됨)
	cout << "함수호출 후" << endl;

	return 0;
}