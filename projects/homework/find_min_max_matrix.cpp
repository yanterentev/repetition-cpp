#include <iostream>
#include <cstdlib>
#include <iomanip>

const int N = 5;

void create(int matrix[N][N])
{
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			matrix[i][j] = rand() % 100;
		}
	}
}

void print(int matrix[N][N])
{ 
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			std :: cout << std :: setw(10) << matrix[i][j];
		}
	}
}

void find_min(int matrix[N][N])
{
    int min = matrix[1][0];
    int row_min = 1;
    int column_min = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(matrix[i][j] < min)
            {
                min = matrix[i][j];
                row_min = i;
                column_min = j;
            }
        }
    }
    std :: cout << "min - " << min << '\n';
 }
 
 void find_max(int matrix[N][N])
 {
    int max = matrix[1][0];
    int row_max = 1;
    int column_max = 0;
 
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = 0; j < (N - i - 1); j++)
        {
            if(matrix[i][j] > max)
            {
                max = matrix[i][j];
                row_max = i;
                column_max = j;
            }
        }
    }
    std :: cout << "max - " << max << '\n';
}

int main()
{
    int matrix[N][N];
    create(matrix);
    print(matrix);
    find_min(matrix);
    find_max(matrix);
}