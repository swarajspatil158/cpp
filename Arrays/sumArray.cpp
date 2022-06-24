#include <iostream>
#include <vector>
using namespace std;

int SequentialSearch(vector<int> &arr, int value)
{
    int size = arr.size();
    int index = 0;
    for (index = 0; index < size; index++)
    {
        if (value == arr[index])

            return arr[index];
    }
    return -1;
}
int sum_array(vector<int> &arr)
{
    int size = arr.size();
    int total = 0;
    int index = 0;
    for (index = 0; index < size; index++)
    {
        total = total + arr[index];
    }
    return total;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = 8;
    cout << "total sum nof arr is: " << sum_array(arr) << endl;
    cout << "Your required element is: " << SequentialSearch(arr, value) << endl;
    return 0;
}