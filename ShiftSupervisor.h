#pragma once
#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
   double annualsalary;
   double annualproductionbonus;
public:
   ShiftSupervisor();
   ShiftSupervisor(double, double, std::string, int, std::string);
   double getannualsalary();
   double getannualproductionbonus();
   void setannualsalary(double);
   void setannualproductionbonus(double);


};
