//  1 3 7
//  6 2 9 <= matrix
//  4 5 8
// (1, 4), (3, 5), (7, 8)

// (1, 7), (6, 9), (4, 8)

// 00 - 20
// 01 - 21
// 02 - 22

// 00 - 02
// 10 - 12
// 20 - 22

#include <iostream>
#include <cstdlib>
#include <iomanip>

void change_strings(int matrix[], int n, int m, int string1, int string2)
{
    for(int i = 0; i < m; ++i)
    {
        std :: swap(matrix[string1 * m + i], matrix[string2 * m + i]);
    }
}

void change_columns(int matrix[], int n, int m, int column1, int column2)
{
    for(int i = 0; i < n; ++i)
    {
        std :: swap(matrix[i * m + column1], matrix[i * m + column2]);
    }
}

void print(int matrix[], int n, int m)
{
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			std :: cout << std :: setw(2) << matrix[i * m + j] << " ";
		}
		std :: cout << '\n'; 
	}
	std :: cout << '\n';

}
int main()
{
	srand(time(NULL));

	const int N = 3;
	const int M = 3;
	int matrix[N*M];

	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < M; ++j)
		{
			matrix[i * M + j] = rand() % 100;
		}
	}

    print(matrix, N, M);
	change_strings(matrix, N, M, 0, 2);
    print(matrix, N, M);
    change_columns(matrix, N, M, 1, 2);
    print(matrix, N, M);                 

    return 0;
}