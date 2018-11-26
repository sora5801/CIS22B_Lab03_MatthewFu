#include "ProductionWorker.h"

ProductionWorker::ProductionWorker()
{
   shift = 1;
   hourlypayrate = 0;
   name = "";
   number = 0;
   date = "";
   hoursworkedthismonth = 0;
}

ProductionWorker::ProductionWorker(int s, double p, std::string n, int num, std::string date1, int hw)
{
   shift = s;
   hourlypayrate = p;
   name = n;
   number = num;
   date = date1;
   hoursworkedthismonth = hw;
}
void ProductionWorker::setshift(int s)
{
   shift = s;
}

void ProductionWorker::sethourlypayrate(double h)
{
   hourlypayrate = h;
}

int ProductionWorker::getshift()
{
   return shift;
}

double ProductionWorker::gethourlypayrate()
{
   return hourlypayrate;
}

double ProductionWorker::moneyearned()
{
   return hourlypayrate * hoursworkedthismonth;
}

void ProductionWorker::yellout()
{
   std::cout << "I'm working here. I'm working here." << std::endl;
}