#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{};

	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}

	void SimpleFunc() {
		cout << "SimpleFunc: " << num << endl;
	}

	void SimpleFunc() const { //여기도 const만 인쇄 가능. 위 함수랑 함수 이름 같음! 오버로딩 이용
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj) { //객체를 const로 받아
	obj.SimpleFunc();
}

int main(void) {
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);

	return 0;
}