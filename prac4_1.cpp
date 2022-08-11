#include <iostream>
using namespace std;

int tribo(int N) {
	//0번째와 1번째의 값이 0이고 2번째와 3번째의 값이 1이므로 각각 다 리턴해줍니다
	if (N == 0) return 0;
	else if(N == 1) return 0; 
	else if (N == 2) return 1;
	else if (N == 3) return 1;

	return tribo(N - 1) + tribo(N - 2) + tribo(N-3);
}

int main(void) {
	int n;

	cout << "몇 번째 수를 찾으실 건가요?" << endl;
	cin >> n;
	cout << tribo(n) << endl;
}