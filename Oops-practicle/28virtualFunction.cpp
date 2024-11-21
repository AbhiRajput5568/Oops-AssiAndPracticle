#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base
{
public:
    // Override the base class function
    void show() override
    {
        cout << "Derived class show function called." << endl;
    }
};

int main()
{
    // cout << "Abhishek Singh (2315272)" << endl;
    // cout << "Aayush Thakur (2315271)\n";

    Base *basePtr; // Pointer of base class type
    Derived derivedObj;

    basePtr = &derivedObj;

    basePtr->show(); // This will call the derived class version of show()

    return 0;
}
