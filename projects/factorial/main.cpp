#include <iostream>

int factRec(int n)
{
	int res = n;
	if(n > 0)
	{
		res *= factRec(n-1);
	}
	else
	{
		res = 1;
	}
	return res;
}

int factIter(int n) 
{
	int res = n;
	if(n > 0)
	{
		for(int i = n-1; i > 0; i--)
		{
			res *= i;
		}
	}
	else
	{
		res = 1;
	}
	return res;
}


int main()
{
	std :: cout << "Рекурсия\n";
	std :: cout << factRec(5) << '\n' << factRec(4) << '\n' << factRec(3) <<'\n';
	std :: cout << "Итерация\n";
	std :: cout << factIter(5) << '\n' << factIter(4) << '\n' << factIter(0) <<'\n';
}