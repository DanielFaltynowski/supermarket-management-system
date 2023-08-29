#include "../../Manager.h"

void Manager::findEmployeeByFirstName(string name)
{
    for (int i = 0; i < employeesCounter; i++)
    {
        if (employees[i].getFirstName() == name)
        {
            cout << "EmployeeID: " << i << endl;
            employees[i].personalDetails();
        }
    }
}

void Manager::findEmployeeByLastName(string name)
{
    for (int i = 0; i < employeesCounter; i++)
    {
        if (employees[i].getLastName() == name)
        {
            cout << "EmployeeID: " << i << endl;
            employees[i].personalDetails();
        }
    }
}

void Manager::findEmployeeByPosition(string name)
{
    for (int i = 0; i < employeesCounter; i++)
    {
        if (employees[i].getPosition() == name)
        {
            cout << "EmployeeID: " << i << endl;
            employees[i].personalDetails();
        }
    }
}

void Manager::findEmployeeBySalary(double salary)
{
    for (int i = 0; i < employeesCounter; i++)
    {
        if (employees[i].getEarnings() == salary)
        {
            cout << "EmployeeID: " << i << endl;
            employees[i].personalDetails();
        }
    }
}