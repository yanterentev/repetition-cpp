#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

const int SPORTSMEN = 5;
const int ATTEMPT = 3;

double drand()
{
	double d1 = rand();
	double d2 = rand();
	double d3 = d2 / d1;
	return d3 - floor(d3);
}

void create(double result[SPORTSMEN][ATTEMPT])
{
	for(int i = 0; i < SPORTSMEN; i++)
	{
		for(int j = 0; j < ATTEMPT; j++)
		{
			result[i][j] = rand() % 10 + drand();
		}
	}
}

void print(double result[SPORTSMEN][ATTEMPT])
{
	for(int i = 0; i < SPORTSMEN; ++i)
	{
		for(int j = 0; j < ATTEMPT; ++j)
		{
			std :: cout << std :: setw(15) << result[i][j];
		}
		std :: cout << '\n';
	}
	std :: cout << '\n';
}

void find_best(double result[SPORTSMEN][ATTEMPT])
{
	int att;
	double best_result = result[0][0];
	double best_of_the_best = 0;
	int best_sportsmen;
	for(int i = 0; i < SPORTSMEN; i++)
	{
		for(int j = 0; j < ATTEMPT; j++)
		{
			if(best_result < result[i][j])
			{
				best_result = result[i][j];
				att = j + 1;
			}
		}
		if(best_result > best_of_the_best)
		{
			best_of_the_best = best_result;
			best_sportsmen = i;
		}
		std :: cout << "спортсмен " << i + 1 << " имеет лучший результат "
		<< best_result << " достигнутый в попытке №" << att << '\n';
		best_result = 0.0;
	}
	std :: cout << "самый лучший результат у спортсмена " << best_sportsmen + 1
	<< " равный " << best_of_the_best << "!\n";
}
int main()
{
	double result[SPORTSMEN][ATTEMPT];

	create(result);
	print(result);
	find_best(result);
	return 0;
}