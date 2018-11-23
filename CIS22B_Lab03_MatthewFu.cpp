#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
   string name;
   int number;
   string date;
public:
   Employee();
   Employee(string, int, string);

   string getName();
   
}
;
class ProductionWorker
{
private:
   int shift;
   double hourlypayrate;
public:
   ProductionWorker();
   int setshift();
   double sethourlypayrate();

};

class ShiftSurpervisor: public Employee
{
private:
   double annualsalary;
   double annualproductionbonus;
public:

};

class TeamLeader
{
private:
   int monthlyBonus;
   int requiredHours;
   int trainingHours;
public:
   TeamLeader();
   int getmonthlyBonus();
   int getrequiredHours();
   int gettrainingHours();
   int setmonthlyBonus();
   int setrequiredHours();
   int settrainingHours();

};

int main()
{
   return 0;
}