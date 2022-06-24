#include <iostream>
using namespace std;

void reverseArray(int a[], int n)
{
    for (int i = 0; i <= n / 2; ++i)
    {
        int num_1, num_2;
        num_1 = a[i];
        num_2 = a[n - i - 1];
        num_1 = num_1 + num_2;
        num_2 = num_1 - num_2;
        num_1 = num_1 - num_2;
        a[i] = num_1;
        a[n - i - 1] = num_2;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    reverseArray(a, n);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}