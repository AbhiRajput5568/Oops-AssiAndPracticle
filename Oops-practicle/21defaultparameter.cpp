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
    // cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";


    Employee emp1("Abhishek", 22);
    Employee emp2("Rohit");
    return 0;
}
