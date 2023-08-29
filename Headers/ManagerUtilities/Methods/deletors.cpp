#include "../../Manager.h"

void Manager::deleteGrocery(int id)
{
    groceries[id].setName("Unknown");
    groceries[id].setPrice(0);
    groceries[id].setKcal(0);
}

void Manager::deleteAlcohol(int id)
{
    alcohols[id].setName("Unknown");
    alcohols[id].setPrice(0);
    alcohols[id].setKcal(0);
    alcohols[id].setLiter(0);
    alcohols[id].setPercentages(0);
}

void Manager::deleteBeverage(int id)
{
    beverages[id].setName("Unknown");
    beverages[id].setPrice(0);
    beverages[id].setKcal(0);
    beverages[id].setLiter(0);
}

void Manager::deleteBread(int id)
{
    breads[id].setName("Unknown");
    breads[id].setPrice(0);
    breads[id].setKcal(0);
    breads[id].setKilograms(0);
}

void Manager::deleteClothing(int id)
{
    clothes[id].setName("Unknown");
    clothes[id].setPrice(0);
    clothes[id].setSise("Unknown");
}

void Manager::deleteToy(int id)
{
    toys[id].setName("Unknown");
    toys[id].setPrice(0);
    toys[id].setAge(0);
}

void Manager::deleteEmployee(int id)
{
    employees[id].setFirstName("Unknown");
    employees[id].setLastName("Unknown");
    employees[id].setContact("Unknown");
    employees[id].setEarnings(0);
    employees[id].setPosition("Unknown");
}