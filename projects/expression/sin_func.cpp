#include <iostream>
#include <cmath>

double sin_func(int n)
{
	double cur = 1;
	double res = 0.0;
    for(int i = 1; i < n; ++i)
    {
    	cur += sin(i);
    	res += 1/cur;
    }

    return res;
}

int main(int argc, char const *argv[])
{
	std :: cout << sin_func(5) << '\n';
	return 0;
}