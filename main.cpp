#include <iostream>
#include "Headers/Manager.h"

using namespace std;


int main()
{
    Manager manager(100);
    manager.importDataBase();
    manager.findEmployeeByFirstName("Jan");

    return 0;
}