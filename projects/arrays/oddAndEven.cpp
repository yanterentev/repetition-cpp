#include <iostream>

int odd(int mas[], int size) {
	int count = 0;

	for (int i = 0; i < size; ++i) {
		if (mas[i] % 2 != 0) {
			++count;
		}
	}

	return count;
}

int even(int mas[], int size) {
	int count = 0;

	std :: cout << sizeof(mas) << '\n';
	std :: cout << sizeof(int*) << '\n';
	for (int i = 0; i < size; ++i) {
		if (mas[i] % 2 == 0) {
			++count;
		}
	}

	return count;
}


int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

	std :: cout << sizeof(arr) / sizeof(arr[0]) << '\n';

	std :: cout << odd(arr, sizeof(arr) / sizeof(arr[0])) << '\n';
	std :: cout << even(arr, sizeof(arr) / sizeof(int)) << '\n';
}