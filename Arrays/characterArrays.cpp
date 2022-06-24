#include <iostream>
using namespace std;

int main()
{
    char a[] = {'a', 's', 'd', 'f','g','h','\0'};
    cout << a << endl;
    char s1[]= {'s','w','a','r','a','j','\0'};
    char s2[]="swaraj";
    cout<< sizeof(s1)<<endl;
    cout<< sizeof(s2)<<endl;
    cout<< s1<<endl;
    cout<< s2<<endl;
    char s3[10] = "hello";
    cout<<s3<<endl;
    char s4[10];
    cin>>s4;
    cout<<s4;
    // cout<< s;
    return 0;
}