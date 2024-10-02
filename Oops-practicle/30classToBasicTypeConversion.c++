#include <iostream>
using namespace std;

class Distance
{
private:
    int kilometers;

public:
    Distance(int km) : kilometers(km) {}

    operator int() const
    {
        return kilometers * 1000;
    }

    void display() const
    {
        cout << kilometers << " kilometers" << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    Distance d(5);

    d.display(); // Display distance in kilometers

    // Convert the Distance object to an int (meters)
    int meters = d;
    cout << "Distance in meters: " << meters << " meters" << endl;

    return 0;
}
