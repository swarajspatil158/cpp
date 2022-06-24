#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int *xptr = &x;
    cout << &x << endl;
    cout << xptr << endl;
    
    cout<<*(&x)<<endl;
    cout<<*(xptr)<<endl;
    
    cout<<*(&xptr)<<endl;
    cout<<&(*xptr)<<endl;
    
    return 0;
}