#include <iostream>
using namespace std;

int main()
{
    string x;
    int time;
    string morning, night;
    morning = "morning";
    night = "ratr";
    cin >> time;
    x = (time > 6) ? morning : night;
    cout << x;
    return 0;
}