#include <iostream>
using namespace std;

int main() {

    string S;
    int count = 0;

    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == S[S.length() - i - 1])
            count++;
    }

    if (count == S.length())
        cout << 1;
    else
        cout << 0;

    return 0;

}