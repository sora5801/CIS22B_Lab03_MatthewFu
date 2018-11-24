#include <iostream>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;


/*
This program will create an employee*/
int main()
{
   ProductionWorker Matthew(4, 12.00, "Matthew", 123456, "09/15/1998");
   cout << Matthew.getName() << endl;
   cout << Matthew.getDate() << endl;
   cout << Matthew.getNumber() << endl;
   cout << Matthew.getshift() << endl;
   cout << Matthew.gethourlypayrate() << endl;
   system("pause");
   return 0;
}