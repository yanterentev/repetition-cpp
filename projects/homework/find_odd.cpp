#include <iostream>
#include <cstdlib>

void create(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
	}
}
void print(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		std :: cout << array[i] << " ";
	}
}
void find_odd(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if ((array[i] % 2) != 0)
		{
			std :: cout << array[i] << " ";
		}
		std :: cout << '\n';
	}
	std :: cout << '\n';
}
int main()
{
	srand(time(NULL));

	int size = 10;
	int array[10];
    
    create(array, size);
    print(array, size);
    find_odd(array, size);
	return 0;
}