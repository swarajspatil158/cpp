#include <iostream>
using namespace std;

int main() {
	int inp;
	cin >> inp;
	while (inp > 0) {

		int n;
		cin >> n;
		int dec = 0;
		int p = 1;

		while (n > 0) {
			int temp = n % 10;
			dec = dec + temp * p;
			n = n / 10;
			p = p * 2;
		}
		cout << dec << endl;
		inp = inp - 1;
	}
}