#include <iostream>
using namespace std;

void localClassDemo()
{
    // Local class definition
    class LocalClass
    {
        int value;

    public:
        // Constructor
        LocalClass(int v) : value(v) {}

        // Method to display the value
        void display()
        {
            cout << "Value = " << value << endl;
        }
    };

    LocalClass obj(42);
    obj.display();
}

int main()
{
    // cout << "Abhishek Singh (2315272)" << endl;
    // cout << "Aayush Thakur (2315271)\n";


    localClassDemo();

    return 0;
}
