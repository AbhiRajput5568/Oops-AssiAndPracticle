/*Q44:-Illustrate the concept of exception handling for rethrowing an exception */
#include <iostream>
using namespace std;

void Division(int a, int b)
{
    try
    {
        if (b == 0)
        {
            throw "Division by zero error!"; // Initial throw
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char *msg)
    {
        cout << "Caught exception in processDivision: " << msg << endl;
        // Rethrow the exception to be handled at a higher level
        throw;
    }
}

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    try
    {
        Division(10, 0); // This will cause an exception
    }
    catch (const char *msg)
    {
        // Final handling of the rethrown exception
        cout << "Caught rethrown exception in main: " << msg << endl;
    }

    return 0;
}
