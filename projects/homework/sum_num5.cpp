#include <iostream>

int FunctionOfSumDivide(int n)
{
   int i = 0;
   int res = 0;
    while(i <= n)
    {
        if(i % 5 == 0)
        {
            res += i;
        }
        i++;
    }
    return res;
}

int main()
{
	int n;
	std :: cin >> n;
	std :: cout << FunctionOfSumDivide(n);
}