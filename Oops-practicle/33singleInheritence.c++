#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can bark!" << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    Dog myDog;

    myDog.bark();
    myDog.eat();

    return 0;
}
