#include <iostream>
using namespace std;

// Base class 1
class ClassA
{
public:
    void display()
    {
        cout << "Display function from ClassA." << endl;
    }
};

// Base class 2
class ClassB
{
public:
    void display()
    {
        cout << "Display function from ClassB." << endl;
    }
};

class Derived : public ClassA, public ClassB
{
public:
    void resolveAmbiguity()
    {
        ClassA::display(); // Call display() from ClassA
        ClassB::display(); // Call display() from ClassB
    }
};

int main()
{
    // cout << "Abhishk Singh (2315272)";
    // cout << "Aayush Thakur (2315271)\n";


    Derived obj;

    // Resolve the ambiguity
    obj.resolveAmbiguity();

    return 0;
}
