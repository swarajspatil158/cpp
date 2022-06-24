#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int ele)
{
    int size = arr.size();
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == ele)
        {
            return mid;
        }
        else
        {

            if (arr[mid] < ele)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ele = 10;
    if (binarySearch(arr, ele) == -1)
    {
        cout << "Not present in given array" << endl;
    }
    else
    {

        cout << "Your required element is at position: " << binarySearch(arr, ele) << endl;
    }
    return 0;
}