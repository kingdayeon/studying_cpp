#include <iostream>
using namespace std;

int tribo(int N) {
	//0��°�� 1��°�� ���� 0�̰� 2��°�� 3��°�� ���� 1�̹Ƿ� ���� �� �������ݴϴ�
	if (N == 0) return 0;
	else if(N == 1) return 0; 
	else if (N == 2) return 1;
	else if (N == 3) return 1;

	return tribo(N - 1) + tribo(N - 2) + tribo(N-3);
}

int main(void) {
	int n;

	cout << "�� ��° ���� ã���� �ǰ���?" << endl;
	cin >> n;
	cout << tribo(n) << endl;
}