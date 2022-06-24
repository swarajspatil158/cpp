#include <iostream>
using namespace std;

int main()
{
    //Break - used to stop loop
    int no;
    while (true)
    {

        cin >> no;
        if (no % 7 == 0)
        {
            break;
        }
    }
    cout << no;
    return 0;
}