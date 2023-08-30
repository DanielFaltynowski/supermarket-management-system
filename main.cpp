#include <iostream>
#include "Headers/Manager.h"

using namespace std;

Manager manager(300);

int optionOne_printProducts();
void optionTwo_printProductsByName();
void optionThree_printProductsByPrice();
void optionFour_printProductsById();
void optionFive_createProduct();
void optionSix_editProduct();
void optionSeven_deleteProduct();
void optionEight_employees();
void pressAnyKeyToContinue();

int main()
{
    manager.importDataBase();
    cout << "Database imported!" << endl;
    bool breaker = true;

    while (breaker)
    {
        int option;
        cout << "----- MAIN MENU -----" << endl;
        cout << "Choose option:\n"
                "\t1. Print Products.\n"
                "\t2. Search products by name.\n"
                "\t3. Search products by price.\n"
                "\t4. Search products by id.\n"
                "\t5. Create product.\n"
                "\t6. Edit product.\n"
                "\t7. Delete product.\n"
                "\t8. Manage employees.\n"
                "\t9. Exit." << endl << endl;
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
                optionThree_printProductsByPrice();
                break;

            case 4:
                optionFour_printProductsById();
                break;

            case 5:
                optionFive_createProduct();
                break;

            case 6:
                optionSix_editProduct();
                break;

            case 7:
                optionSeven_deleteProduct();
                break;

            case 8:
                optionEight_employees();
                break;

            case 9:
                breaker = false;
                break;

            default:
                cout << "An incorrect number has been entered." << endl;
                break;
        }
    }

    return 0;
}

int optionOne_printProducts()
{
    cout << "----- PRINT PRODUCTS -----" << endl;
    cout << "Choose option:\n"
            "\t1. Print all products\n"
            "\t2. Print groceries\n"
            "\t3. Print breads\n"
            "\t4. Print beverages\n"
            "\t5. Print alcohols\n"
            "\t6. Print clothes\n"
            "\t7. Print toys\n"
            "\t8. Back to main menu\n" << endl << endl;

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
    pressAnyKeyToContinue();
}

void optionTwo_printProductsByName()
{
    cout << "----- PRINT PRODUCTS BY NAME -----" << endl;
    cout << "Choose option:\n"
            "\t1. Print all products\n"
            "\t2. Print groceries\n"
            "\t3. Print breads\n"
            "\t4. Print beverages\n"
            "\t5. Print alcohols\n"
            "\t6. Print clothes\n"
            "\t7. Print toys\n"
            "\t8. Back to main menu" << endl << endl;

    int option;
    cin >> option;

    string name;
    cout << "Provide the product name." << endl;
    getline(cin, name);
    getline(cin, name);

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
    pressAnyKeyToContinue();
}

void optionThree_printProductsByPrice()
{
    int option;
    cout << "----- PRINT PRODUCTS BY PRICE -----" << endl;
    cout << "Choose option:\n"
            "\t1. Print all products\n"
            "\t2. Print groceries\n"
            "\t3. Print breads\n"
            "\t4. Print beverages\n"
            "\t5. Print alcohols\n"
            "\t6. Print clothes\n"
            "\t7. Print toys\n"
            "\t8. Back to main menu" << endl << endl;
    cin >> option;

    double price;
    cout << "Provide the product price." << endl;
    cin >> price;

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
            manager.findToyByPrice(price);
            break;

        case 8:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;

    }
    pressAnyKeyToContinue();
}

void optionFour_printProductsById()
{
    int option;
    cout << "----- PRINT PRODUCT BY ID -----" << endl;
    cout << "Choose option:\n"
            "\t1. Print groceries\n"
            "\t2. Print breads\n"
            "\t3. Print beverages\n"
            "\t4. Print alcohols\n"
            "\t5. Print clothes\n"
            "\t6. Print toys\n"
            "\t7. Back to main menu" << endl << endl;
    cin >> option;

    int id;
    cout << "Provide the product ID." << endl;
    cin >> id;

    switch(option)
    {
        case 1:
            manager.findGroceryById(id);
            break;

        case 2:
            manager.findBreadById(id);
            break;

        case 3:
            manager.findBeverageById(id);
            break;

        case 4:
            manager.findAlcoholById(id);
            break;

        case 5:
            manager.findClothingById(id);
            break;

        case 6:
            manager.findClothingById(id);
            break;

        case 7:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;

    }
    pressAnyKeyToContinue();
}

