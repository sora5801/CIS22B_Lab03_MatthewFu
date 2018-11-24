#pragma once
#include <string>

class Employee
{
protected:
   std::string name;
   int number;
   std::string date;
public:
   Employee();
   Employee(std::string, int, std::string);
   std::string getName();
   int getNumber();
   std::string getDate();
   void setName(std::string);
   void setNumber(int);
   void setDate(std::string);
}
;