#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
 
int main()
{
    srand(time(NULL));
    const int N = 3;
    const int M = 3;

    int matrix[N][M];
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] = rand() % 100;
            std :: cout << std :: setw(2) << matrix[i][j] << " ";
        }
        std :: cout << '\n';
    }
    std :: cout << '\n';
 
    int result[N * M];
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            result[i * M + j] = matrix[i][j];
            std :: cout << std :: setw(2) << result[i * M + j] << " ";
        }
    }

    return 0;
}