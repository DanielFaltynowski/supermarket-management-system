#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_EMPLOYEE_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee
{
private:
    // Constructors
    Employee(string firstName, string lastName, string contact, string position, double earnings)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->contact = contact;
        this->position = position;
        this->earnings = earnings;
    }

    // Getters
    string getFirstName()
    {
        return this->firstName;
    }

    string getLastName()
    {
        return this->lastName;
    }

    string getContact()
    {
        return this->contact;
    }

    string getPosition()
    {
        return this->position;
    }

    double getEarnings()
    {
        return this->earnings;
    }

    // Setters
    void setFirstName(string firstName)
    {
        this->firstName = firstName;
    }

    void setLastName(string lastName)
    {
        this->lastName = lastName;
    }

    void setContact(string contact)
    {
        this->contact = contact;
    }

    void setPosition(string position)
    {
        this->position = position;
    }

    void setEarnings(double earnings)
    {
        this->earnings = earnings;
    }

    // Methods
    void personalDetails()
    {
        cout << "---Employee---" << endl;
        cout << "\t" << this->firstName << endl;
        cout << "\t" << this->lastName << endl;
        cout << "\t" << "Position: " << this->position << endl;
        cout << "\t" << "Earnings: " << this->earnings << endl;
        cout << "\t" << "Contact: " << this->contact << endl;
    }

protected:
    string firstName;
    string lastName;
    string contact;
    string position;
    double earnings;
};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_EMPLOYEE_H
