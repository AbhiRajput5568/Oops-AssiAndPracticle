#include <iostream>
using namespace std;

// Base class 1: Employee
class Employee
{
public:
    int employeeID;

    void setEmployeeID(int id)
    {
        employeeID = id;
    }

    void displayEmployeeID()
    {
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Base class 2: Pay
class Pay
{
public:
    float basicSalary;

    void setBasicSalary(float salary)
    {
        basicSalary = salary;
    }

    void displaySalary()
    {
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

// Derived class: Salary (Hybrid inheritance from Employee and Pay)
class Salary : public Employee, public Pay
{
public:
    float totalSalary;

    void calculateTotalSalary()
    {
        totalSalary = basicSalary + 5000; // Adding a fixed allowance to the basic salary
    }

    void displayTotalSalary()
    {
        displayEmployeeID();
        displaySalary();
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main()
{
    // Create an object of Salary (derived class)
    Salary emp;

    emp.setEmployeeID(101);     // Set Employee ID
    emp.setBasicSalary(30000);  // Set Basic Salary
    emp.calculateTotalSalary(); // Calculate Total Salary

    emp.displayTotalSalary(); // Display all details

    return 0;
}
