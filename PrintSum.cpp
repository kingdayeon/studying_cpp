#include<iostream> 

int main(void) {

	int sum = 0;
	int name[100];

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "번째 정수 입력: ";
		std::cin >> name[i];
		sum = sum + name[i];
	}

	std::cout << "합계: " << sum << std::endl;

	return 0;
}