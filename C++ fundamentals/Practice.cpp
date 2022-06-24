//algorithm
//array
//vector
//list
//set
//unordered_set
//map
//unordered_map
//stack
//queue
//priority_queue
//deque
//pair
// std::ios_base::sync_with_stdio(false);
// std::cin.tie(NULL);std::cout.tie(NULL);
#include <bits/stdc++.h>
using namespace std;

class Employee 
{
private:
    string Name;
    string Company;
    int Age;

public:


void MySelf(){
    cout<<"Name: "<<Name<<'\n';
    cout<<"Age: "<<Age<<'\n';
    cout<<"Company: "<<Company<<'\n';
}
Employee(string name,string company,int age)
{
    Name = name;
    Company = company;
    Age = age;
}
};

int main()
{
    Employee one = Employee("Swaraj","OA",21);
    one.MySelf();
    Employee two= Employee("John","AMZN",25);
    two.MySelf();


    return 0;
}
