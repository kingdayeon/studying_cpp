#include <iostream>
using namespace std;

int main() {
  char c = 'c';
  int i = c; //i는 아스키코드 숫자를 저장하는 int

  cout << "ASCII code for " << c << " is " << i << endl;

  cout << "Add 1 to the character code : " << endl;
  c = c + 1;
  i = c;
  cout << "ASCII code for " << c << " is " << i << endl;
}
