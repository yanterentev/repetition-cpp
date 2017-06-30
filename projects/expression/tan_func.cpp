#include<iostream>
#include<cmath>
template <class T>
T tan_function(T x, T y)
{
	return pow((1 - tan(x)), (1 / tan(x))) + cos((x-y));
}

int main()
{
	std :: cout << tan_function(3, 4) << '\n';
	std :: cout << tan_function(3.0, 4.0) << '\n';   
}
