#include <iostream>
#include <cstdlib>
#include <iomanip>


const int N = 7;
const int M = 5;
void zeroing(int array[N][M], int column)
{
    for(int i = 0; i < N; i++)
    {
        array[i][column - 1] = 0;
    }
}

void create(int array[N][M])
{

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)
        {
            array[i][j] = rand() % 100;
        }
    }
}
void print(int array[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
           std :: cout << std :: setw(4) << array[i][j];
       std :: cout << '\n';
    }
    std :: cout << '\n';
}
int main()
{
    srand(time(NULL));
    int matrix[N][M];
    
    create(matrix);
    print(matrix);

    zeroing(matrix, 1);
    zeroing(matrix, 3);

    print(matrix);
    return 0;
}