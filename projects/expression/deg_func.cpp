#include<iostream>
#include<cmath>

double deg_func(int n, int k)
{
	double res = 0;
	for(int i = 1; i <= n; ++i)
	{
        res += pow(i, k);
	}
	return res;
}

int main()
{
    int n;
    int k;
    std :: cin >> n;
    std :: cin >> k;
    std :: cout << '\n' << deg_func(n, k);
}