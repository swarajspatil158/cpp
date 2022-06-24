#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
	int fact = 1;
	if(num < 0){
		return -1;
	}
	if (num == 1 || num == 0){
		return 1;
	}
	while(num>1){
		fact *= num;
		num--;
	}
	return fact;
}

int main() {
	int num,n;
	cin`>>n;
	for(int i = 0;i<n;i++){
		cin>>num;
		cout<<factorial(num)<<endl;
	}
	 return 0;
}