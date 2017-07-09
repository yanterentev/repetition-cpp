#include "worker.h"

Worker :: Worker(std :: string s, int e, int h, int n, std :: string l)
: surname(s), expierence(e), hourly_wage(h), number_of_hours_worked(n), last_name(l)
{
}

Worker :: Worker(Worker& worker) : surname(worker.surname),
expierence(worker.expierence), hourly_wage(worker.hourly_wage),
number_of_hours_worked(worker.number_of_hours_worked), last_name(worker.last_name)
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

int Worker :: get_hours_worked() const
{
	return number_of_hours_worked;
}

std :: string Worker :: get_last_name() const
{
	return last_name;
}

bool Worker :: operator == (const Worker& worker) const
{
	return worker.surname == surname && worker.last_name == last_name;
}
std :: ostream& operator << (std :: ostream& os, const Worker& worker)
{
	os << "работник с фамилией и именем " << worker.get_surname() << " " << worker.get_last_name()
	<< " имеет стаж " << worker.get_expierence()
	<< ", часовую зароботную плату " << worker.get_wage()
	<< " и количеств отработанных часов - " << worker.get_hours_worked();

	return os;
}
Worker :: ~Worker()
{
}