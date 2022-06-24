#include <iostream>
#include <vector> 
using namespace std;


int main(){
	int n;
	vector<int> v = {1,2,3,4,5,6,1,2,3,4,5};
	int num = 0;
	char chr = 'z';
	cout<<int(chr) <<endl;
	cout<<"-----------------"<<endl;
	for(int i = 0;i<v.size();i++){
		num ^=v[i];

	}
	cout<<"unique number in vecor is = "<<num<<endl;
	cin>>n;
	int a,b;
	a = 5;
	b= 7;
	cout<<"right shift 1 = "<<(n>>1)<<endl;
	cout<<"a = "<<a <<" "<<"b = "<<b<<endl;
	a = a^b;
	b = a^b;
	a = a^b;
	cout<<"-----"<<endl;
	int s = 1;
	for(int i = 2;i<=8;i++){
		s =s^i;
		cout<<s<<endl;

	}
	cout<<"s = "<<s<<endl;
	cout<<(5^7)<<endl;
	cout<<"a = "<<a <<" "<<"b = "<<b<<endl;
	int five = 5;
	cout<<(5<<2)<<endl;
	cout<<(1^1^1)<<endl;
	cout<<(1^1^1^1)<<endl;
	if((n&1) == 0){
		cout<<n<<" it is even"<<endl;
	}
	else{
		cout<<n<<" it is odd"<<endl;

	}
	int bit = 1;
	int bit_num = 13;
	if (bit_num & (1<<bit)){
		cout<<"bit_num = "<<bit_num<<" bit = " <<bit<<",then bit is set"<<endl;
	}
	else{
		cout<<"bit_num = "<<bit_num<<" bit = " <<bit<<",then bit is not set"<<endl;
	}
	return 0;
}



