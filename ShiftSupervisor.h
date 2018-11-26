#pragma once
#include "Employee.h"

//The class ShiftSupervisor is a derived class from Employee
class ShiftSupervisor : public Employee
{
private:
   double annualsalary;
   double annualproductionbonus;
public:
   //Default Constructor
   ShiftSupervisor();
   //Constructor
   ShiftSupervisor(double, double, std::string, int, std::string);
   //Accessors
   double getannualsalary() const;
   double getannualproductionbonus() const;
   //Mutators
   void setannualsalary(double);
   void setannualproductionbonus(double);


};
