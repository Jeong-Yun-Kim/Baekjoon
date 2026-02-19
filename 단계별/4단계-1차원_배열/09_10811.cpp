#include <iostream>
using namespace std;

int main() {
    int N, M, s, f, n;
    int arr[100] = { 0 };

    cin >> N >> M;

    for (int i = 0;i < N;i++) {
        arr[i] = i + 1;
    }

    for (int j = 0;j < M;j++) {
        cin >> s >> f;
        for (int k = s - 1; k < (s + f) / 2; k++) {
            n = arr[k];
            arr[k] = arr[s + f - 2 - k];
            arr[s + f - 2 - k] = n;
        }
    }

    for (int l = 0;l < N;l++) {
        cout << arr[l] << " ";
    }

    return 0;
}
