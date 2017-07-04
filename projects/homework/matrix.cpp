//1 2 3 4 5
//2 4 3 2 1
//9 4 8 5 7
//3 7 6 2 1
//3 4 7 5 2

#include <iostream>
#include <cstdlib>
#include <iomanip>

const int N = 5;
void create_matrix(int matrix[N][N])
{
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			matrix[i][j] = rand() % 100;
		}
	}
}

void print_matrix(int matrix[N][N])
{
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			std :: cout << std :: setw(5) << matrix[i][j];
		}
		std :: cout << "\n";
	}
	std :: cout << "\n";
}

void main_diag(int matrix[N][N]) 
{
	for(int i = 0; i < N; ++i)
	{
		std :: cout << std :: setw(5) << matrix[i][i];
	}
}

void secondary_diag(int matrix[N][N])
{
	for(int i = N - 1, j = 0; i >= 0 && j < N; --i, j++)
	{
		std :: cout << std :: setw(5) << matrix[i][j];
	}
}
int main()
{
	srand(time(NULL));
	
	int matrix[N][N];
	create_matrix(matrix);
	print_matrix(matrix);

	main_diag(matrix);
	std :: cout << '\n';

	secondary_diag(matrix);

	return 0;
}