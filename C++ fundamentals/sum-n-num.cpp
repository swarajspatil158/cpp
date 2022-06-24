#include<iostream>
using namespace std;
int main() {

	int n;
	int sum;
	sum = 0;
	cin >> n;
	// int i = 1;
	// sum = (n * (n + 1)) / 2;
	// while (i <= n) {
	for (int i = 0; i <= n; ++i)
	{
		sum += i;/* code */
	}

	// i = i + 1;
	// }
	cout << sum << endl;
	// return 0
}