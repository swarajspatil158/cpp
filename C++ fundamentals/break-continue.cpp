#include <iostream>
using namespace std;

int main()
{
    int num;
    while (true)
    {
        cin >> num;
        if (num == 13)
        {
            cout << "continue " << num << endl;
            continue;
        }
        else if (num == 14)
        {
            cout << "break " << num << endl;
            break;
        }
    }
    return 0;
}