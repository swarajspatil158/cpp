#include <bits/stdc++.h>
using namespace std;

string is_prime(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return "no";
		}
	}
	return "yes";
}

int main(){
	int n;
	int num;
	cin>>n;
	while(n--){
	cin>>num;
	cout<<is_prime(num)<<endl;		
	}
	return 0;
}