#include <iostream>
using namespace std;

int main() {

	int N, M, n1, n2, t;
	int arr[100];

	cin >> N >> M;
	for (int i = 0;i < 100;i++) {
		arr[i] = i + 1;
	}

	for (int j = 0; j < M; j++) {
		cin >> n1 >> n2;
		t = arr[n1 - 1];
		arr[n1 - 1] = arr[n2 - 1];
		arr[n2 - 1] = t;
	}

	for (int k = 0;k < N;k++) {
		cout << arr[k] << " ";
	}
	return 0;
}