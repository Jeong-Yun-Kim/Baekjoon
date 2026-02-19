#include <iostream>
using namespace std;

int main() {

	int N, X;
	int count = 0;
	int arr[10000];

	cin >> N;
	cin >> X;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}

	for (int j = 0;j < N;j++) {
		if (arr[j] < X) {
			cout << arr[j] << " ";
		}
	}

	return 0;
}