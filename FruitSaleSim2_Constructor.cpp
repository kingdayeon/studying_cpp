//사과장수 시뮬레이션~ 객체 간 대화해!! 생성자 추가버전!!

#include <iostream>
using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE; //상수라서 다 대문자로
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money) { //이 부분이 바뀜
		APPLE_PRICE = price; //사과 가격 하나에 1000원
		numOfApples = num; //사과는 20개
		myMoney = money; //아직 아무것도 안 팔았으니까 0원 갖고있음
	}

	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSalesResult() {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer {
	int myMoney; //private
	int numOfApples; //private

public:
	FruitBuyer(int money) { //이 부분이 바뀜!!
		myMoney = money; //구매자는 5000원 갖고있어
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money) { //구매자 2000원 지불
		numOfApples += seller.SaleApples(money);
		myMoney -= money; //2000원 줄어
	}

	void ShowBuyResult() {
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void) {
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000); //이 두 줄이 바뀜. 원래는 FruitSeller seller선언 후 밑에 seller.Initmem이런 식
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();

	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}