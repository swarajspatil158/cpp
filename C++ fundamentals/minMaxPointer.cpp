#include <iostream>
using namespace std;

int max1(int x, int y)
{
        return x>y?x:y;
}
int min1(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int (*ptr)(int,int);
    ptr = &max1;
    cout<<(*ptr)(4,5)<<endl;
    

    ptr = &min1;
    
    cout<<(*ptr)(4,5)<<endl;
    


    return 0;
}