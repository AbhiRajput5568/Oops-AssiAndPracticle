#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int xValue = 0, int yValue = 0) : x(xValue), y(yValue) {}

    // Overload unary minus (-) operator
    Point operator-() const {
        return Point(-x, -y);  
    }

    
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    cout << "Abhishek Singh (2315272)\n";
    Point p1(5, -7);  

    cout << "Original point: ";
    p1.display();

    // Apply the unary minus operator
    Point p2 = -p1;

    cout << "Negated point: ";
    p2.display();

    return 0;
}
