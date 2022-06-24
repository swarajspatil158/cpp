#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
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
    selectionSort(a, n);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}