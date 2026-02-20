#include <iostream>
#include <string>
using namespace std;

int main() {

    string A, B;
    char T;

    cin >> A >> B;

    T = A[0];
    A[0] = A[2];
    A[2] = T;

    T = B[0];
    B[0] = B[2];
    B[2] = T;

    stoi(A);
    stoi(B);

    if (A > B)
        cout << A;
    else
        cout << B;

    return 0;
}
