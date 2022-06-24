#include <iostream>
using namespace std;

int main()
{
    /*    int numberPlate[5] = {2, 5, 3, 7, 8};
    cout << numberPlate << endl;     // prints address of '''first''' element in numberPlate Array
    cout << &numberPlate[0] << endl; // prints address of first element in numberPlate Array same as above line code
    cout << &numberPlate[2] << endl; // prints address of index-2 position array */
    int numbers[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: " << endl;
        cin >> numbers[i];
    }
    for (int i = 0; i <= 5; i++) // https://www.youtube.com/watch?v=DsS-ZiYOWy4&list=PL43pGnjiVwgSSRlwfahAuIqoJ8TfDIlHq&index=3
    {
        cout << *(numbers + i) << "  "; // Check this video for extra running loop doubt
    }
    return 0;
}