#include <iostream>

int NOD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main()
{
    int a;
    int b;
    std :: cin >> a >> b;
    std :: cout << NOD(a, b);
}