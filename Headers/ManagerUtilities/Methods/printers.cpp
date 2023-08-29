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
        cout << "GroceriesID: " << i << endl;
        groceries[i].description();
    }
}

void Manager::printAlcohols()
{
    for (int i = 0; i < alcoholsCounter; i++)
    {
        cout << "AlcoholsID: " << i << endl;
        alcohols[i].description();
    }
}

void Manager::printBeverages()
{
    for (int i = 0; i < beveragesCounter; i++)
    {
        cout << "BeveragesID: " << i << endl;
        beverages[i].description();
    }
}

void Manager::printBreads()
{
    for (int i = 0; i < breadsCounter; i++)
    {
        cout << "BreadsID: " << i << endl;
        breads[i].description();
    }
}

void Manager::printClothes()
{
    for (int i = 0; i < clothesCounter; i++)
    {
        cout << "ClothesID: " << i << endl;
        clothes[i].description();
    }
}

void Manager::printToys()
{
    for (int i = 0; i < toysCounter; i++)
    {
        cout << "ToysID: " << i << endl;
        toys[i].description();
    }
}

void Manager::printAllEmployees()
{
    for (int i = 0; i < employeesCounter; i++)
    {
        cout << "EmployeesID: " << i << endl;
        employees[i].personalDetails();
    }
}