#include <iostream>
using namespace std;

class MyClass
{
    int *ptr;

public:
    MyClass(int value)
    {
        ptr = new int(value);
        cout << "Dynamic Constructor called!" << endl;
    }

    void display()
    {
        cout << "Value = " << *ptr << endl;
    }
};

int main()
{
    // cout << "Abhishek Singh (2315272)"<< endl;
    // cout << "Aayush Thakur (2315271)\n";

    MyClass obj(10);
    obj.display();

    return 0;
}
