#include <iostream>
using namespace std;

int main() {
  double fahr, celcius;
   cout << "Temperature is : " << endl;
   cin >> fahr;

   celcius = (fahr - 32.0) * 5.0 / 9.0;
   cout << fahr << " Fahrengeit is " << celcius << " Celcius" << endl;
}
