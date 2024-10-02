#include <iostream>
using namespace std;

class Employee
{
public:
    Employee(string empName, int empAge = 25)
    {
        cout << "Name: " << empName << ", Age: " << empAge << endl;
    }
};

int main()
{
    Employee emp1("Abhishek", 22);
    Employee emp2("Rohit");
    return 0;
}
