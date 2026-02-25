#include <iostream>
using namespace std;

int main() {

    int N;
    int x, y;
    int paper[100][100];
    int count = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            paper[i][j] = 0;
        }
    }

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;

        for (int a = x; a < x + 10; a++) {
            for (int b = y; b < y + 10; b++) {
                paper[a][b] = 1; 
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}