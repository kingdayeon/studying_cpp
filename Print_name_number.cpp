#include <iostream>

int main(void) {

	char name[50];
	char num[50];

	std::cout << "이름을 입력하세요: ";
	std::cin >> name;

	std::cout << "전화번호를 입력하세요: ";
	std::cin >> num;

	std::cout << "이름은 " << name << std::endl;
	std::cout << "전화번호는 " << num << std::endl;

	return 0;
}