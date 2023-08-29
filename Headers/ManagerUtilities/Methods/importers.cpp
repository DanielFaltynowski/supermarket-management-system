#include "../../Manager.h"

void Manager::importDataBase()
{
    importProducts();
    importEmployees();
}

void Manager::importProducts()
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

void Manager::importEmployees()
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