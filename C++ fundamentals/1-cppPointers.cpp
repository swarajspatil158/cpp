#include <iostream>
using namespace std;

int main()
{
    int s = 10;
    cout << &s << endl;
    int *ptr = &s;
    cout << ptr << endl;
    *ptr = 10;
    cout << ptr << endl;
    cout << "Value of s variable is->" << s << endl;

    return 0;
}
