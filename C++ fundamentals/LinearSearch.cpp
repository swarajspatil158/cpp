#include <iostream>
using namespace std;
int linearSearch(int a[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n, target;
    cin >> target;
    cin >> n;
    int a[5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "found at position: " << linearSearch(a, n, target) << endl;

    return 0;
}