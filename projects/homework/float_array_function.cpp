#include <iostream>

int float_array_function(int arr[], int size)
{
	int sum = 0;
	for(int i = 0; i < size; ++i)
	{
         sum += arr[i];
	}
	return (sum / size);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    std :: cout << float_array_function(arr, sizeof(arr) / sizeof(arr[0]));
}