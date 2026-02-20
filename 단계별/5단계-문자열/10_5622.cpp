#include <iostream>
#include <string>
using namespace std;

int main() {

    string S, str;
    int N[26];
    int T = 3;
    int count = 0;
    int time = 0;

    for (char c = 'A';c <= 'Z';c++) {
        str += c;
    }

    for (int i = 0;i < 8;i++) {
        for (int j = 0;j < 3;j++) {
            N[count] = T;
            count++;
        }
        T++;
    }

    for (int i = 15;i <= 18;i++) {
        N[i] = 8;
    }

    for (int j = 19;j <= 21;j++) {
        N[j] = 9;
    }

    for (int k = 22;k <= 25;k++) {
        N[k] = 10;
    }

    cin >> S;

    for (int i = 0;i < S.length();i++) {
        time += N[str.find(S[i])];
    }

    cout << time;

    return 0;
}
