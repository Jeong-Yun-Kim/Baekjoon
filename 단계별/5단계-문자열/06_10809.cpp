#include <iostream>
using namespace std;

int main() {

    int N;
    string s;
    string str;
    int arr[26];

    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        str += c;
    }

    cin >> s;

    for (int i = 0;i < 26;i++) {
        for (int j = 0;j < s.length() + 1;j++) {
            if (s[j] == str[i]) {
                arr[i] = j;
                break;
            }
        }
    }

    for (int k = 0;k < 26;k++) {
        cout << arr[k] << " ";
    }

    return 0;

}
