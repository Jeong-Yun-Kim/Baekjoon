#include <iostream>

using namespace std;

int main()
{
	int total, num, money, n;
	int sum = 0;

	cin >> total;
	cin >> num;

	for (int i = 0;i < num;i++) {
		cin >> money >> n;
		sum += money * n;
	}
	if (total == sum) {
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}