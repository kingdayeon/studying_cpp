#include <iostream>

int max(int a, int b){ //formal arguments/parameter
	if (a>b)
		return a;
	else
		return b;
}

int main(){
	int x = 6;
	int y = 8;
	int z = max(x,y); //actual arguments/parameter
	std::cout << z << std::endl;
}
