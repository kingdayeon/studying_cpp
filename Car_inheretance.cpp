#include <iostream>
using namespace std;

class Car { //기본 연료 자동차
private:
	int gasolineGuage;
public:
	Car(int gas):gasolineGuage(gas) //gas를 인풋받아서 가솔린게이지에 넣어줘
	{ }
	int GetGasGuage() {
		return gasolineGuage;
	}
};

class HybridCar : public Car { //하이브리드 자동차
private:
	int electricGuage;
public:
	HybridCar(int gas, int elec)
		: Car(gas), electricGuage(elec)
	{ }
	
	int GetElecGuage() {
		return electricGuage;
	}
};

class HybridWaterCar : public HybridCar {
private:
	int  waterGuage;
public:
	HybridWaterCar(int gas, int elec, int water)
		: HybridCar(gas, elec), waterGuage(water)
	{ }

	void ShowCurrentGuage() {
		cout << "잔여 가솔린: " << GetGasGuage() << endl;
		cout << "잔여 전기량: " << GetElecGuage() << endl;
		cout << "잔여 워터량: " << waterGuage << endl;
	}
};

int main(void) {
	HybridWaterCar wCar(79, 65, 35);
	wCar.ShowCurrentGuage();

	return 0;
}