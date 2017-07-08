#include "worker.h"
#include <iostream>

int main()
{
   Worker worker("Ivanov", 0, 500, 0);

   std :: cout << worker.get_wage();
}