#include <iostream>
using namespace std;

int main() {

	int N, M, s, f, n;
	int arr[100] = { 0 };

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> s >> f >> n;
		for (int j = s - 1;j <= f - 1;j++) {
			arr[j] = n;
		}
	}

	for (int k = 0;k < N;k++) {
		cout << arr[k] << " ";
	}
	return 0;
}