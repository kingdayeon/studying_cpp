#include <iostream>
using namespace std;

class CountryArea {
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922; 
	//const static으로 선언되는 멤버변수(상수)는 다음과 같이 선언과 동시에 초기화가 가능함
};

int main(void) {
	cout << "러시아 면적: " << CountryArea::RUSSIA << "km제곱" << endl;
	cout << "캐나다 면적: " << CountryArea::CANADA << "km제곱" << endl;
	cout << "중국 면적: " << CountryArea::CHINA << "km제곱" << endl;
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "km제곱" << endl;
}