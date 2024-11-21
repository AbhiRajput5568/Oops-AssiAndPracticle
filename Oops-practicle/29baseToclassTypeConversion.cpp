#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    void display()
    {
        cout << "The value is: " << value << endl;
    }
};

int main()
{
    // cout<<"Abhishek Singh (2315272)";
    // cout << "Aayush Thakur (2315271)\n";


    int x = 10;

    // Convert basic type (int) to class type (Number)
    Number num = x; // Implicitly calls the constructor Number(int)

    num.display();

    return 0;
}
