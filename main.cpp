#include <iostream>
#include "Headers/Manager.h"

using namespace std;

void showAllProducts();
void showGroceries();
void showAlcohols();
void showBeverages();
void showBreads();
void showClothes();
void showToys();
void showEmployees();
void showAllProducts(double price);
void showGroceries(double price);
void showAlcohols(double price);
void showBeverages(double price);
void showBreads(double price);
void showClothes(double price);
void showToys(double price);
void showEmployees(double salary);
void findProductsByName(string name);
void createGrocery();

int main()
{
    Manager manager(100);
    manager.importDataBase();
    manager.createGrocery("Goras", 8.9, 86);

    return 0;
}