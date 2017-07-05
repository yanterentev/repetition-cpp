#include "worker.h"

worker :: worker(std :: string surname, int expierence, int hourly_wage, int number_of_hours_worked) : surname("Ivanov"), expierence(0), hourly_wage(500), number_of_hours_worked(0)
{
}
worker :: ~worker()
{
}

worker get_surname(std :: string surname)
{
	return surname;
}

worker get_expierence(int expierence)
{
	return expierence;
}

worker get_wage(int hourly hourly_wage)
{
	return hourly_wage;
}

worker get_hours_worked(int number_of_hours_worked)
{
	return number_of_hours_worked;
}