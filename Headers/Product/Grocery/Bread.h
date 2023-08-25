#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_BREAD_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_BREAD_H
#include <iostream>

using namespace std;

#include "../Grocery.h"

class Bread : public Grocery
{
public:
    // Constructors
    Bread()
    {
        this->kilograms = 0;
    }

    Bread(string name, double price, int kcal, double kilograms) : Grocery(name, price, kcal)
    {
        this->kilograms = kilograms;
    }

    // Getters
    double getKilograms()
    {
        return this->kilograms;
    }

    // Setters
    void setKilograms(double kilograms)
    {
        this->kilograms = kilograms;
    }

private:
    double kilograms;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_BREAD_H