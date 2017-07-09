#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>
class Worker
{
public:

	Worker(std :: string s, int e, int h, int n, std :: string l);
	Worker(Worker& worker);
	std :: string get_surname() const;
	int get_expierence() const;
	int get_wage() const;
	int get_hours_worked() const;
	std :: string get_last_name() const;
     
    bool operator ==(const Worker& worker) const;
	friend std :: ostream& operator <<(std :: ostream& os, const Worker& worker);
    ~Worker();
private:
	std :: string surname;
	int expierence;
	int hourly_wage;
	int number_of_hours_worked;
	std :: string last_name;
};
#endif