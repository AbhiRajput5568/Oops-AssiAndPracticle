/*Q45:-Illustrate the concept of exception handling with single catch statement for all exceptions*/
#include <iostream>
using namespace std;

void testException(int code)
{
    try
    {
        if (code == 1)
        {
            throw 404; // Throwing an integer exception
        }
        else if (code == 2)
        {
            throw "File not found"; // Throwing a C-style string exception
        }
        else if (code == 3)
        {
            throw 3.14; // Throwing a double exception
        }
        else
        {
            cout << "No exception thrown, code is: " << code << endl;
        }
    }
    catch (...)
    {
        // Catch-all handler for any type of exception
        cout << "Caught an exception of unknown type!" << endl;
    }
}

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";

    testException(1); // Triggers integer exception
    testException(2); // Triggers string exception
    testException(3); // Triggers double exception
    testException(0); // No exception, normal flow

    return 0;
}
