#include <iostream>
using namespace std;

void PlusOne(int &ref){ //반환 void형이고 return 안해줘도 됨
	ref = ref + 1;
}

void ChangeBuho(int &ref) {
	ref = ref * (-1);
}

int main(void) {
	int num;

	cout << "인자 입력: ";
	cin >> num;

	PlusOne(num); //호출했으니까 알아서 바뀜
	cout << num << endl;

	ChangeBuho(num);
	cout << num << endl;

	return 0;
}