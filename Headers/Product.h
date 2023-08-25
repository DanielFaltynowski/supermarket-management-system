#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_PRODUCT_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_PRODUCT_H
#include <iostream>

using namespace std;

class Product
{
public:
    // Constructors
    Product()
    {
        this->name = "Unknown";
        this->price = 0;
    }

    Product(string name, double price)
    {
        this->name = name;
        this->price = price;
    }

    // Getters
    string getName()
    {
        return this->name;
    }

    double getPrice()
    {
        return this->price;
    }

    // Setters
    void setName(string name)
    {
        this->name = name;
    }

    void setPrice(double price)
    {
        this->price = price;
    }

protected:
    string name;
    double price;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_PRODUCT_H
