#include<iostream>
#include<cmath>
template <class T>
T tan_function(T x, T y)
{
	return pow((1 - tan(x)), (1 / tan(x))) + cos((x-y));
}

int main()
{
}
