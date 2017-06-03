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

int fourth_degree(int i)
{
	return i*i*i*i;
}
//число в  4ой степени

//минимальное из трех чисел

int main()
{
	std :: cout << fibb(3) << '\n';
	std :: cout << fibb(5) << '\n';
	std :: cout << fibb(7) << '\n';
	std :: cout << fourth_degree(2) << '\n';
	std :: cout << fourth_degree(3) << '\n';


	/**/

	/**********/
}