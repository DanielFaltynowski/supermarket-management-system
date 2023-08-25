#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_TOY_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_TOY_H
#include <iostream>

using namespace std;

#include "../Product.h"

class Toy : public Product
{
public:
    // Constructors
    Toy()
    {
        this->age = 0;
    }

    Toy(string name, double price, unsigned short age) : Product(name, price)
    {
        this->age = age;
    }

    // Getters
    unsigned short getAge()
    {
        return this->age;
    }

    // Setters
    void setAge(unsigned short age)
    {
        this->age = age;
    }

    // Methods
    void description()
    {
        cout << "---Toy---" << endl;
        cout << "\t" << this->name << endl;
        cout << "\t" << "Recommended age: " << this->age << endl;
        cout << "\t" << this->price << "$" << endl;
    }

protected:
    unsigned short age;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_TOY_H
