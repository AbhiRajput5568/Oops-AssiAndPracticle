/* Q41:-Illustrate the concept of exception handling for throw point inside the try block */
#include <iostream>
using namespace std;

void divide(int a, int b)
{
    try
    {
        if (b == 0)
        {
            // Throw point: an exception is thrown here if b is 0
            throw "Division by zero error!";
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char *msg)
    {
        // This block handles the exception
        cout << "Caught exception: " << msg << endl;
    }
}

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    divide(10, 2); // Normal division
    divide(10, 0); // Division by zero, will trigger exception
    return 0;
}