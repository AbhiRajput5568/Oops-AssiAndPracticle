/*1...c) Design a class ‘Polar’ which describes a point in the plane using polar coordinates ‘radius’ and ‘angle’. Use the overloaded + operator to add two objects of ‘Polar’. You cannot add polar values of two points directly. This requires first the conversion of points into rectangular coordinates, then adding the corresponding rectangular coordinates and finally converting the result back into polar coordinates.*/

#include <iostream>
#include <cmath> // For sqrt, cos, sin, and atan2 functions
using namespace std;

class Polar
{
private:
    double radius;
    double angle; // Angle in radians

public:
    // Constructor to initialize radius and angle
    Polar(double r = 0, double a = 0) : radius(r), angle(a) {}

    // Method to take input from user
    void input()
    {
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Enter angle (in degrees): ";
        double angleDegrees;
        cin >> angleDegrees;
        angle = angleDegrees * M_PI / 180.0; // Convert degrees to radians
    }

    // Overloaded + operator to add two Polar points
    Polar operator+(const Polar &p) const
    {
        // Convert both points to rectangular coordinates
        double x1 = radius * cos(angle);
        double y1 = radius * sin(angle);

        double x2 = p.radius * cos(p.angle);
        double y2 = p.radius * sin(p.angle);

        // Add rectangular coordinates
        double x = x1 + x2;
        double y = y1 + y2;

        // Convert the result back to polar coordinates
        double new_radius = sqrt(x * x + y * y);
        double new_angle = atan2(y, x); // atan2 gives angle in radians

        return Polar(new_radius, new_angle);
    }

    // Display function to print polar coordinates
    void display() const
    {
        cout << "Radius: " << radius << ", Angle (radians): " << angle << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)" << endl;
    Polar p1, p2;

    // Input first Polar point
    cout << "Enter details for Polar point 1:" << endl;
    p1.input();

    // Input second Polar point
    cout << "Enter details for Polar point 2:" << endl;
    p2.input();

    // Display both points
    cout << "\nPolar Point 1:" << endl;
    p1.display();
    cout << "Polar Point 2:" << endl;
    p2.display();

    // Add the two points and display the result
    Polar result = p1 + p2;
    cout << "\nResult of addition:" << endl;
    result.display();

    return 0;
}
