#include "../../Manager.h"

void Manager::printAllProducts()
{
    printGroceries();
    printBreads();
    printBeverages();
    printAlcohols();
    printToys();
    printClothes();
}

void Manager::printGroceries()
{
    for (int i = 0; i < groceriesCounter; i++)
    {
        if (groceries[i].getName() != "Unknown")
        {
            cout << "GroceriesID: " << i << endl;
            groceries[i].description();

        }
    }
}

void Manager::printAlcohols()
{
    for (int i = 0; i < alcoholsCounter; i++)
    {
        if (alcohols[i].getName() != "Unknown")
        {
            cout << "AlcoholsID: " << i << endl;
            alcohols[i].description();
        }
    }
}

void Manager::printBeverages()
{
    for (int i = 0; i < beveragesCounter; i++)
    {
        if (beverages[i].getName() != "Unknown")
        {
            cout << "BeveragesID: " << i << endl;
            beverages[i].description();
        }
    }
}

void Manager::printBreads()
{
    for (int i = 0; i < breadsCounter; i++)
    {
        if (breads[i].getName() != "Unknown")
        {
            cout << "BreadsID: " << i << endl;
            breads[i].description();
        }
    }
}

void Manager::printClothes()
{
    for (int i = 0; i < clothesCounter; i++)
    {
        if (clothes[i].getName() != "Unknown")
        {
            cout << "ClothesID: " << i << endl;
            clothes[i].description();
        }
    }
}

void Manager::printToys()
{
    for (int i = 0; i < toysCounter; i++)
    {
        if (toys[i].getName() != "Unknown")
        {
            cout << "ToysID: " << i << endl;
            toys[i].description();
        }
    }
}

void Manager::printAllEmployees()
{
    for (int i = 0; i < employeesCounter; i++)
    {
        if (employees[i].getLastName() != "Unknown")
            cout << "EmployeesID: " << i << endl;
            employees[i].personalDetails();
        }
    }
}