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
#include <cstdio>
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

        this->employees = new Employee[size];
        this->employeesCounter = 0;
    }

    ~Manager()
    {
        ofstream File;

        File.open("Data/Products2.txt", ios::app);
        if (File.is_open())
        {
            for (int i = 0; i < groceriesCounter; i++)
            {
                if (groceries[i].getName() != "Unknown")
                {
                    string text = "Grocery;";

                    text = text + groceries[i].getName() + ";";
                    text = text + to_string(groceries[i].getPrice()) + ";";
                    text = text + to_string(groceries[i].getKcal()) + ";";
                    text = text + "\n";

                    File << text;

                }
            }

            for (int i = 0; i < alcoholsCounter; i++)
            {
                if (alcohols[i].getName() != "Unknown")
                {
                    string text = "Alcohol;";

                    text = text + alcohols[i].getName() + ";";
                    text = text + to_string(alcohols[i].getPrice()) + ";";
                    text = text + to_string(alcohols[i].getKcal()) + ";";
                    text = text + to_string(alcohols[i].getLiter()) + ";";
                    text = text + to_string(alcohols[i].getPercentages()) + ";";
                    text = text + "\n";

                    File << text;

                }
            }

            for (int i = 0; i < beveragesCounter; i++)
            {
                if (beverages[i].getName() != "Unknown")
                {
                    string text = "Beverage;";

                    text = text + beverages[i].getName() + ";";
                    text = text + to_string(beverages[i].getPrice()) + ";";
                    text = text + to_string(beverages[i].getKcal()) + ";";
                    text = text + to_string(beverages[i].getLiter()) + ";";
                    text = text + "\n";

                    File << text;

                }
            }

            for (int i = 0; i < breadsCounter; i++)
            {
                if (breads[i].getName() != "Unknown")
                {
                    string text = "Bread;";

                    text = text + breads[i].getName() + ";";
                    text = text + to_string(breads[i].getPrice()) + ";";
                    text = text + to_string(breads[i].getKcal()) + ";";
                    text = text + to_string(breads[i].getKilograms()) + ";";
                    text = text + "\n";

                    File << text;

                }
            }

            for (int i = 0; i < clothesCounter; i++)
            {
                if (clothes[i].getName() != "Unknown")
                {
                    string text = "Clothing;";

                    text = text + clothes[i].getName() + ";";
                    text = text + to_string(clothes[i].getPrice()) + ";";
                    text = text + clothes[i].getSize() + ";";
                    text = text + "\n";

                    File << text;

                }
            }

            for (int i = 0; i < toysCounter; i++)
            {
                if (toys[i].getName() != "Unknown")
                {
                    string text = "Toy;";

                    text = text + toys[i].getName() + ";";
                    text = text + to_string(toys[i].getPrice()) + ";";
                    text = text + to_string(toys[i].getAge()) + ";";
                    text = text + "\n";

                    File << text;

                }
            }
            File.close();

            if (std::remove("Data/Products.txt") == 0) {
                std::cout << "Product's Database saved." << std::endl;
            } else {
                std::cout << "Cannot save the Product's database." << std::endl;
            }

            if (std::rename("Data/Products2.txt", "Data/Products.txt") == 0) {
                std::cout << "Have a nice day." << std::endl;
            } else {
                std::cout << "Error occured." << std::endl;
            }
        }
        else
        {
            cout << "Critic error occured" << endl;
        }

        File.open("Data/Employees2.txt", ios::app);
        if (File.is_open()) {
            for (int i = 0; i < employeesCounter; i++) {
                if (employees[i].getLastName() != "Unknown") {
                    string text = "";

                    text = text + employees[i].getFirstName() + ";";
                    text = text + employees[i].getLastName() + ";";
                    text = text + employees[i].getContact() + ";";
                    text = text + employees[i].getPosition() + ";";
                    text = text + to_string(employees[i].getEarnings()) + ";";
                    text = text + "\n";

                    File << text;

                }
            }
            File.close();

            if (std::remove("Data/Employees.txt") == 0) {
                std::cout << "Employee's Database saved." << std::endl;
            } else {
                std::cout << "Cannot save the Employee's database." << std::endl;
            }

            if (std::rename("Data/Employees2.txt", "Data/Employees.txt") == 0) {
                std::cout << "Have a nice day." << std::endl;
            } else {
                std::cout << "Error occured." << std::endl;
            }
        }
        else
        {
            cout << "Critic error occured" << endl;
        }

    }

    // Methods
    void importDataBase()
    {
        importProducts();
        importEmployees();
    }

    void importProducts()
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

    void importEmployees()
    {
        fstream File;
        File.open("Data/Employees.txt");

        if (File.is_open())
        {
            string text;
            char delimiter = ';';
            while(getline(File, text))
            {
                vector<string> line;
                boost::split(line, text, boost::is_any_of(string(1, delimiter)));
                createEmployee(line[0], line[1], line[2], line[3], stod(line[4]));
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

    void createEmployee(string firstName, string lastName, string contact, string position, double earnings)
    {
        Employee employee(firstName, lastName, contact, position, earnings);
        this->employees[this->employeesCounter] = employee;
        this->employeesCounter++;
    }

    void printAllProducts()
    {
        printGroceries();
        printBreads();
        printBeverages();
        printAlcohols();
        printToys();
        printClothes();
    }

    void printGroceries()
    {
        for (int i = 0; i < groceriesCounter; i++)
        {
            cout << "GroceriesID: " << i << endl;
            groceries[i].description();
        }
    }

    void printAlcohols()
    {
        for (int i = 0; i < alcoholsCounter; i++)
        {
            cout << "AlcoholsID: " << i << endl;
            alcohols[i].description();
        }
    }

    void printBeverages()
    {
        for (int i = 0; i < beveragesCounter; i++)
        {
            cout << "BeveragesID: " << i << endl;
            beverages[i].description();
        }
    }

    void printBreads()
    {
        for (int i = 0; i < breadsCounter; i++)
        {
            cout << "BreadsID: " << i << endl;
            breads[i].description();
        }
    }

    void printClothes()
    {
        for (int i = 0; i < clothesCounter; i++)
        {
            cout << "ClothesID: " << i << endl;
            clothes[i].description();
        }
    }

    void printToys()
    {
        for (int i = 0; i < toysCounter; i++)
        {
            cout << "ToysID: " << i << endl;
            toys[i].description();
        }
    }

    void printAllEmployees()
    {
        for (int i = 0; i < employeesCounter; i++)
        {
            cout << "EmployeesID: " << i << endl;
            employees[i].personalDetails();
        }
    }

    void findProductByName(string name)
    {
        findGroceryByName(name);
        findBreadByName(name);
        findBeverageByName(name);
        findAlcoholByName(name);
        findToyByName(name);
        findClothingByName(name);
    }

    void findGroceryByName(string name)
    {
        for (int i = 0; i < groceriesCounter; i++)
        {
            if (groceries[i].getName() == name)
            {
                cout << "GroceriesID: " << i << endl;
                groceries[i].description();
            }
        }
    }

    void findAlcoholByName(string name)
    {
        for (int i = 0; i < alcoholsCounter; i++)
        {
            if (alcohols[i].getName() == name)
            {
                cout << "AlcoholsID: " << i << endl;
                alcohols[i].description();
            }
        }
    }

    void findBeverageByName(string name)
    {
        for (int i = 0; i < beveragesCounter; i++)
        {
            if (beverages[i].getName() == name)
            {
                cout << "BeveragesID: " << i << endl;
                beverages[i].description();
            }
        }
    }

    void findBreadByName(string name)
    {
        for (int i = 0; i < breadsCounter; i++)
        {
            if (breads[i].getName() == name)
            {
                cout << "BreadsID: " << i << endl;
                breads[i].description();
            }
        }
    }

    void findClothingByName(string name)
    {
        for (int i = 0; i < clothesCounter; i++)
        {
            if (clothes[i].getName() == name)
            {
                cout << "ClothesID: " << i << endl;
                clothes[i].description();
            }
        }
    }

    void findToyByName(string name)
    {
        for (int i = 0; i < toysCounter; i++)
        {
            if (toys[i].getName() == name)
            {
                cout << "ToysID: " << i << endl;
                toys[i].description();
            }
        }
    }

    void findGroceryByPrice(double price)
    {
        for (int i = 0; i < groceriesCounter; i++)
        {
            if (groceries[i].getPrice() <= price)
            {
                cout << "GroceriesID: " << i << endl;
                groceries[i].description();
            }
        }
    }

    void findAlcoholByPrice(double price)
    {
        for (int i = 0; i < alcoholsCounter; i++)
        {
            if (alcohols[i].getPrice() <= price)
            {
                cout << "AlcoholsID: " << i << endl;
                alcohols[i].description();
            }
        }
    }

    void findBeverageByPrice(double price)
    {
        for (int i = 0; i < beveragesCounter; i++)
        {
            if (beverages[i].getPrice() <= price)
            {
                cout << "BeveragesID: " << i << endl;
                beverages[i].description();
            }
        }
    }

    void findBreadByPrice(double price)
    {
        for (int i = 0; i < breadsCounter; i++)
        {
            if (breads[i].getPrice() <= price)
            {
                cout << "BreadsID: " << i << endl;
                breads[i].description();
            }
        }
    }

    void findClothingByPrice(double price)
    {
        for (int i = 0; i < clothesCounter; i++)
        {
            if (clothes[i].getPrice() <= price)
            {
                cout << "ClothesID: " << i << endl;
                clothes[i].description();
            }
        }
    }

    void findToyByPrice(double price)
    {
        for (int i = 0; i < toysCounter; i++)
        {
            if (toys[i].getPrice() == price)
            {
                cout << "ToysID: " << i << endl;
                toys[i].description();
            }
        }
    }

    void findGroceryById(int id)
    {
        if (groceries[id].getName() != "Unknown")
        {
            cout << "GroceriesID: " << id << endl;
            groceries[id].description();

        }
    }

    void findAlcoholById(int id)
    {
        if (alcohols[id].getName() != "Unknown")
        {
            cout << "AlcoholsID: " << id << endl;
            alcohols[id].description();
        }
    }

    void findBeverageById(int id)
    {
        if (beverages[id].getName() != "Unknown")
        {
            cout << "BeveragesID: " << id << endl;
            beverages[id].description();
        }
    }

    void findBreadById(int id)
    {
        if (breads[id].getName() != "Unknown")
        {
            cout << "BreadsID: " << id << endl;
            breads[id].description();
        }
    }

    void findClothingById(int id)
    {
        if (clothes[id].getName() != "Unknown")
        {
            cout << "ClothesID: " << id << endl;
            clothes[id].description();
        }
    }

    void findToyById(int id)
    {
        if (toys[id].getName() != "Unknown")
        {
            cout << "ToysID: " << id << endl;
            toys[id].description();
        }
    }

    void findEmployeeByFirstName(string name)
    {
        for (int i = 0; i < employeesCounter; i++)
        {
            if (employees[i].getFirstName() == name)
            {
                cout << "EmployeeID: " << i << endl;
                employees[i].personalDetails();
            }
        }
    }

    void findEmployeeByLastName(string name)
    {
        for (int i = 0; i < employeesCounter; i++)
        {
            if (employees[i].getLastName() == name)
            {
                cout << "EmployeeID: " << i << endl;
                employees[i].personalDetails();
            }
        }
    }

    void findEmployeeByPosition(string name)
    {
        for (int i = 0; i < employeesCounter; i++)
        {
            if (employees[i].getPosition() == name)
            {
                cout << "EmployeeID: " << i << endl;
                employees[i].personalDetails();
            }
        }
    }

    void findEmployeeBySalary(double salary)
    {
        for (int i = 0; i < employeesCounter; i++)
        {
            if (employees[i].getEarnings() == salary)
            {
                cout << "EmployeeID: " << i << endl;
                employees[i].personalDetails();
            }
        }
    }

    void editGrocery(int id, string name, double price, int kcal)
    {
        groceries[id].setName(name);
        groceries[id].setPrice(price);
        groceries[id].setKcal(kcal);
    }

    void editAlcohol(int id, string name, double price, int kcal, double liter, double percentages)
    {
        alcohols[id].setName(name);
        alcohols[id].setPrice(price);
        alcohols[id].setKcal(kcal);
        alcohols[id].setLiter(liter);
        alcohols[id].setPercentages(percentages);
    }

    void editBeverage(int id, string name, double price, int kcal, double liter)
    {
        beverages[id].setName(name);
        beverages[id].setPrice(price);
        beverages[id].setKcal(kcal);
        beverages[id].setLiter(liter);
    }

    void editBread(int id, string name, double price, int kcal, double kilograms)
    {
        breads[id].setName(name);
        breads[id].setPrice(price);
        breads[id].setKcal(kcal);
        breads[id].setKilograms(kilograms);
    }

    void editClothing(int id, string name, double price, string size)
    {
        clothes[id].setName(name);
        clothes[id].setPrice(price);
        clothes[id].setSise(size);
    }

    void editToy(int id, string name, double price, unsigned short age)
    {
        toys[id].setName(name);
        toys[id].setPrice(price);
        toys[id].setAge(age);
    }

    void deleteGrocery(int id)
    {
        groceries[id].setName("Unknown");
        groceries[id].setPrice(0);
        groceries[id].setKcal(0);
    }

    void deleteAlcohol(int id)
    {
        alcohols[id].setName("Unknown");
        alcohols[id].setPrice(0);
        alcohols[id].setKcal(0);
        alcohols[id].setLiter(0);
        alcohols[id].setPercentages(0);
    }

    void deleteBeverage(int id)
    {
        beverages[id].setName("Unknown");
        beverages[id].setPrice(0);
        beverages[id].setKcal(0);
        beverages[id].setLiter(0);
    }

    void deleteBread(int id)
    {
        breads[id].setName("Unknown");
        breads[id].setPrice(0);
        breads[id].setKcal(0);
        breads[id].setKilograms(0);
    }

    void deleteClothing(int id)
    {
        clothes[id].setName("Unknown");
        clothes[id].setPrice(0);
        clothes[id].setSise("Unknown");
    }

    void deleteToy(int id)
    {
        toys[id].setName("Unknown");
        toys[id].setPrice(0);
        toys[id].setAge(0);
    }

    void deleteEmployee(int id)
    {
        employees[id].setFirstName("Unknown");
        employees[id].setLastName("Unknown");
        employees[id].setContact("Unknown");
        employees[id].setEarnings(0);
        employees[id].setPosition("Unknown");
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

    Employee *employees;
    int employeesCounter;

    int size;

};

#endif //SUPERMARKET_MANAGEMENT_SYSTEM_MANAGER_H
