#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_GROCERY_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_GROCERY_H
#include <iostream>

using namespace std;

#include "../Product.h"

class Grocery : public Product
{
public:
    // Constructors
    Grocery()
    {
        this->kcal = 0;
    }

    Grocery(string name, double price, int kcal) : Product(name, price)
    {
        this->kcal = kcal;
    }

    // Getters
    int getKcal()
    {
        return this->kcal;
    }

    // Setters
    void setKcal(int kcal)
    {
        this->kcal = kcal;
    }

    // Methods
    void description()
    {
        cout << "---Grocery---" << endl;
        cout << "\t" << this->name << endl;
        cout << "\t" << this->kcal << endl;
        cout << "\t" << this->price << endl;
    }


protected:
    int kcal;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_GROCERY_H
