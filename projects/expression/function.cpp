#include<iostream>
template <class T>
T function(T a, T b, T f)
{
	return (a + b - f / a) + f * a * a - (a + b); 
}

// (2 + 3 - 4 / 2) + 4 * 2 * 2 - (2 + 3)
//44

int main()
{
	int a = 3;
	int b = 2;
	int f = 5;
	std :: cout << function(a, b, f) << '\n';
	std :: cout << function(3.1, 4.2, 2.7) << '\n';
	std :: cout << function(3.0f, 7.1f, 6.2f) << '\n';
	std :: cout << function(4l, 5l, 6l);    
}