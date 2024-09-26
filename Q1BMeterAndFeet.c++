// b)	Create two classes A and B which store the value of distances. ‘A’ stores distances in meters and centimeters and ‘B’ in feet and inches. Construct a program that can read values for the class objects and add one object of ‘A’ with another object of ‘B’. Use a friend function to carry out the addition operation. The object that stores the results may be a ‘A’ object or ‘B’ object, depending on the units in which the results are required. The display should be in the format of feet and inches or meters and centimeters depending on the object on display.
#include <iostream>
using namespace std;

class B; // Forward declaration of class B

class A
{
private:
    int meters;
    int centimeters;

public:
    // Constructor to initialize the distance in meters and centimeters
    A(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    // Function to read the distance in meters and centimeters
    void read()
    {
        cout << "Enter distance in meters and centimeters: ";
        cin >> meters >> centimeters;
    }

    // Function to display the distance in meters and centimeters
    void display() const
    {
        cout << "Distance: " << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    // Friend function to add distance in A (meters and cm) with distance in B (feet and inches)
    friend A addDistances(const A &, const B &);
};

class B
{
private:
    int feet;
    int inches;

public:
    // Constructor to initialize the distance in feet and inches
    B(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    // Function to read the distance in feet and inches
    void read()
    {
        cout << "Enter distance in feet and inches: ";
        cin >> feet >> inches;
    }

    // Function to display the distance in feet and inches
    void display() const
    {
        cout << "Distance: " << feet << " feet and " << inches << " inches" << endl;
    }

    // Friend function to add distance in A (meters and cm) with distance in B (feet and inches)
    friend A addDistances(const A &, const B &);
};

// Function to add distance from object A and object B, with the result stored in object A
A addDistances(const A &a, const B &b)
{
    // Conversion factors
    const float meters_per_foot = 0.3048;
    const float centimeters_per_inch = 2.54;

    // Convert feet and inches to meters and centimeters
    float total_meters = b.feet * meters_per_foot + (b.inches * centimeters_per_inch) / 100.0;

    // Add the meters and centimeters to object A
    int total_cm = (a.meters * 100 + a.centimeters) + (total_meters * 100);
    int result_meters = total_cm / 100;
    int result_centimeters = total_cm % 100;

    // Return the new A object with the result
    return A(result_meters, result_centimeters);
}

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    A objA;
    B objB;

    // Read distances for both objects
    objA.read();
    objB.read();

    // Add distances using the friend function
    A result = addDistances(objA, objB);

    // Display the result in meters and centimeters
    result.display();

    return 0;
}
