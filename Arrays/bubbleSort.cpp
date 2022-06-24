#include <iostream>
using namespace std;
// Bubble Sort
void bubbleSort(int arr[], int n){
    // n - 1 large elements to the end
    for (int i = 0; i < n - 1; ++i)
    {

        
        // Pairwise swapping in unsorted array
        for (int j = 0; j < n - 1-i; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
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
    bubbleSort(a, n);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}