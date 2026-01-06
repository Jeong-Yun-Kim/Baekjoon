#include <iostream>

using namespace std;

int main()
{
	int a, b, b1, b10, b100;

	cin >> a;
	cin >> b;

	b1 = (b % 100) % 10;
	b10 = ((b % 100) - b1) / 10;
	b100 = (b - (b % 100)) / 100;

	cout << a * b1 << endl;
	cout << a * b10 << endl;
	cout << a * b100 << endl;
	cout << a * b << endl;

	return 0;
}