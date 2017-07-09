#include "worker.h"
#include <iostream>

int main()
{
   Worker worker1("Ivanov", 0, 500, 0, "Vasily");
   Worker worker2("Ivanov", 0, 500, 0, "Vasily");
   Worker worker3("Popov", 3, 800, 2, "Ivan");

   std :: cout << worker1.get_wage() << '\n' << worker2.get_expierence()
   << '\n' << worker1.get_surname() << '\n' << worker3.get_last_name()
   << '\n' << worker3.get_hours_worked() << '\n';

   std :: cout << (worker1 == worker2) << '\n' << (worker1 == worker3) << '\n';
   std :: cout << worker3;

}