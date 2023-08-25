#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_CLOTHING_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_CLOTHING_H
#include <iostream>

using namespace std;

#include "../Product.h"

class Clothing : public Product
{
public:
    // Constructors
    Clothing()
    {
        this->size = "Unknown";
    }

    Clothing(string name, int price, string size) : Product(name, price)
    {
        this->size = size;
    }

    // Getters
    string getSize()
    {
        return this->size;
    }

    // Setters
    void setSise(string size)
    {
        this->size = size;
    }

    // Methods
    void description()
    {
        cout << "---Clothing---" << endl;
        cout << "\t" << this->name << endl;
        cout << "\t" << this->size << " size" << endl;
        cout << "\t" << this->price << "$" << endl;
    }

private:
    string size;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_CLOTHING_H
