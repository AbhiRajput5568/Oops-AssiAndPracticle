#include <iostream>
using namespace std;

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
private:
    int number;

public:
    ClassA(int n) : number(n) {}

    void displayA() const
    {
        cout << "ClassA number: " << number << endl;
    }

    // Conversion operator to convert ClassA object to ClassB object
    operator ClassB() const
    {
        return ClassB(number);
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)\n";

    ClassA objA(50);
    objA.displayA();

    ClassB objB = objA;
    objB.displayB();

    return 0;
}
