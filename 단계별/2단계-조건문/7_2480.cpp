#include <iostream>

using namespace std;

int main()
{
	int d1, d2, d3;

	cin >> d1 >> d2 >> d3;

	if (d1 == d2 && d2 == d3) {
		cout << 10000 + 1000 * d1 << endl;
	}
	else if (d1 == d2 || d1 == d3) {
		cout << 1000 + 100 * d1 << endl;
	}
	else if (d2 == d3) {
		cout << 1000 + 100 * d2 << endl;
	}
	else {
		cout << 100 * max(d1, max(d2, d3)) << endl;
	}

	return 0;
}