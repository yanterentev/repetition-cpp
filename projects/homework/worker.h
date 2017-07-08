#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>
class Worker
{
public:

	Worker(std :: string s, int e, int h, int n);
	Worker(Worker& worker);
	std :: string get_surname() const;
	int get_expierence() const;
	int get_wage() const;
	int get_hours_worked() const;
    ~Worker();
private:
	std :: string surname;
	int expierence;
	int hourly_wage;
	int number_of_hours_worked;
};
#endif