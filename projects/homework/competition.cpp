#include <iostream>
using namespace std;

int main()
{
	int sportsmen = 5;
	int attempt = 3;
	double result[sportsmen][attempt];

	std :: cout << "Введите результаты соревнований\n";
	for(int i = 0; i < sportsmen; i++)
	{
		std :: cout << "спортсмен " << (i + 1) << '\n';
		for(int j = 0; j < attempt; j++)
		{
			std :: cin >> result[i][j];
		}
	}

	double best_result = result[0][0];
	int spmen;
	int att;
	for(int i = 0; i < sportsmen; i++)
	{
		for(int j = 0; j < attempt; j++)
		{
			if(best_result < result[i][j])
			{
				best_result = result[i][j];
				spmen = i + 1;
				att = j + 1;
			}
		}
	}
	std :: cout << '\n';
	std :: cout << "лучший результат:\n";
	for(int i = 0; i < sportsmen; i++)
	{
		for(int j = 0; j < attempt; j++)
		{
			if (best_result == result[i][j])
			{
				std :: cout << "спортсмен  "<< (i + 1) << '\n'
				<< "попытка s" << (j + 1) << '\n' << '\n';

			}
		}
	}

	return 0;
}