#include "worker.h"

worker :: worker(std :: string s, int e, int h, int n)
: surname(s), expierence(e), hourly_wage(h), number_of_hours_worked(n)
{
}

std :: string Worker :: get_surname() const
{
	return surname;
}

int Worker :: get_expierence() const
{
	return expierence;
}

int Worker :: get_wage() const
{
	return hourly_wage;
}

int Worker :: get_hours_worked()
{
	return number_of_hours_worked;
}
Worker :: ~worker()
{
}