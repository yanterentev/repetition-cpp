#include <iostream>
#include <iomanip>
void square_table(int n)
{
	std :: cout << std :: setw(15) << "x |" << std :: setw(15) << "x^2" << '\n';
	std :: cout << '\n';
	for(unsigned long long int i = 1; i < n; ++i)
	{
		std :: cout << std :: setw(15) << i << " |" << std :: setw(15) << i*i << '\n';
	}
}

int main()
{
    square_table(20);
}