#include <iostream>
#include <cmath>
using namespace std;

class Add
{

public:
    int a, b;
    Add(int x, int y)
    {
        a = x;
        b = y;
    }
    int add() { return a + b; }
};
int main()
{
    cout << "Abhishek Singh (2315272)\n";
    Add obj(10, 20);
    cout << obj.add();
    return 0;
}