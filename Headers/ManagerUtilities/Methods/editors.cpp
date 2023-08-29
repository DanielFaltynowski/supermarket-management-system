#include "../../Manager.h"

void Manager::editGrocery(int id, string name, double price, int kcal)
{
    groceries[id].setName(name);
    groceries[id].setPrice(price);
    groceries[id].setKcal(kcal);
}

void Manager::editAlcohol(int id, string name, double price, int kcal, double liter, double percentages)
{
    alcohols[id].setName(name);
    alcohols[id].setPrice(price);
    alcohols[id].setKcal(kcal);
    alcohols[id].setLiter(liter);
    alcohols[id].setPercentages(percentages);
}

void Manager::editBeverage(int id, string name, double price, int kcal, double liter)
{
    beverages[id].setName(name);
    beverages[id].setPrice(price);
    beverages[id].setKcal(kcal);
    beverages[id].setLiter(liter);
}

void Manager::editBread(int id, string name, double price, int kcal, double kilograms)
{
    breads[id].setName(name);
    breads[id].setPrice(price);
    breads[id].setKcal(kcal);
    breads[id].setKilograms(kilograms);
}

void Manager::editClothing(int id, string name, double price, string size)
{
    clothes[id].setName(name);
    clothes[id].setPrice(price);
    clothes[id].setSise(size);
}

void Manager::editToy(int id, string name, double price, unsigned short age)
{
    toys[id].setName(name);
    toys[id].setPrice(price);
    toys[id].setAge(age);
}