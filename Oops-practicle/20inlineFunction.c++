#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x)
{
    return x * x;
}

int main()
{
    cout << "Abhishek Singh (2315272)\n";

    int num = 5;

    // Call the inline function
    cout << "The square of " << num << " is " << square(num) << endl;

    return 0;
}
