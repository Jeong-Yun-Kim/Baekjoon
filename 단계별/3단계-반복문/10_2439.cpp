#include <iostream>
using namespace std;

int main()
{
    int T;

    cin >> T;

    for (int i = 1; i <= T; i++) {
        for (int j = T; j > i; j--) {
            cout << " ";
        }

        for (int k = 0; k < i; k++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
