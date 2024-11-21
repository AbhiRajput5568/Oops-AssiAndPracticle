#include <iostream>
using namespace std;

class OuterClass
{
public:
    // Nested class
    class InnerClass
    {
    public:
        void display()
        {
            cout << "Hello from InnerClass!" << endl;
        }
    };

    void createInner()
    {
        InnerClass inner;
        inner.display();
    }
};

int main()
{
    // cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";


    OuterClass outer;
    outer.createInner();

    return 0;
}
