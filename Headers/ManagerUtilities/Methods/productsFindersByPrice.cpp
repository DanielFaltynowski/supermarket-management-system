#include "../../Manager.h"

void Manager::findGroceryByPrice(double price)
{
    for (int i = 0; i < groceriesCounter; i++)
    {
        if (groceries[i].getPrice() <= price)
        {
            cout << "GroceriesID: " << i << endl;
            groceries[i].description();
        }
    }
}

void Manager::findAlcoholByPrice(double price)
{
    for (int i = 0; i < alcoholsCounter; i++)
    {
        if (alcohols[i].getPrice() <= price)
        {
            cout << "AlcoholsID: " << i << endl;
            alcohols[i].description();
        }
    }
}

void Manager::findBeverageByPrice(double price)
{
    for (int i = 0; i < beveragesCounter; i++)
    {
        if (beverages[i].getPrice() <= price)
        {
            cout << "BeveragesID: " << i << endl;
            beverages[i].description();
        }
    }
}

void Manager::findBreadByPrice(double price)
{
    for (int i = 0; i < breadsCounter; i++)
    {
        if (breads[i].getPrice() <= price)
        {
            cout << "BreadsID: " << i << endl;
            breads[i].description();
        }
    }
}

void Manager::findClothingByPrice(double price)
{
    for (int i = 0; i < clothesCounter; i++)
    {
        if (clothes[i].getPrice() <= price)
        {
            cout << "ClothesID: " << i << endl;
            clothes[i].description();
        }
    }
}

void Manager::findToyByPrice(double price)
{
    for (int i = 0; i < toysCounter; i++)
    {
        if (toys[i].getPrice() == price)
        {
            cout << "ToysID: " << i << endl;
            toys[i].description();
        }
    }
}