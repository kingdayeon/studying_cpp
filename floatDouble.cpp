#include <iostream>
using namespace std;

int main() {
  cout.setf(ios_base::fixed, ios_base::floatfield);
   float rose = 10.0 / 3.0;
   double mint = 10.0 / 3.0;
   const float million = 1.0e6;

   cout << "rose = " << rose << ", a million roses = " << million * rose << endl;
   cout << "mint = " << mint<< ", a million mints = " << million * mint << endl;

   cout << "ten million roses = " << 10 * million * rose << endl;
   cout << "ten million mi문nts = " << 10 * million * mint << endl;
}
