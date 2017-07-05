#ifndef WORKER_H
#define WORKER_H

class worker
{
public:

	worker(std :: string surname, int expierence, int hourly_wage, int number_of_hours_worked);
	
	worker get_surname(std :: string surname);
	worker get_expierence(int expierence);
	worker get_wage(int hourly wage);
	worker get_hours_worked(int number_of_hours_worked);
    ~worker();
private:
	std :: string surname;
	int expierence;
	int hourly wage;
	int number_of_hours_worked;
};
#endif