#include <iostream>

//���� ����
namespace BestComImp1 {
	void SimpleFunc(void);
}

namespace BestComImp1 {
	void PrettyFunc(void);
}

namespace ProgComImp1 {
	void SimpleFunc(void);
}

int main(void) {

	BestComImp1::SimpleFunc();

	return 0;
}

void BestComImp1::SimpleFunc(void) {
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc(); //���� �̸�����
	ProgComImp1::SimpleFunc(); //�ٸ� �̸�����
}

void BestComImp1::PrettyFunc(void) {
	std::cout << "So pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc(void) {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}