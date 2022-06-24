#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    int i;
    cout << "enter a number to search: ";
    cin >> num;
    int size = sizeof(arr);
    for (i = 0; i < size; ++i)
    {
        if (arr[i] == num)
        {
            cout << "found at position: " << i << "th index" << endl;
            break;
        }
    }
    if (i == size)
    {

        cout << "not found";
    }
    return 0;
}