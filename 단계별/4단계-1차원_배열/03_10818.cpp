#include <iostream>
using namespace std;

int main() {

	int N;
	int max = -1000000;
	int min = 1000000;
	int arr[1000000];

	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}

	for (int j = 0;j < N;j++) {
		if (arr[j] < min) {
			min = arr[j];
		}
	}

	for (int k = 0;k < N;k++) {
		if (arr[k] > max) {
			max = arr[k];
		}
	}

	cout << min << " " << max;

	return 0;
}

/*
배열을 안쓰고 해결할 수도 있음.

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int x;
	int min = 1000000;
	int max = -1000000;

	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x < min) min = x;
		if (x > max) max = x;
	}

	cout << min << " " << max;
	return 0;
}
*/