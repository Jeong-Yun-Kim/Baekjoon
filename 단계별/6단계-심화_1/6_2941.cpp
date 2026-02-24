#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string S;
    int count = 0;

    cin >> S;

    for (int i = 0;i < S.length();i++) {
        if (S[i] == '=') {
            if (i > 1 && S[i - 1] == 'z' && S[i - 2] == 'd') {
                count--;
            }
            else {
                count += 0;
            }
        }
        else if (S[i] == '-') {
            count += 0;
        }
        else if (S[i] == 'j') {
            if (i > 0 && (S[i - 1] == 'l' || S[i - 1] == 'n')) {
                count += 0;
            }
            else {
                count++;
            }
        }
        else {
            count++;
        }
    }

    cout << count;

    return 0;
}