void optionFive_createProduct()
{
    int option;
    cout << "----- CREATE PRODUCT -----" << endl;
    cout << "Choose option:\n"
            "\t1. Create grocery\n"
            "\t2. Create bread\n"
            "\t3. Create beverage\n"
            "\t4. Create alcohol\n"
            "\t5. Create clothing\n"
            "\t6. Create toy\n"
            "\t7. Back to main menu" << endl << endl;
    cin >> option;

    string name;
    double price;
    int kcal;
    double liter;
    double percent;
    double kilograms;
    string size;
    unsigned int age;

    cout << "Provide the product name." << endl;
    getline(cin, name);
    getline(cin, name);

    cout << "Provide the product price." << endl;
    cin >> price;

    switch(option)
    {
        case 1:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            manager.createGrocery(name, price, kcal);
            break;

        case 2:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            cout << "Provide the product weight." << endl;
            cin >> kilograms;

            manager.createBread(name, price, kcal, kilograms);
            break;

        case 3:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            cout << "Provide the product volume." << endl;
            cin >> liter;

            manager.createBeverage(name, price, kcal, liter);
            break;

        case 4:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            cout << "Provide the product volume." << endl;
            cin >> liter;

            cout << "Provide the product percentages" << endl;
            cin >> percent;

            manager.createAlcohol(name, price, kcal, liter, percent);
            break;

        case 5:
            cout << "Provide the product size." << endl;
            getline(cin, size);

            manager.createClothing(name, price, size);
            break;

        case 6:
            cout << "Provide the product minimum age." << endl;
            cin >> age;

            manager.createToy(name, price, age);
            break;

        case 7:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;
            break;


    }
    pressAnyKeyToContinue();
}

void optionSix_editProduct()
{
    int option;
    cout << "----- EDIT PRODUCT -----" << endl;
    cout << "Choose option:\n"
            "\t1. Edit grocery\n"
            "\t2. Edit bread\n"
            "\t3. Edit beverage\n"
            "\t4. Edit alcohol\n"
            "\t5. Edit clothing\n"
            "\t6. Edit toy\n"
            "\t7. Back to main menu" << endl << endl;
    cin >> option;

    int id;
    cout << "Provide the product ID." << endl;
    cin >> id;

    string name;
    double price;
    int kcal;
    double liter;
    double percent;
    double kilograms;
    string size;
    unsigned int age;

    cout << "Provide the product name." << endl;
    getline(cin, name);
    getline(cin, name);

    cout << "Provide the product price." << endl;
    cin >> price;

    switch(option)
    {
        case 1:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            manager.editGrocery(id, name, price, kcal);
            break;

        case 2:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            cout << "Provide the product weight." << endl;
            cin >> kilograms;

            manager.editBread(id, name, price, kcal, kilograms);
            break;

        case 3:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            cout << "Provide the product volume." << endl;
            cin >> liter;

            manager.editBeverage(id, name, price, kcal, liter);
            break;

        case 4:
            cout << "Provide the product kcal." << endl;
            cin >> kcal;

            cout << "Provide the product volume." << endl;
            cin >> liter;

            cout << "Provide the product percentages" << endl;
            cin >> percent;

            manager.editAlcohol(id, name, price, kcal, liter, percent);
            break;

        case 5:
            cout << "Provide the product size." << endl;
            getline(cin, size);

            manager.editClothing(id, name, price, size);
            break;

        case 6:
            cout << "Provide the product minimum age." << endl;
            cin >> age;

            manager.editToy(id, name, price, age);
            break;

        case 7:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;
            break;


    }
    pressAnyKeyToContinue();
}

