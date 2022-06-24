/*
inp:
5
	1
	2
	3
	4
	5
output:
    1
   232
  34543
 4567654
567898765
*/

#include<iostream>
using namespace std;

int main() {
	int n = 5;
	for (int i = 0; i <= n; i++)
	{
		//spaces
		for (int space = 1; space <= n - i; space++) {
			cout << " ";
		}
		//increasing nums
		int val = i;
		for (int cnt = 1; cnt <= i - 1 ; cnt++)
		{
			cout << val;
			val = val + 1;
		}
		//Decreasing nums
		for (int cnt = 1; cnt <= i; cnt++)
		{
			cout << val;
			val = val - 1;
		}
		//print new line
		cout << endl;
	}
}