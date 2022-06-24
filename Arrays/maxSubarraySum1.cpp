// Time -> o(n^3)

#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], left, right;
    int max_sum = 0;
    int curr_sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Generate all subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Elements of subarray(i,j)
            curr_sum = 0;
            for (int k = i; k <= j; k++)
            {
                curr_sum += a[k];
            }
            // Update max sum if curr sum > max sum
            if (curr_sum > max_sum)
            {
                max_sum = curr_sum;
                left = i;
                right = j;
            }
        }
    }
    // print max sum
    cout << "max is " << max_sum << endl;
    // print subarray
    cout << "[";
    for (int k = left; k <= right; k++)
    {
        cout << a[k] << " ";
    }
    cout << "]";
    return 0;
}