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
int min_value(int i, int j, int q)
{
	int res;
	if(i >= j)
	{
		if(j >= q)
		{
           res = q;
		}
		else if(q >= j)
		{
			res = j;
		}
	}
	else if(j >= i)
	{
		if(i >= q)
		{
           res = q;
		}
		else if(q >= i)
		{
			res = i;
		}
	}
	return res;
}
//минимальное из трех чисел
int fact(int i)
{
	 for(int i = 1; i < )
}

int main()
{
	std :: cout << fibb(3) << '\n';
	std :: cout << fibb(5) << '\n';
	std :: cout << fibb(7) << '\n';
	std :: cout << fourth_degree(2) << '\n';
	std :: cout << fourth_degree(3) << '\n';
	std :: cout << min_value(1, 2, 3) << '\n';
	std :: cout << min_value(13, 7, 19) << '\n';
}