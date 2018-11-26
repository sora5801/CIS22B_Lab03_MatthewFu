#pragma once
#include <iostream>
#include <cstdlib>
#include "Employee.h"

//The class ProductionWorker is 
class ProductionWorker : public Employee
{
   //These variables are declared protected so that the classes derived from this one
   //can access it.
protected:
   int shift;
   double hourlypayrate;
   int hoursworkedthismonth;
public:
   //Default Constructor
   ProductionWorker();
   //Constructor
   ProductionWorker(int, double, std::string, int, std::string, int);

   //Mutators
   void setshift(int);
   void sethourlypayrate(double);
   void sethoursworkedthismonth(int);

   //Accessors
   int getshift() const;
   double gethourlypayrate() const;
   int gethoursworkedthismonth() const;

   void yellout(); //This function is to display static binding
   virtual double moneyearned();//This function is to display dynamic binding. This function
   //will get overrided in the TeamLeader Class
};