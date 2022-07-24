#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{ }

	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}

	void ShowData() const{
		cout << "num: " << num << endl;
	}
};

int main(void) {
	const SoSimple obj(7); //const 객체 생성
	//obj.AddNum(20); 멤버함수 AddNum은 const함수가 아니기 때문에 호출이 불가능
	obj.ShowData();

	return 0;
}