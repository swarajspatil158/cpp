#include <iostream>
#include <climits>
using namespace std;

char largeSmall(int a[100], int n)
{
    int large, small;
    large = INT_MIN;
    small = INT_MAX;
    for(int i =0;i<n;++i){
        if (a[i]<=small){
            small = a[i];
        }
        if (a[i]>large){
            large =a[i];
        }
    }
    cout<<large <<" "<<small;
    return 1;
}

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout <<"large and small resp: "<< largeSmall(a, n);
    return 1;
}