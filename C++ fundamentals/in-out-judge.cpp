#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	while (N > 0) {
		int num;
		cin >> num;
		cout << num*num << endl;
		N = N - 1;
	}
}