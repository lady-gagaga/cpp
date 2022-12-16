#include <iostream>

using namespace std;
int main() {
	srand((int)time(0));
	int N;
	N = rand() % 20;

	double s = 0, x;
	int c = 1;
	for (int i = 1; i <= N; i++) {
		x = (1 + i * 0.1) * c;
		s += x;
		c *= (-1);
		cout << x << endl;
	}
	cout << "Number N: " << N << endl;
	cout << "Sum = " << s << endl;
	return 0;
}
