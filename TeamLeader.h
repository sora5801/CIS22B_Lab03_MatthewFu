#pragma once
#include "ProductionWorker.h"


//The class TeamLeader is a derived class of ProductionWorker
class TeamLeader : public ProductionWorker
{
private:
   int monthlyBonus;
   int requiredHours;
   int trainingHours;
public:
   //Default Constructor
   TeamLeader();
   //Constructor
   TeamLeader(int, int, int, double, int, std::string, int, std::string);

   //Accessors
   int getmonthlyBonus();
   int getrequiredHours();
   int gettrainingHours();
   //Mutators
   void setmonthlyBonus(int);
   void setrequiredHours(int);
   void settrainingHours(int);

   //This function is redefined from the parent class
   double moneyearned();
   void yellout(); //This function has the same name as the parent class, only different output.
};