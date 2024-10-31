/*1. a) An educational institution wishes to maintain a database of its employees. The database is divided into a number of classes as shown in figure. Specify all the classes and define functions to create the database and retrieve individual information as and when required.*/

#include <iostream>
using namespace std;

class Staff
{
private:
    string name;
    int id;

public:
    Staff(string n, int i) : name(n), id(i) {}

    string getName()
    {
        return name;
    }

    int getId()
    {
        return id;
    }

    virtual void displayInfo()
    {
        cout << "Name: " << name << ", ID: " << id;
    }
};

class Teacher : public Staff
{
private:
    string subject;

public:
    Teacher(string n, int i, string s) : Staff(n, i), subject(s) {}

    string getSubject()
    {
        return subject;
    }

    void displayInfo() override
    {
        Staff::displayInfo();
        cout << ", Subject: " << subject << endl;
    }
};

class Officer : public Staff
{
private:
    string department;

public:
    Officer(string n, int i, string d) : Staff(n, i), department(d) {}

    string getDepartment()
    {
        return department;
    }

    void displayInfo() override
    {
        Staff::displayInfo();
        cout << ", Department: " << department << endl;
    }
};

class Typist : public Staff
{
protected:
    int typingSpeed;

public:
    Typist(string n, int i, int ts) : Staff(n, i), typingSpeed(ts) {}

    int getTypingSpeed()
    {
        return typingSpeed;
    }

    void displayInfo() override
    {
        Staff::displayInfo();
        cout << ", Typing Speed: " << typingSpeed << " wpm";
    }
};

class Regular : public Typist
{
public:
    Regular(string n, int i, int ts) : Typist(n, i, ts) {}

    void displayInfo() override
    {
        Typist::displayInfo();
        cout << ", Status: Regular" << endl;
    }
};

class Casual : public Typist
{
public:
    Casual(string n, int i, int ts) : Typist(n, i, ts) {}

    void displayInfo() override
    {
        Typist::displayInfo();
        cout << ", Status: Casual" << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    Teacher t("Alice", 1, "Math");
    Officer o("Bob", 2, "HR");
    Regular r("Charlie", 3, 75);
    Casual c("David", 4, 60);

    t.displayInfo();
    o.displayInfo();
    r.displayInfo();
    c.displayInfo();

    return 0;
}
