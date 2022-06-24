#include <iostream>
#include<climits>
using namespace std;

int kth_min_Max(int arr[100],int n, int k){
    for (int i = 0; i < n - 1; ++i)
    {

        // find smallest ele idx in unsorted part
        int min_idx = i;
        for (int j = i; j < n - 1; ++j)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // After this loop we can do swap
        swap(arr[i], arr[min_idx]);
    }
    cout<<arr[k-1]<<" "<<arr[n-k];
    return 0;
}

int main()
{
    int arr[100];
    int n,k;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    kth_min_Max( arr, n,  k);
    return 1;
}