#include "TeamLeader.h"

TeamLeader::TeamLeader()
{
   name = "";
   number = 0;
   date = "";
   monthlyBonus = 0;
   requiredHours = 0;
   trainingHours = 0;
}
TeamLeader::TeamLeader(int mn, int rh, int th, std::string n, int num, std::string d)
{
   monthlyBonus = mn;
   requiredHours = rh;
   trainingHours = th;
   name = n;
   number = num;
   date = d;
}
int TeamLeader::getmonthlyBonus()
{
   return monthlyBonus;
}
int TeamLeader::getrequiredHours()
{
   return requiredHours;
}
int TeamLeader::gettrainingHours()
{
   return trainingHours;
}

void TeamLeader::setmonthlyBonus(int mn)
{
   monthlyBonus = mn;
}

void TeamLeader::setrequiredHours(int rh)
{
   requiredHours = rh;
}
void TeamLeader::settrainingHours(int th)
{
   trainingHours = th;
}