#include <iostream>
using namespace std;

class Point {
private:
    int x, y; 

public:
    Point(int xValue = 0, int yValue = 0) : x(xValue), y(yValue) {}

    // Overload the binary addition operator (+)
    Point operator+(const Point &p) const {
        return Point(x + p.x, y + p.y);
    }

    
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // cout << "Abhishek Singh (2315272)" << endl;
    // cout << "Aayush Thakur (2315271)\n";


    Point p1(3, 4); 
    Point p2(1, 2);  

    // Add two points using overloaded + operator
    Point p3 = p1 + p2;

    // Display the result of the addition
    cout << "Point 1: ";
    p1.display();
    cout << "Point 2: ";
    p2.display();
    cout << "Result of addition (Point 3 = Point 1 + Point 2): ";
    p3.display();

    return 0;
}
