#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Printer {
private:
	char str[30]; //private�� ���ڿ� ��´ٱ� �˷��ֱ�
public:
	void SetString(const char* s);
	void ShowString();
};

void Printer::SetString(const char* s) { //�׳� char*�ϸ� ���ڿ� �� �޾Ƽ� ���� �𸣰����� const�ٿ������
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