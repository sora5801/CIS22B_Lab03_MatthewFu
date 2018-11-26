/*This program is a new employee's tour of the factory. He or she enters his or her name
and the current date. Then he or she is assigned an ID number, a shift, and an hourly pay rate.
Afterward, he or she meets with his or her ShiftSupervisor and TeamLeader, and then they discuss
what they are currently making and what kind of plans that they have for the new employee to do.*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "TeamLeader.h"
#include "ShiftSupervisor.h"
using namespace std;

double displayMoney(ProductionWorker &);
double displayMoney(ShiftSupervisor &);
void vocalCommands(TeamLeader &);
void vocalCommands(ProductionWorker &);
/*
This program will create an employee*/
int main()
{
   string name;
   string date;
   srand(time(NULL));
   int shift = rand() % 2 + 1;
   double hourlyrate = 12.00;
   int ID = rand() % 999999 + 100000; //Pseudo-randomly generate an ID number
   int hoursworkedinamonth = 150;
   cout << "Welcome to the factory. What is your name?" << endl;
   cin >> name;
   cout << "What is the current date? Please enter in mm/dd/yyyy format." << endl;
   cin >> date;
   ProductionWorker Person(shift, hourlyrate, name, ID, date, hoursworkedinamonth);
   ProductionWorker FourthPerson(shift, hourlyrate, "Megaman", 123456, "08/14/2006", hoursworkedinamonth);
   ShiftSupervisor SecondPerson(100000, 20000, "UltraMan", 234234, "09/18/1997");
   TeamLeader ThirdPerson(3000, 50, 30, 65, hoursworkedinamonth, "Bob the Builder", 345345, "05/17/1993");
   cout << "Welcome, " << Person.getName() << endl;
   cout << "The date you joined our company is " << Person.getDate() << endl;
   cout << "Your ID number is " <<  Person.getNumber() << endl;
   if (Person.getshift() == 1) { cout << "You will be taking the day shift." << endl; }
   if (Person.getshift() == 2) { cout << "You will be taking the night shift." << endl; }
   cout << "Your hourly pay rate will be $" <<  Person.gethourlypayrate() << endl;
   cout << "This means that you will earn $" << displayMoney(Person) << " each month." << endl;
   cout << "Let's get acquainted with others. " << endl << endl;
  
   cout << SecondPerson.getName() << " is your supervisor." << endl;
   cout << "He gets $" << displayMoney(SecondPerson) << " if his shift meets production goal so work hard for him. Moving on." <<endl <<endl;
   vocalCommands(ThirdPerson);
   vocalCommands(FourthPerson);
   cout << "That's the TeamLeader ," << ThirdPerson.getName() << ", and that's your teammate ," <<FourthPerson.getName() <<endl;
   cout << "As you can see, they do not get along very well. That's because " << FourthPerson.getName() << " does not think that "
      << ThirdPerson.getName() << " should get $" << displayMoney(ThirdPerson) << " each month."<< endl;

   cout << "That's everyone you need to know." << endl;
   system("pause");
   return 0;
}

double displayMoney(ProductionWorker &person)
{
   //Dynamic binding. The function moneyearned() is defined differently in each class.
   //If a ProductionWorker object is passed, the ProductionWorker::moneyearned() function is called.
   //If a TeamLeader object is passed, the TeamLeader::moneyearned() function is called
   return person.moneyearned();
}

void vocalCommands(TeamLeader &person)
{
   person.yellout();
}

void vocalCommands(ProductionWorker &person)
{
   person.yellout();
}

double displayMoney(ShiftSupervisor &person)
{
   //Static Binding. Same name as another function, except a different object is passed.
   return person.moneyearned();
}