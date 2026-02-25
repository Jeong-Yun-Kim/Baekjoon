#include <iostream>
using namespace std;

int main() {

    int max_i, max_j;
    int max = -1;
    int A[9][9];

    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                max_i = i+1;
                max_j = j+1;
            }
        }
    }

    cout << max << endl;
    cout << max_i << " " << max_j;

    return 0;
}