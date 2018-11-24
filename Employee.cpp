#include "Employee.h"

std::string Employee::getName()
{
   return name;
}

int Employee::getNumber()
{
   return number;
}

std::string Employee::getDate()
{
   return date;
}

Employee::Employee()
{
   name = "";
   number = 0;
   date = "";
}

Employee::Employee(std::string n, int i, std::string d)
{
   name = n;
   number = i;
   date = d;
}

void Employee::setDate(std::string d)
{
   date = d;
}

void Employee::setName(std::string n)
{
   name = n;
}

void Employee::setNumber(int n)
{
   number = n;
}



