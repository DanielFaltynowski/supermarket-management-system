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
        this->amount = 0;
    }

    Product(string name, double price)
    {
        this->name = name;
        this->price = price;
        this->amount = 0;
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

    int getAmount()
    {
        return this->amount;
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

    // Methods
    virtual void description() = 0;

    void addProduct()
    {
        this->amount++;
        cout << this->name << ": Added one!" << endl;
    }

    void addProduct(int number)
    {
        this->amount = this->amount + number;
        cout << this->name << ": Added " << number << " products!" << endl;
    }

    void removeProduct()
    {
        if (this->amount > 0)
        {
            this->amount--;
            cout << this->name << ": Removed one!" << endl;
        }
        else
        {
            cout << this->name << ": cannot remove product!" << endl;
        }
    }

    void removeProduct(int number)
    {
        if (this->amount - number >= 0)
        {
            this->amount--;
            cout << this->name << ": Added " << number << " products!" << endl;
        }
        else
        {
            cout << this->name << ": cannot remove product!" << endl;
        }
    }

protected:
    string name;
    double price;
    int amount;
};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_PRODUCT_H
