// Program to find greater of two numbers.
#include <iostream>
using namespace std;
int a = 5, result = 1;
int fact(int a)
{
    for (int i = a; i > 0; i--)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    cout << "Abhishek Singh (2315272)\n";
    cin >> a;
    cout << fact(a);
}