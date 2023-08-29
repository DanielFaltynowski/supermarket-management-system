#include "../../Manager.h"

void Manager::findGroceryById(int id)
{
    if (groceries[id].getName() != "Unknown")
    {
        cout << "GroceriesID: " << id << endl;
        groceries[id].description();

    }
}

void Manager::findAlcoholById(int id)
{
    if (alcohols[id].getName() != "Unknown")
    {
        cout << "AlcoholsID: " << id << endl;
        alcohols[id].description();
    }
}

void Manager::findBeverageById(int id)
{
    if (beverages[id].getName() != "Unknown")
    {
        cout << "BeveragesID: " << id << endl;
        beverages[id].description();
    }
}

void Manager::findBreadById(int id)
{
    if (breads[id].getName() != "Unknown")
    {
        cout << "BreadsID: " << id << endl;
        breads[id].description();
    }
}

void Manager::findClothingById(int id)
{
    if (clothes[id].getName() != "Unknown")
    {
        cout << "ClothesID: " << id << endl;
        clothes[id].description();
    }
}

void Manager::findToyById(int id)
{
    if (toys[id].getName() != "Unknown")
    {
        cout << "ToysID: " << id << endl;
        toys[id].description();
    }
}