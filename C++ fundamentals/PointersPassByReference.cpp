#include <iostream>
using namespace std;
// pass by reference with pointers
int Pointers(int *ptr)
{
    *ptr = *ptr + 1;
    cout << *ptr << endl;
    return 0;
}

int main()
{
    int num = 10;
    Pointers(&num);
    cout << num << endl;
    return 0;
}