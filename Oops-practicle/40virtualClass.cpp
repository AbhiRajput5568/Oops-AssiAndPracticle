#include <iostream>
using namespace std;

class Person
{
public:
    int age;

    void setAge(int a)
    {
        age = a;
    }

    void displayAge()
    {
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person
{
};

class Employee : virtual public Person
{
};

class WorkingStudent : public Student, public Employee
{
};

int main()
{
    // cout << "Abhishek Singh (2315272)";
    // cout << "Aayush Thakur (2315271)\n";


    WorkingStudent ws;

    ws.setAge(20); // No ambiguity because of virtual inheritance

    // Display age
    ws.displayAge(); // Only one copy of 'age' exists

    return 0;
}
