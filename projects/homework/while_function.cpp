#include<iostream>

/*функция называется function из-за осторожности потому-что while - ключевое слово.*/
void function(int n)
{
	while(n != 1)
	{
		std :: cin >> n;
	}
}

int main()
{
    int n;
    std :: cout << "this function will request a number until you will introduce 1.\n";
    function(n);
}