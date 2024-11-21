#include <iostream>
using namespace std;
int main()
{
    // cout << "Abhishek Singh (2315272)" << endl;
    // cout << "Aayush Thakur (2315271)";


    cout << "Calculator" << endl;
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;
    cout << "Enter the operation: " << endl;
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "Invalid operation" << endl;
        break;
    }
}