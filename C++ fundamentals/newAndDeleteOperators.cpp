#include <iostream>
using namespace std;

int main()
{
    // Allocation
    int b[100];
    cout << sizeof(b) << endl;
    cout << b << endl;
    // dynamic allocation
    int n;
    cin >> n;
    int *a = new int[n];
    cout << sizeof(a) << endl;
    cout << a << endl;
    // no change
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << ", ";
    }
    // Free up Space
    delete[] a;
    return 0;
}