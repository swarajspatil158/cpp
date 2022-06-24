#include <iostream>
using namespace std;

int fact_recursive(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact_recursive(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "factorial of " << n << " is: " << fact_recursive(n) << endl;
    return 0;
}