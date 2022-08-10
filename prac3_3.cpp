//연습문제 3.3

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int min = 1000000; //제일 작은 값
    int second_min = 1000000; //두번째로 작은 값
    for (int i = 0; i < N; ++i) {
        if (a[i] < min) { //제일 작은값보다 더 작은 값이 등장하면
            second_min = min; //제일 작은값은 두번째로 작은 값이 된다
            min = a[i]; //등장한 제일 작은값을 min변수에 넣어준다
        }
        else if (a[i] < second_min) //두번째로 작은 값보다 더 작은 값이 등장하면
        {
            second_min = a[i];
        } //등장한 더 작은 값을 두번째로 작은 값에 넣어준다
    }

    cout << second_min << endl;
}
