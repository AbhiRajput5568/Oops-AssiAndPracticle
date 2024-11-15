#include <iostream>
using namespace std;

class MyClass
{
    int a, b;

public:
    // Default constructor
    MyClass()
    {
        a = 0;
        b = 0;
        cout << "Default Constructor called!" << endl;
    }

    // Parameterized constructor
    MyClass(int x, int y)
    {
        a = x;
        b = y;
        cout << "Parameterized Constructor called!" << endl;
    }

    // Copy constructor
    MyClass(const MyClass &obj)
    {
        a = obj.a;
        b = obj.b;
        cout << "Copy Constructor called!" << endl;
    }

    void display()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)" << endl;

    MyClass obj1;
    obj1.display();

    MyClass obj2(10, 20);
    obj2.display();

    MyClass obj3 = obj2;
    obj3.display();

    return 0;
}
