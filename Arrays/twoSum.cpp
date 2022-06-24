#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int a[] = {1, 2, 4, 4, 5, 6, 6, 8};
    int sum = 10;
    int i = 0;
    int j = n;
    while (i < j)
    {
        int curr_sum = a[i] + a[j];
        if (curr_sum < sum)
        {
            i++;
        }
        else if (curr_sum > sum)
        {
            j--;
        }
        else if (curr_sum == sum)
        {
            cout << a[i] << " and " << a[j] << endl;
            i++;
            j--;
        }
    }
    return 0;
}