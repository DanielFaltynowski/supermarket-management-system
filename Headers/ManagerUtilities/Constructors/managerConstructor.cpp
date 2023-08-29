#include "../../Manager.h"

Manager::Manager(int size)
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