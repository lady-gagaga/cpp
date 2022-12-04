#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, new_b = 0;
	cin >> a >> b;
	if (a != b ) {
		new_b = a + b;
		a = a + b;
		
	}
	if (a == b) {
		new_b = 0;
		a = 0;

	}
	cout << a << " " << new_b;
}

