#include <iostream>
using namespace std;

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum = " << sum;
}