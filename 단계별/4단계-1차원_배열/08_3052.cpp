#include <iostream>
using namespace std;

int main() {
    int x;
    int arr[42] = { false };
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> x;
        arr[x % 42] = true;
    }

    for (int i = 0; i < 42; i++) {
        if (arr[i] == true)
            count++;
    }

    cout << count;

    return 0;
}
