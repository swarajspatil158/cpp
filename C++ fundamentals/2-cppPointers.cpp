// void pointer -> It can hold variable of various types
// You cannot directly de-reference the pointer you have
#include <iostream>
using namespace std;

void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}
void printLetter(char *charPtr)
{
    cout << *charPtr << endl;
}

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl // instead if we do this '''*((char *)ptr)''' compiler does not recognize error, and it is logical error, and output will be undefined symbol
             << ptr << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl
             << ptr << endl;
        break;
    }
}

int main()
{
    int number = 10;
    char letter = 's';
    printNumber(&number);
    printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');
    return 0;
}