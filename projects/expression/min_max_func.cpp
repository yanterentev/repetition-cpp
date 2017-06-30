#include<iostream>

int max_func(int n)
{
    int max = n % 10;
    int i = n / 10;
    while(i != 0)
    {
        if((i % 10) > max)
        {
            max = i % 10;
        }
        i /= 10;
    }
    
    return max;
}

unsigned int min_func(int n)
{
    int min = n % 10;
    int i = n / 10;
    while(i != 0)
    {
        if((i % 10) < min)
        {
            min = i % 10;
        }
        i /= 10;
    }
    
    return min;
}

void digit(int n) {
    while(n != 0)
    {
        std :: cout << n % 10;
        n /= 10;
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    digit(n);
    std::cout << '\n' << min_func(n) << '\n' << max_func(n);
}