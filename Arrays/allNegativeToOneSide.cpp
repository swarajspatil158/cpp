#include <iostream>
using namespace std;
void NegativeToOneSide(int a[100], int n)
{
    int left, right;
    left = 0;
    right = n - 1;
    while (left < right)
    {
        if (a[left] < 0)
        {
            left += 1;
        }
        else
        {
            swap(a[left], a[right]);
            right -= 1;
        }
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
    NegativeToOneSide(a, n);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}