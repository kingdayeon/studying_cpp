#include <iostream>
#include <vector>
using namespace std;

// fibo(N)의 답을 메모화 하는 배열
vector<long long> memo;

long long func(int N) {
    if (N == 0) return 0;
    else if (N == 1) return 0;
    else if (N == 2) return 1;

    //메모를 체크하기(이미 계산이 끝났으면 답을 리턴)
    if (memo[N] != -1) return memo[N]; //메모 값이 -1이 아니면

    //답을 메모에 넣으면서 재귀 호출
    return memo[N] = func(N - 1) + func(N - 2) + func(N - 3); //메모 값이 초기값인 -1이면
}

int main() {
    int N;
    cin >> N;

    memo.assign(N + 1, -1); //원소의 개수N+1을 다 -1로 초기화

    // func(N) 부르기
    cout << func(N) << endl;
}