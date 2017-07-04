#include <iostream>
#include <iomanip>
#include <cstdlib>

void print(int arr[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		std :: cout << arr[i] << " ";
	}
	std :: cout << '\n';
}

void rand(int arr[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
	}
}

void delete_i(int arr[], int i, int size)
{
	for(int j = i - 1; j <= size - 1; ++j)
	{
		arr[j] = arr[j + 1];
	}
}
int main()
{
	srand(time(NULL));
	int size = 10;
	int arr[10];
	int i;

    rand(arr, size);
    print(arr, size);

    std :: cout << "Введите индекс числа, которое нужно удалить\n";
    std :: cin >> i;

    if(i >= size)
    {
    	std :: cout << "В этом массиве " << size << " элементов. Элемента индекса " << i << " не существует";
    	exit(-1);
    }

    delete_i(arr, i, size);
    size--;
    print(arr, size);

	return 0;
}