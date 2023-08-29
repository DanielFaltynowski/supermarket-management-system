#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_MANAGER_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_MANAGER_H
#include "Employee.h"
#include "Product/Grocery.h"
#include "Product/Toy.h"
#include "Product/Clothing.h"
#include "Product/Grocery/Alcohol.h"
#include "Product/Grocery/Beverage.h"
#include "Product/Grocery/Bread.h"
#include <iostream>
#include <fstream>
#include <ios>
#include <vector>
#include <cstdio>
#include <boost/algorithm/string.hpp>

using namespace std;

class Manager
{
public:

    // Constructor & Destructor: Headers/ManagerUtilities/Constructors

    Manager(int size);
    ~Manager();


    // Methods: Headers/ManagerUtilities/Methods

    void importDataBase();
    void importProducts();
    void importEmployees();

    void createGrocery(string name, double price, int kcal);
    void createAlcohol(string name, double price, int kcal, double liter, double percentages);
    void createBeverage(string name, double price, int kcal, double percentages);
    void createBread(string name, double price, int kcal, double kilograms);
    void createClothing(string name, double price, string size);
    void createToy(string name, double price, unsigned short age);
    void createEmployee(string firstName, string lastName, string contact, string position, double earnings);

    void printAllProducts();
    void printGroceries();
    void printAlcohols();
    void printBeverages();
    void printBreads();
    void printClothes();
    void printToys();
    void printAllEmployees();

    void findProductByName(string name);
    void findGroceryByName(string name);
    void findAlcoholByName(string name);
    void findBeverageByName(string name);
    void findBreadByName(string name);
    void findClothingByName(string name);
    void findToyByName(string name);

    void findProductByPrice(double price);
    void findGroceryByPrice(double price);
    void findAlcoholByPrice(double price);
    void findBeverageByPrice(double price);
    void findBreadByPrice(double price);
    void findClothingByPrice(double price);
    void findToyByPrice(double price);

    void findProductById(int id);
    void findGroceryById(int id);
    void findAlcoholById(int id);
    void findBeverageById(int id);
    void findBreadById(int id);
    void findClothingById(int id);
    void findToyById(int id);

    void findEmployeeByFirstName(string name);
    void findEmployeeByLastName(string name);
    void findEmployeeByPosition(string name);
    void findEmployeeBySalary(double salary);

    void editGrocery(int id, string name, double price, int kcal);
    void editAlcohol(int id, string name, double price, int kcal, double liter, double percentages);
    void editBeverage(int id, string name, double price, int kcal, double liter);
    void editBread(int id, string name, double price, int kcal, double kilograms);
    void editClothing(int id, string name, double price, string size);
    void editToy(int id, string name, double price, unsigned short age);
    void editEmployee(int id, string firstName, string lastName, string contact, string position, double earnings);

    void deleteGrocery(int id);
    void deleteAlcohol(int id);
    void deleteBeverage(int id);
    void deleteBread(int id);
    void deleteClothing(int id);
    void deleteToy(int id);
    void deleteEmployee(int id);


private:
    Grocery *groceries;
    int groceriesCounter;

    Alcohol *alcohols;
    int alcoholsCounter;

    Beverage *beverages;
    int beveragesCounter;

    Bread *breads;
    int breadsCounter;

    Clothing *clothes;
    int clothesCounter;

    Toy *toys;
    int toysCounter;

    Employee *employees;
    int employeesCounter;

    int size;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_MANAGER_H
