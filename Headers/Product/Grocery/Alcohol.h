#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_ALCOHOL_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_ALCOHOL_H
#include <iostream>

using namespace std;

#include "../Grocery.h"

class Alcohol : public Grocery
{
public:
    // Constructors
    Alcohol()
    {
        this->liter = 0;
        this->percentages = 0;
    }

    Alcohol(string name, double price, int kcal, double liter, double percentages) : Grocery(name, price, kcal)
    {
        this->liter = liter;
        this->percentages = percentages;
    }

    // Getters
    double getLiter()
    {
        return this->liter;
    }

    double getPercentages()
    {
        return this->percentages;
    }

    // Setters
    void setLiter(double liter)
    {
        this->liter = liter;
    }

    void setPercentages(double percentages)
    {
        this->percentages = percentages;
    }

private:
    double liter;
    double percentages;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_ALCOHOL_H
