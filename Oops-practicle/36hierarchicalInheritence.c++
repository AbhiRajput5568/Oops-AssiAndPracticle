#include <iostream>
using namespace std;

// Base class
class Student
{
public:
    int rollNumber;
    void getRollNumber(int roll)
    {
        rollNumber = roll;
    }
    void displayRollNumber()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class 1: Test Marks
class Test : public Student
{
public:
    void getMarks(float marks1, float marks2)
    {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

// Derived class 2: Sports Marks
class Sports : public Student
{
public:
    void getSportsMarks(float marks)
    {
        cout << "Sports Marks: " << marks << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)" << endl;
    Test student1;
    Sports student2;

    student1.getRollNumber(101);
    student1.displayRollNumber();
    student1.getMarks(85.5, 90.0);
    student2.getSportsMarks(88.0);

    return 0;
}
