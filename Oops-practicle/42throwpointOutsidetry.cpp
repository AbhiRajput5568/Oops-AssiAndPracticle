/*Q4:-Illustrate the concept of exception handling for throw point outside the try block  2*/
#include <iostream>
using namespace std;

void divide(int a, int b)
{
    if (b == 0)
    {
        // Throw point: exception thrown here without a try block in this function
        throw "Division by zero error!";
    }
    cout << "Result: " << a / b << endl;
}

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";

    try
    {
        divide(10, 2); // Normal division
        divide(10, 0); // Division by zero, will trigger exception
    }
    catch (const char *msg)
    {
        // Catch block in the calling function to handle the exception
        cout << "Caught exception: " << msg << endl;
    }
    return 0;
}
