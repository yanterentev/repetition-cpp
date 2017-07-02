#include <iostream>
#include <fstream>
int main()
{
	char file_name[100];
	std :: cout << "Введите имя файла: ";
	std :: cin >> file_name;
	std :: ifstream is;
	is.open(file_name);

	if (!is)
	{
		std :: cout << "Файл не получается открыть.\n";
	}
	else
	{
		int counter_left = 0;
		int counter_right = 0;

		char symbol;
            is >> symbol;

            while(is)
            {
            	if(symbol == '{')
            	{
            		counter_left++;
            	} 
            	else if(symbol == '}')
            	{
            		counter_right++;
            		if (counter_right > counter_left)
            		{ 
            			break;
            		} 
            	}
            is >> symbol;
            }

            is.close();
            if (counter_left == 0 && counter_right == 0)
            {
            	std :: cout << "В файле нет фигурных скобок.\n";
            }
            else if (counter_left == counter_right)
            	{
            		std :: cout << "Баланс скобок не нарушен.\n";
            	}
            	else
            	{
            		std :: cout << "Баланс cкобок нарушен.\n";
            	}
    }
    return 0;
}