#include <iostream>
#include <string>
using namespace std;

int main() {

    int sp = 0;
    string S;

    getline(cin, S);

    for (int i = 0; i < S.length(); i++) {
        if (S[i] != ' ' && (i == 0 || S[i - 1] == ' ')) {
            sp++;
        }
    }

    cout << sp;

    return 0;
}
