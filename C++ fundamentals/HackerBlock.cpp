#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int row = 1;
	int col;
	while (row <= n) {
		col = 1;
		if (row % 2 != 0) {
			while (col <= row) {
				cout << 1;
				col = col + 1;

			}
		}
		else {
			cout << 1;
			while (col <= row - 2) {
				cout << 0;
				col = col + 1;
			}
			cout << 1;
		}
		cout << endl;
		row = row + 1;

	}
}