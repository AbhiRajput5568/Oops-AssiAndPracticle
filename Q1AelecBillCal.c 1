/* Q:	An electricity board charges the following rates to domestic users to discourage large consumption of energy:
        For the first 100 units- 60P per unit
        For next 200 units- 80P per unit
        Beyond 300 units- 90P per unit
        All users are charged a minimum of Rs. 50.00. if the total amount is more than Rs. 300.00 then an additional surcharge of 15% is added.
        Build a program to read the names of users and number of units consumed and print out the charges with names.
        */

#include <iostream>
using namespace std;

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    string name;
    float unit, charges;

    // input consumer name from user
    cout << "Enter Consumer Name: ";
    getline(cin, name);

    // input consumed unit from user
    cout << "Enter Consumed Units: ";
    cin >> unit;

    // Calculate charges
    if (unit > 0)
    {
        if (unit <= 100)
        {
            charges = unit * 0.60;
        }
        else if (unit > 100 && unit <= 200)
        {
            charges = 100 * 0.60 + (unit - 100) * 0.80;
        }
        else
        {
            charges = 100 * 0.60 + 100 * 0.80 + (unit - 200) * 0.90;
        }

        // logic for minimum charge
        if (charges < 50)
        {
            charges = 50;
        }

        // logic for sub-charges
        if (charges > 300)
        {
            float subcharge = 0.15 * charges;
            charges += subcharge;
        }

        cout << "Consumer Name: " << name << endl;
        cout << "Consumed Units: " << unit << endl;
        cout << "Total Charges:" << charges << endl;
    }
    else
    {
        cout << "Invalid unit entered!" << endl;
    }

    return 0;
}