/*2...a) Create C++ program with the following:
i)A function to read two double type numbers from keyboard
ii) A function to calculate the division of these two numbers
iii) A try block to throw an exception when a wrong type of data is keyed in
iv) A try block to detect and throw an exception if the condition ‘divide-by-zero’ occurs
v) Appropriate catch block to handle the exceptions thrown.
*/
#include <iostream>
#include <stdexcept> // For exceptions

using namespace std;

// Function to read two double type numbers from the keyboard
void readNumbers(double &num1, double &num2)
{
    cout << "Enter two numbers: ";
    if (!(cin >> num1 >> num2))
    {
        throw invalid_argument("Please enter valid numbers.");
    }
}

// Function to calculate the division of two numbers
double divide(double num1, double num2)
{
    if (num2 == 0)
    {
        throw runtime_error("Division by zero is not allowed.");
    }
    return num1 / num2;
}

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    double number1, number2;

    try
    {
        readNumbers(number1, number2);
        double result = divide(number1, number2);
        cout << "Result: " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
