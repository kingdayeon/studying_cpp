#include <iostream>

namespace Hybrid {
	void HybFunc(void) {;
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void) {
	using Hybrid::HybFunc; //이름공간 Hybrid에 명시된 HybFunc를 호출할 때에는 ;,즉 공백처럼 호출하겟당
	HybFunc();

	return 0;
}