/*Q46:-Program to illustrate the use of this pointer*/
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    // Constructor with parameters having the same name as member variables
    Rectangle(int length, int width)
    {
        // Use of 'this' pointer to distinguish member variables from parameters
        this->length = length;
        this->width = width;
    }

    // Function to calculate area
    int area()
    {
        return this->length * this->width; // Accessing members using 'this' pointer
    }

    // Function to display dimensions
    void display()
    {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";

    Rectangle rect(10, 5);                   // Creating an object of Rectangle
    rect.display();                          // Display dimensions
    cout << "Area: " << rect.area() << endl; // Calculate and display area

    return 0;
}