void optionSeven_deleteProduct()
{
    int option;
    cout << "----- DELETE PRODUCT -----" << endl;
    cout << "Choose option:\n"
            "\t1. Delete grocery\n"
            "\t2. Delete bread\n"
            "\t3. Delete beverage\n"
            "\t4. Delete alcohol\n"
            "\t5. Delete clothing\n"
            "\t6. Delete toy\n"
            "\t7. Back to main menu" << endl << endl;
    cin >> option;

    int id;
    cout << "Provide the product ID." << endl;
    cin >> id;

    switch(option)
    {
        case 1:
            manager.deleteGrocery(id);
            break;

        case 2:
            manager.deleteBread(id);
            break;

        case 3:
            manager.deleteBeverage(id);
            break;

        case 4:
            manager.deleteAlcohol(id);
            break;

        case 5:
            manager.deleteClothing(id);
            break;

        case 6:
            manager.deleteToy(id);
            break;

        case 7:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;
            break;
    }
    pressAnyKeyToContinue();
}

void optionEight_employees()
{
    int option;
    cout << "----- MANAGE EMPLOYEES -----" << endl;
    cout << "Choose option:\n"
            "\t1. Print all employees.\n"
            "\t2. Find employees by first name.\n"
            "\t3. Find employees by last name.\n"
            "\t4. Find employees by position.\n"
            "\t5. Find employees by salary.\n"
            "\t6. Add employee.\n"
            "\t7. Edit employee.\n"
            "\t8. Delete employee.\n"
            "\t9. Back to main menu." << endl << endl;
    cin >> option;

    string text1;
    double text2;

    int id;
    string firstName;
    string lastName;
    string contact;
    string position;
    double earnings;

    switch (option)
    {
        case 1:
            manager.printAllEmployees();
            break;

        case 2:
            cout << "Provide the first name." << endl;
            getline(cin, firstName);
            getline(cin, firstName);
            manager.findEmployeeByFirstName(firstName);
            break;

        case 3:
            cout << "Provide the last name." << endl;
            getline(cin, lastName);
            getline(cin, lastName);
            manager.findEmployeeByLastName(lastName);
            break;

        case 4:
            cout << "Provide position." << endl;
            getline(cin, position);
            getline(cin, position);
            manager.findEmployeeByPosition(position);
            break;

        case 5:
            cout << "Provide earnings." << endl;
            cin >> earnings;
            manager.findEmployeeBySalary(earnings);
            break;

        case 6:
            cout << "Provide the first name." << endl;
            getline(cin, firstName);
            getline(cin, firstName);
            cout << "Provide the last name." << endl;
            getline(cin, lastName);
            cout << "Provide contact." << endl;
            getline(cin, contact);
            cout << "Provide position." << endl;
            getline(cin, position);
            cout << "Provide earnings." << endl;
            cin >> earnings;
            manager.createEmployee(firstName, lastName, contact, position, earnings);
            break;

        case 7:
            cout << "Provide ID." << endl;
            cin >> id;
            cout << "Provide the first name." << endl;
            getline(cin, firstName);
            getline(cin, firstName);
            cout << "Provide the last name." << endl;
            getline(cin, lastName);
            cout << "Provide contact." << endl;
            getline(cin, contact);
            cout << "Provide position." << endl;
            getline(cin, position);
            cout << "Provide earnings." << endl;
            cin >> earnings;
            manager.editEmployee(id, firstName, lastName, contact, position, earnings);
            break;

        case 8:
            cout << "Provide ID." << endl;
            cin >> id;
            manager.deleteEmployee(id);
            break;

        case 9:
            break;

        default:
            cout << "An incorrect number has been entered." << endl;
            break;
    }

    pressAnyKeyToContinue();
}

void pressAnyKeyToContinue()
{
    string temp;
    cout << "Press any key to continue!";
    getline(cin, temp);
    getline(cin, temp);
}