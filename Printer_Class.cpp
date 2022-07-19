#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Printer {
private:
	char str[30]; //private로 문자열 담는다구 알려주기
public:
	void SetString(const char* s);
	void ShowString();
};

void Printer::SetString(const char* s) { //그냥 char*하면 문자열 못 받아서 왠진 모르겠지만 const붙여줘야해
	strcpy(str, s);
}

void Printer::ShowString() {
	cout << str << endl;
}

int main(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}