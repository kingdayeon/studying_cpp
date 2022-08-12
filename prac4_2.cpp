#include <iostream>
#include <vector>
using namespace std;

// fibo(N)�� ���� �޸�ȭ �ϴ� �迭
vector<long long> memo;

long long func(int N) {
    if (N == 0) return 0;
    else if (N == 1) return 0;
    else if (N == 2) return 1;

    //�޸� üũ�ϱ�(�̹� ����� �������� ���� ����)
    if (memo[N] != -1) return memo[N]; //�޸� ���� -1�� �ƴϸ�

    //���� �޸� �����鼭 ��� ȣ��
    return memo[N] = func(N - 1) + func(N - 2) + func(N - 3); //�޸� ���� �ʱⰪ�� -1�̸�
}

int main() {
    int N;
    cin >> N;

    memo.assign(N + 1, -1); //������ ����N+1�� �� -1�� �ʱ�ȭ

    // func(N) �θ���
    cout << func(N) << endl;
}