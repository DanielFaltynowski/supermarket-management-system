#include "../../Manager.h"

Manager::~Manager()
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
//            std::cout << "Have a nice day." << std::endl;
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