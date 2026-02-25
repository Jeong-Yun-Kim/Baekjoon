#include <iostream>
#include <string>
using namespace std;

int main() {

    char A[5][15] = { 0 };
    string s;

    for (int i = 0; i < 5; i++) {
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            A[i][j] = s[j];
        }
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (A[j][i] != 0)
                cout << A[j][i];
        }
    }

    return 0;
}