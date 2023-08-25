#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_BEVERAGE_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_BEVERAGE_H
#include <iostream>

using namespace std;

#include "../Grocery.h"

class Beverage : public Grocery
{
public:
    // Constructors
    Beverage()
    {
        this->liter = 0;
    }

    Beverage(string name, double price, int kcal, double liter) : Grocery(name, price, kcal)
    {
        this->liter = liter;
    }

    // Getters
    double getLiter()
    {
        return this->liter;
    }

    // Setters
    void setLiter(double liter)
    {
        this->liter = liter;
    }

    // Methods
    void description()
    {
        cout << "---Beverage---" << endl;
        cout << "\t" << this->name << endl;
        cout << "\t" << this->kcal << endl;
        cout << "\t" << this->liter << endl;
        cout << "\t" << this->price << endl;
    }

private:
    double liter;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_BEVERAGE_H
