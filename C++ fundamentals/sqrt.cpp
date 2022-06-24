// Square root without using built-in function
// with precisions
// in: 26 5
// op: 5.09901
#include <iostream>
using namespace std;
int main()
{
	int num;
	int p;
	cin >> num >> p;
	float sqr = 0;
	float inc = 1.0;
	for (int times = 0; times <= p; times++)
	{

		while (sqr * sqr <= num)
		{
			sqr = sqr + inc;
		}
		sqr = sqr - inc;
		inc = inc / 10;
		/* code */
	}
	cout << sqr;
	return 0;
}