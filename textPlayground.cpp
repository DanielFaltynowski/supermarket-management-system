#include <iostream>
#include "Headers/Product.h"
#include "Headers/Product/Grocery.h"
#include "Headers/Product/Toy.h"
#include "Headers/Product/Clothing.h"
#include "Headers/Product/Grocery/Alcohol.h"
#include "Headers/Product/Grocery/Beverage.h"
#include "Headers/Product/Grocery/Bread.h"
#include <ctime>
#include <fstream>
#include <ios>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;


int main()
{
//    ofstream File;
//    File.open("index.txt", ios::app);
//    if (File.is_open())
//    {
//        cout << "file is open" << endl;
//        File << "ala ma kota\n";
//    }
//    else{
//        cout << "file is not open" << endl;
//    }
//    File.close();
//
//    ifstream someFile;
//    someFile.open("text.txt");
//    if (someFile.is_open())
//    {
//        string line;
//        while (getline(someFile, line))
//        {
//            cout << line << endl;
//        }
//    }

    fstream Data;

    Data.open("text.txt");
    if (Data.is_open())
    {
        string line;
        while(getline(Data, line))
        {
            char delimiter = ';';
            vector<string> parts;
            boost::split(parts, line, boost::is_any_of(string(1, delimiter)));

            for(const string& x : parts)
            {
                cout << x << endl;
            }
            cout << endl;

        }
    }

    return 0;
}