#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int t = 0;
    string S;
    int max = 0;
    int c = 0;

    cin >> S;

    int a[26] = { 0 };

    for (int i = 0; i < S.length(); i++) {
        S[i] = toupper(S[i]);
        a[S[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (a[i] > max) {
            max = a[i];
            c = i;
            t = 0;
        }
        else if (a[i] == max && max != 0) {
            t = 1;
        }
    }

    if (t == 1) cout << "?";
    else cout << char('A' + c);

    return 0;
}