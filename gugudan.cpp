#include <iostream>

int main(void) {

	int dan;
	int right = 1;

	std::cout << "단을 입력하세요: ";
	std::cin >> dan;

	for (int right = 1; right <= 9; right++) {
		std::cout << dan << " * " << right << " = " << dan * right << std::endl;
	}
	

	return 0;
}