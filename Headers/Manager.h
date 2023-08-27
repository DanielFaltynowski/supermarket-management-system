#ifndef SUPERMARKET_MANAGEMENT_SYSTEM_MANAGER_H
#define SUPERMARKET_MANAGEMENT_SYSTEM_MANAGER_H
#include "Employee.h"
#include "Product/Grocery.h"
#include "Product/Toy.h"
#include "Product/Clothing.h"
#include "Product/Grocery/Alcohol.h"
#include "Product/Grocery/Beverage.h"
#include "Product/Grocery/Bread.h"

#include <iostream>
#include <fstream>
#include <ios>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

class Manager
{
public:
    Manager(int size)
    {
        this->size = size;

        this->groceries = new Grocery[size];
        this->groceriesCounter = 0;

        this->alcohols = new Alcohol[size];
        this->alcoholsCounter = 0;

        this->beverages = new Beverage[size];
        this->beveragesCounter = 0;

        this->breads = new Bread[size];
        this->breadsCounter = 0;

        this->clothes = new Clothing[size];
        this->clothesCounter = 0;

        this->toys = new Toy[size];
        this->toysCounter = 0;
    }

    // Methods
    void importDataBase()
    {
        fstream File;

        File.open("Data/Products.txt");

        if (File.is_open())
        {
            string text;
            char delimiter = ';';
            while (getline(File, text))
            {
                vector<string> line;
                boost::split(line, text, boost::is_any_of(string(1, delimiter)));

                if (line[0] == "Grocery")
                {
                    createGrocery(line[1], stod(line[2]), stoi(line[3]));
                }

                if (line[0] == "Alcohol")
                {
                    createAlcohol(line[1], stod(line[2]), stoi(line[3]), stod(line[4]), stod(line[5]));
                }

                if (line[0] == "Beverage")
                {
                    createBeverage(line[1], stod(line[2]), stoi(line[3]), stod(line[4]));
                }

                if (line[0] == "Bread")
                {
                    createBread(line[1], stod(line[2]), stoi(line[3]), stod(line[4]));
                }

                if (line[0] == "Clothing")
                {
                    createClothing(line[1], stod(line[2]), line[3]);
                }

                if(line[0] == "Toy")
                {
                    createToy(line[1], stod(line[2]), stoi(line[3]));
                }
            }
            File.close();
        }
        else
        {
            cout << "Cannot import database!" << endl;
        }
    }

    void createGrocery(string name, double price, int kcal)
    {
        if (this->groceriesCounter < this->size)
        {
            Grocery grocery(name, price, kcal);
            this->groceries[this->groceriesCounter] = grocery;
            this->groceriesCounter++;
        }
    }

    void createAlcohol(string name, double price, int kcal, double liter, double percentages)
    {
        if (this->alcoholsCounter < this->size)
        {
            Alcohol alcohol(name, price, kcal, liter, percentages);
            this->alcohols[this->alcoholsCounter] = alcohol;
            this->alcoholsCounter++;
        }
    }

    void createBeverage(string name, double price, int kcal, double percentages)
    {
        if (this->beveragesCounter < this->size)
        {
            Beverage beverage(name, price, kcal, percentages);
            this->beverages[this->beveragesCounter] = beverage;
            this->beveragesCounter++;
        }
    }

    void createBread(string name, double price, int kcal, double kilograms)
    {
        if (this->breadsCounter < this->size)
        {
            Bread bread(name, price, kcal, kilograms);
            this->breads[this->breadsCounter] = bread;
            this->breadsCounter++;
        }
    }

    void createClothing(string name, double price, string size)
    {
        if (this->clothesCounter < this->size)
        {
            Clothing clothing(name, price, size);
            this->clothes[this->clothesCounter] = clothing;
            this->clothesCounter++;
        }
    }

    void createToy(string name, double price, unsigned short age)
    {
        if (this->toysCounter < this->size)
        {
            Toy toy(name, price, age);
            this->toys[this->toysCounter] = toy;
            this->toysCounter++;
        }
    }

    void printAllProducts()
    {
        for (int i = 0; i < groceriesCounter; i++)
        {
            groceries[i].description();
        }

        for (int i = 0; i < alcoholsCounter; i++)
        {
            alcohols[i].description();
        }

        for (int i = 0; i < beveragesCounter; i++)
        {
            beverages[i].description();
        }

        for (int i = 0; i < breadsCounter; i++)
        {
            breads[i].description();
        }

        for (int i = 0; i < clothesCounter; i++)
        {
            clothes[i].description();
        }

        for (int i = 0; i < toysCounter; i++)
        {
            toys[i].description();
        }
    }

    void addToProductsDatabase(string data)
    {
        ofstream File;
        File.open("Data/Products.txt", ios::app);
        if (File.is_open())
        {
            File << data << "\n";
            cout << "Inserted!" << endl;
        }
        else
        {
            cout << "Cannot insert data to database!" << endl;
        }
    }



private:
    Grocery *groceries;
    int groceriesCounter;

    Alcohol *alcohols;
    int alcoholsCounter;

    Beverage *beverages;
    int beveragesCounter;

    Bread *breads;
    int breadsCounter;

    Clothing *clothes;
    int clothesCounter;

    Toy *toys;
    int toysCounter;

    int size;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_MANAGER_H
