#include <iostream>
using namespace std;

int main()
{
    int n, a[1000];
    int curr_sum = 0;
    int max_sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Kadane's Algorithm for max subarray sum
    for (int i = 0; i < n; i++)
    {
        curr_sum += a[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        max_sum = max(curr_sum, max_sum);
    }
    cout << "maximum dum is " << max_sum << endl;

    return 0;
}