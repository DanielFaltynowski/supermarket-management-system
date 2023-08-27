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
        Grocery grocery(name, price, kcal);
        this->groceries[groceriesCounter] = grocery;
        groceriesCounter++;
    }

    void createAlcohol(string name, double price, int kcal, double liter, double percentages)
    {
        Alcohol alcohol(name, price, kcal, liter, percentages);
        this->alcohols[alcoholsCounter] = alcohol;
        alcoholsCounter++;
    }

    void createBeverage(string name, double price, int kcal, double percentages)
    {
        Beverage beverage(name, price, kcal, percentages);
        this->beverages[beveragesCounter] = beverage;
        beveragesCounter++;
    }

    void createBread(string name, double price, int kcal, double kilograms)
    {
        Bread bread(name, price, kcal, kilograms);
        this->breads[breadsCounter] = bread;
        breadsCounter++;
    }

    void createClothing(string name, double price, string size)
    {
        Clothing clothing(name, price, size);
        this->clothes[clothesCounter] = clothing;
        clothesCounter++;
    }

    void createToy(string name, double price, unsigned short age)
    {
        Toy toy(name, price, age);
        this->toys[toysCounter] = toy;
        toysCounter++;
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
