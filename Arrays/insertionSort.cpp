#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int curr = a[i];
        int j = i - 1;
        while (a[j] > curr && j >= 0)
        {
            a[j + 1] = a[j];

            j = j - 1;
        }
        a[j + 1] = curr;
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
    insertionSort(a, n);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}