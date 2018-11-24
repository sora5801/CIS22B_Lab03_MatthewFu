#pragma once
#include <iostream>
#include <cstdlib>
#include "Employee.h"
class ProductionWorker : public Employee
{
private:
   int shift;
   double hourlypayrate;
public:
   ProductionWorker();
   ProductionWorker(int, double, std::string, int, std::string);
   void setshift(int);
   void sethourlypayrate(double);
   int getshift();
   double gethourlypayrate();

};