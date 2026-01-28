#include <iostream>
using namespace std;

int main() 
{
    //C/C++ 입출력 동기화 해제
    ios::sync_with_stdio(false);

    //cin–cout 연결 해제
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int i = 0;i < T;i++) {
        int a, b;
        cin >> a >> b;
        cout << a + b << '\n';  //endl보다 빠름(endl:개행+flush)
    }
    return 0;
}
