// Array in C++

#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  int arr[10];
  arr[2] = 443;
  for(int ele:arr)
    cout<<ele<<endl;
  return 0;
}