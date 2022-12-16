#include <iostream>
using namespace std;
int main() {
	srand((int)time(0));
	int N = rand() % 1000 + 2;
	//N = 81;
	cout << "N = " << N << endl;

	int K = 0, P = 1;
	while (P < N) {
		P *= 3;
		K += 1;
	}
	K -= 1;

	cout << "K = " << K << endl;
	cout << "3^K = " << pow(3, K) << endl;
	return 0;
}
