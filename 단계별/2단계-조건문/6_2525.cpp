#include <iostream>

using namespace std;

int main()
{
	int H, M, m;

	cin >> H >> M;
	cin >> m;

	if (M + m >= 60) {
		if (H + ((M + m) / 60) > 23) {
			cout << H + ((M + m) / 60) - 24 << " " << (M + m) % 60 << endl;
		}
		else {
			cout << H + ((M + m) / 60) << " " << (M + m) % 60 << endl;
		}
	}
	else {
		cout << H << " " << M + m << endl;
	}

	return 0;
}