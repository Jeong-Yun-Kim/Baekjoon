#include <iostream>
using namespace std;

int main() {

    int N;
    string S, str;
    int a[26];
    int count = 0;
    int t = 0;

    for (int i = 0;i < 26;i++) {
        a[i] = 0;
    }

    for (char c = 'a';c <= 'z';c++) {
        str += c;
    }

    cin >> N;

    for (int i = 0;i < N;i++) {
        cin >> S;

        for (int j = 0;j < 26;j++) {
            a[j] = 0;
        }

        t = 0;

        for (int k = 0;k < S.length();k++) {

            if (a[str.find(S[k])] == 0) {
                a[str.find(S[k])]++;
            }

            else if (k > 0 && S[k] == S[k - 1]) {
                a[str.find(S[k])]++;
            }

            else {
                t = 1;
            }
        }

        if (t == 0) {
            count++;
        }
    }

    cout << count;

    return 0;
}