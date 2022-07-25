#include <iostream>
using namespace std;

class SoSimple {
public:
	static int simObjCnt;
public:
	SoSimple() {
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main(void) {
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl; //지금 객체 생성이 안됐는데 클래스의 이름을 이용해서 simObjCnt에
	//접근하고 있다. static 멤버 변수가 객체 내에 존재하지 않음을 증명!!
	SoSimple sim1;
	SoSimple sim2;
	//2번 객체 만들었으니까 +2

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl; //객체 sim1, sim2를 이용해서도 static 멤버변수에 접근이 가능
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl; //그런데 멤버 변수에 접근하는 것 같은 오해를 줄 수 있으므로
	//이러한 형태의 접근은 추천하지 않는다
}