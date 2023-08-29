#include "../../Manager.h"

void Manager::createGrocery(string name, double price, int kcal)
{
    if (this->groceriesCounter < this->size)
    {
        Grocery grocery(name, price, kcal);
        this->groceries[this->groceriesCounter] = grocery;
        this->groceriesCounter++;
    }
}

void Manager::createAlcohol(string name, double price, int kcal, double liter, double percentages)
{
    if (this->alcoholsCounter < this->size)
    {
        Alcohol alcohol(name, price, kcal, liter, percentages);
        this->alcohols[this->alcoholsCounter] = alcohol;
        this->alcoholsCounter++;
    }
}

void Manager::createBeverage(string name, double price, int kcal, double percentages)
{
    if (this->beveragesCounter < this->size)
    {
        Beverage beverage(name, price, kcal, percentages);
        this->beverages[this->beveragesCounter] = beverage;
        this->beveragesCounter++;
    }
}

void Manager::createBread(string name, double price, int kcal, double kilograms)
{
    if (this->breadsCounter < this->size)
    {
        Bread bread(name, price, kcal, kilograms);
        this->breads[this->breadsCounter] = bread;
        this->breadsCounter++;
    }
}

void Manager::createClothing(string name, double price, string size)
{
    if (this->clothesCounter < this->size)
    {
        Clothing clothing(name, price, size);
        this->clothes[this->clothesCounter] = clothing;
        this->clothesCounter++;
    }
}

void Manager::createToy(string name, double price, unsigned short age)
{
    if (this->toysCounter < this->size)
    {
        Toy toy(name, price, age);
        this->toys[this->toysCounter] = toy;
        this->toysCounter++;
    }
}

void Manager::createEmployee(string firstName, string lastName, string contact, string position, double earnings)
{
    Employee employee(firstName, lastName, contact, position, earnings);
    this->employees[this->employeesCounter] = employee;
    this->employeesCounter++;
}