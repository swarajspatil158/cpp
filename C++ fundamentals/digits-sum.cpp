#include <iostream>
using namespace std;

int main()
{
	int a;
	int sum = 0;
	cin >> a;
	while (a > 0)
	{
		sum = sum + (a % 10);
		a = a / 10;
	}
	cout << sum << endl;
}