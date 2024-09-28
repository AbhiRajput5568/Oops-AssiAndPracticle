#include <iostream>
using namespace std;

class MyClass
{
public:
    static int staticVar;

    static void display()
    {
        cout << "StaticVar = " << staticVar << endl;
    }
};

int MyClass::staticVar = 0;

int main()
{
    cout<<"Abhishek Singh (2315272)\n";
    MyClass::display();

    MyClass obj;
    obj.staticVar = 5;

    MyClass::display();

    return 0;
}
