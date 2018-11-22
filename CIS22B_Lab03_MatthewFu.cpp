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
{};

class ShiftSurpervisor: public Employee
{};

class TeamLeader
{};

int main()
{
   return 0;
}