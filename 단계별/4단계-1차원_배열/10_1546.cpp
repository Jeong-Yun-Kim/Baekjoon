#include <iostream>
using namespace std;

int main() {
    int N, x;
    double av;
    double arr[1000];
    int max = 0;
    double sum = 0;

    cin >> N;

    for (int i = 0;i < N;i++) {
        cin >> x;
        arr[i] = x;
    }

    for (int j = 0;j < N;j++) {
        if (arr[j] > max)
            max = arr[j];
    }

    for (int k = 0;k < N;k++) {
        arr[k] = ((double)arr[k] / (double)max) * 100;
        sum += arr[k];
    }

    av = (double)sum / (double)N;
    cout << av;

    return 0;
}
