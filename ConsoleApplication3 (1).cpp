#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	cin >> a >> b;
	if ((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0)) {
	
		printf("Ровно одно из чисел A и B нечетное");

	}

}
	
	