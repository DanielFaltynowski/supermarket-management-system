#include <iostream>
#include "Headers/Manager.h"

using namespace std;

Manager manager(100);

int optionOne_printProducts()
{
    int option;
    cin >> option;

    switch(option)
    {
        case 1:
            manager.printAllProducts();
            break;

        case 2:
            manager.printGroceries();
            break;
        case 3:
            manager.printBreads();
            break;

        case 4:
            manager.printBeverages();
            break;

        case 5:
            manager.printAlcohols();
            break;

        case 6:
            manager.printClothes();
            break;

        case 7:
            manager.printToys();
            break;

        case 8:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;

    }
}

void optionTwo_printProductsByName()
{
    string name;
    getline(cin, name);

    int option;
    cin >> option;

    switch(option)
    {
        case 1:
            manager.findProductByName(name);
            break;

        case 2:
            manager.findGroceryByName(name);
            break;

        case 3:
            manager.findBreadByName(name);
            break;

        case 4:
            manager.findBeverageByName(name);
            break;

        case 5:
            manager.findAlcoholByName(name);
            break;

        case 6:
            manager.findClothingByName(name);
            break;

        case 7:
            manager.findClothingByName(name);
            break;

        case 8:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;

    }
}

void optionThtee_printProductsByPrice()
{
    double price;
    cin >> price;

    int option;
    cin >> option;

    switch(option)
    {
        case 1:
            manager.findProductByPrice(price);
            break;

        case 2:
            manager.findGroceryByPrice(price);
            break;

        case 3:
            manager.findBreadByPrice(price);
            break;

        case 4:
            manager.findBeverageByPrice(price);
            break;

        case 5:
            manager.findAlcoholByPrice(price);
            break;

        case 6:
            manager.findClothingByPrice(price);
            break;

        case 7:
            manager.findClothingByPrice(price);
            break;

        case 8:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;

    }
}

void optionThree_printProductsById()
{
    int id;
    cin >> id;

    int option;
    cin >> option;

    switch(option)
    {
        case 1:
            manager.findProductById(id);
            break;

        case 2:
            manager.findGroceryById(id);
            break;

        case 3:
            manager.findBreadById(id);
            break;

        case 4:
            manager.findBeverageById(id);
            break;

        case 5:
            manager.findAlcoholById(id);
            break;

        case 6:
            manager.findClothingById(id);
            break;

        case 7:
            manager.findClothingById(id);
            break;

        case 8:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;

    }
}

int main()
{
    manager.importDataBase();
    cout << "Database imported!";
    bool breaker = true;

    while (breaker)
    {
        int option;
        cin >> option;

        switch(option)
        {
            case 1:
                optionOne_printProducts();
                break;

            case 2:
                optionTwo_printProductsByName();
                break;

            case 3:
                optionThree_printProductsById();
                break;

            case 100:
                breaker = false;
                break;

            default:
                cout << "An incorrect number has been entered." << endl;
        }
    }

    return 0;
}