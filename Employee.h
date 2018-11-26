#pragma once
#include <string>

class Employee
{
   //These variables are declared protected so that the classes derived from this one
   //can access it.
protected:
   std::string name; //Employee name
   int number; //Employee ID number
   std::string date;
public:
   //Default Constructor
   Employee();
   //Constructor
   Employee(std::string, int, std::string);
   //Accessors
   std::string getName();
   int getNumber();
   std::string getDate();
   //Mutators
   void setName(std::string);
   void setNumber(int);
   void setDate(std::string);
}
;