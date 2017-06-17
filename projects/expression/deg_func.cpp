#include<iostream>
#include<cmath>

int deg_func(int n, int k)
{
	int res = 0;
	for(int i = 1; i <= n; ++i)
	{
		std :: cout << res;
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