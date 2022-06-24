#include <iostream>
#include<climits>
using namespace std;

char min_Max(int a[100],int n){
    int min,max;
    min =INT_MAX;
    max =INT_MIN;
    for(int i=0;i<n;++i){
        if(a[i]<min){
            min = a[i];
        }
        if(a[i]>max){
            max = a[i];
        }
    }
    cout<<min<<" "<< max;
    return 1;
}

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    cout<<"Min and Max ele resp are: "<<min_Max(a,n);
    return 1;
}