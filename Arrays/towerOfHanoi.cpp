#include <iostream>
#include <string>
using namespace std;

void tower_hanoi(int n, string a, string b, string c)
{
    if (n == 1)
    {
        cout << "move from " << a << " to " << c << endl;
        return;
    }
    tower_hanoi(n - 1, a, c, b);
    cout << "move from " << a << " to " << c << endl;
    tower_hanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    string a = "a";
    string b = "b";
    string c = "c";
    cin >> n;
    tower_hanoi(n, a, b, c);
    return 0;
}
