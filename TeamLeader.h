#pragma once
#include "ProductionWorker.h"



class TeamLeader : public ProductionWorker
{
private:
   int monthlyBonus;
   int requiredHours;
   int trainingHours;
public:
   TeamLeader();
   TeamLeader(int, int, int, std::string, int, std::string);
   int getmonthlyBonus();
   int getrequiredHours();
   int gettrainingHours();
   void setmonthlyBonus(int);
   void setrequiredHours(int);
   void settrainingHours(int);

};