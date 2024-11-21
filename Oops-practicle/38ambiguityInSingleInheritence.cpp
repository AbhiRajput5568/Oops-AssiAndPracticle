#include <iostream>
using namespace std;

// Base class
class Parent
{
public:
    void display()
    {
        cout << "Display function from Parent class." << endl;
    }
};

// Derived class
class Child : public Parent
{
public:
    void display()
    {
        cout << "Display function from Child class." << endl;
    }
};

int main()
{
    // cout << "Abhishek Singh (2315272)" << endl;
    // cout << "Aayush Thakur (2315271)\n";


    Child obj;

    obj.display(); // Calls Child's display() by default

    obj.Parent::display(); // Calls Parent's display()

    return 0;
}
