#include<iostream>
#include <climits>
using namespace std;

int main() {
	int minimum = INT_MAX;
	int maximum = INT_MIN;
	int n;
	cin >> n;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num < minimum) {
			minimum = num;
		}
		if (num > maximum) {
			maximum = num;
		}

	}
	cout << "max num is: " << maximum << endl;
	cout << "min num is: " << minimum << endl;



	return 0;
}