/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}

int countHash(int n, int m)
{
    int max_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == '#')
            {
                cnt += 1;
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    return max_cnt;
}
int main()
{

    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int n, m;
        cin >> n >> m;
        int result = countHash(n, m);
        cout << result << endl;
    }

    return 0;
}