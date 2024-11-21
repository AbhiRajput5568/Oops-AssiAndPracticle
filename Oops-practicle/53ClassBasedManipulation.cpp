/*Q:53-Write a program to demonstrate the following concepts:
         Empty Class
         Abstract Class
         Container Class
*/
#include <iostream>
using namespace std;

// Empty Class
class EmptyClass
{
};

// Abstract Class
class AbstractClass
{
public:
    virtual void display() const = 0; // Pure virtual function
};

class DerivedClass : public AbstractClass
{
public:
    void display() const override
    {
        cout << "Derived class implementation." << endl;
    }
};

// Container Class
class ContainerClass
{
    DerivedClass obj; // Holds a single DerivedClass object
public:
    void setObject(const DerivedClass &o) { obj = o; }
    void show() const { obj.display(); }
};

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // Empty Class
    EmptyClass e;
    cout << "Empty class created.\n";

    // Abstract Class
    DerivedClass d;
    d.display();

    // Container Class
    ContainerClass container;
    container.setObject(d);
    container.show();

    return 0;
}
