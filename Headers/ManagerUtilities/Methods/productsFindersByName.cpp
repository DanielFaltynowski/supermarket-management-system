#include "../../Manager.h"

void Manager::findProductByName(string name)
{
    findGroceryByName(name);
    findBreadByName(name);
    findBeverageByName(name);
    findAlcoholByName(name);
    findToyByName(name);
    findClothingByName(name);
}

void Manager::findGroceryByName(string name)
{
    for (int i = 0; i < groceriesCounter; i++)
    {
        if (groceries[i].getName() == name)
        {
            cout << "GroceriesID: " << i << endl;
            groceries[i].description();
        }
    }
}

void Manager::findAlcoholByName(string name)
{
    for (int i = 0; i < alcoholsCounter; i++)
    {
        if (alcohols[i].getName() == name)
        {
            cout << "AlcoholsID: " << i << endl;
            alcohols[i].description();
        }
    }
}

void Manager::findBeverageByName(string name)
{
    for (int i = 0; i < beveragesCounter; i++)
    {
        if (beverages[i].getName() == name)
        {
            cout << "BeveragesID: " << i << endl;
            beverages[i].description();
        }
    }
}

void Manager::findBreadByName(string name)
{
    for (int i = 0; i < breadsCounter; i++)
    {
        if (breads[i].getName() == name)
        {
            cout << "BreadsID: " << i << endl;
            breads[i].description();
        }
    }
}

void Manager::findClothingByName(string name)
{
    for (int i = 0; i < clothesCounter; i++)
    {
        if (clothes[i].getName() == name)
        {
            cout << "ClothesID: " << i << endl;
            clothes[i].description();
        }
    }
}

void Manager::findToyByName(string name)
{
    for (int i = 0; i < toysCounter; i++)
    {
        if (toys[i].getName() == name)
        {
            cout << "ToysID: " << i << endl;
            toys[i].description();
        }
    }
}
