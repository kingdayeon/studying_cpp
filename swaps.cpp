#include <iostream>
using namespace std;

void Swap1(int * a, int * b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void Swap2(int & a, int & b){
  int temp = a;
  a = b;
  b = temp;
}

void Swap3(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 2;
  int b = 3;
  Swap1(&a,&b);
  cout << a << ' ' << b << endl;
}
