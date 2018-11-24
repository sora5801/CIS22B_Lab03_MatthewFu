#include "ProductionWorker.h"

ProductionWorker::ProductionWorker()
{
   shift = 1;
   hourlypayrate = 0;
   name = "";
   number = 0;
   date = "";
}

ProductionWorker::ProductionWorker(int s, double p, std::string n, int num, std::string date1)
{
   shift = s;
   if (shift != 1 && shift != 2)
   {
      std::cout << "Incorrect shift. Please enter a correct one to proceed with the program" << std::endl;
      system("pause");
      exit(EXIT_FAILURE); 
   }
   hourlypayrate = p;
   name = n;
   number = num;
   date = date1;
}
void ProductionWorker::setshift(int s)
{
   shift = s;
   if (shift != 1 || shift != 2)
   {
      std::cout << "Incorrect shift. Please enter a correct one to proceed with the program" << std::endl;
      system("pause");
      exit(EXIT_FAILURE);
   }
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