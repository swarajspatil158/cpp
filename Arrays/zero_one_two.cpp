#include <iostream>
using namespace std;
void zero_one_two(int a[100], int n)
{
    int i = 0;
    int zero, one, two;
    zero = 0;
    one = 0;
    two = n-1;
    while (one <= two)
    {
        if (a[one] == 0)
        {
            swap(a[zero], a[one]);
            zero+=1;
            one+=1;
        }
        else if (a[one] == 1)
        {
            one+=1;
        }
        else if (a[one] == 2)
        {
            swap(a[one], a[two]);
            two-=1;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
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
    zero_one_two(a, n);
    return 0;
}