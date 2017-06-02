#include<iostream>

int fibb(int i)
{
	//1 1 2 3 5 8 13 21
	int prev = 1, cur = 1;
	for(int j = 1; j < i; j++)
	{
		int temp = cur;
		cur += prev;
		prev  = temp;
	}
	return cur;
}
int main()
{
	std :: cout << fibb(3) << '\n';
	std :: cout << fibb(5) << '\n';
	std :: cout << fibb(7) << '\n';
}