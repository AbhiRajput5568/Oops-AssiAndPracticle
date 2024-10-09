#include <iostream>
using namespace std;

// ClassB represents the source class
class ClassB
{
public:
    int value;

    ClassB(int v) : value(v) {}

    void displayB() const
    {
        cout << "ClassB value: " << value << endl;
    }
};

class ClassA
{
public:
    int number;

    // Conversion constructor to convert ClassB object to ClassA object
    ClassA(const ClassB &b)
    {
        number = b.value;
    }

    void displayA() const
    {
        cout << "ClassA number: " << number << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)\n";

    ClassB objB(100);
    objB.displayB();

    // Convert ClassB object to ClassA using conversion constructor
    ClassA objA = objB;
    objA.displayA();

    return 0;
}
