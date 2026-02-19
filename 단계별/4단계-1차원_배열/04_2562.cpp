#include <iostream>
using namespace std;

int main() {

	int x;
	int n = 0;
	int max = 0;

	for (int i = 0; i < 9; i++) {
		cin >> x;
		if (x > max) {
			max = x;
			n = i + 1;
		}
	}

	cout << max << endl << n;
	return 0;
}