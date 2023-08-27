#include <iostream>
//#include "Headers/Product.h"
//#include "Headers/Product/Grocery.h"
//#include "Headers/Product/Toy.h"
//#include "Headers/Product/Clothing.h"
//#include "Headers/Product/Grocery/Alcohol.h"
//#include "Headers/Product/Grocery/Beverage.h"
//#include "Headers/Product/Grocery/Bread.h"
#include "Headers/Manager.h"
#include <ctime>

using namespace std;


int main()
{
    srand(time(0));

    Manager manager(100);
    manager.importDataBase();
    manager.printAllProducts();

    return 0;
}