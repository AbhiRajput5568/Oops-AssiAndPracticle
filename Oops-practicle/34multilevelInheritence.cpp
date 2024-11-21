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

// Derived class from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can bark!" << endl;
    }
};

// Derived class from Dog
class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "I can weep!" << endl;
    }
};

int main()
{
    // cout<<"Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";



    // Create an object of the derived class (Puppy)
    Puppy myPuppy;

    // Call methods from all levels of inheritance
    myPuppy.eat();
    myPuppy.bark();
    myPuppy.weep();

    return 0;
}
