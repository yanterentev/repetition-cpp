#include <iostream>
#include <string>

bool isLetter(char ch) {
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int main()
{
	int j = 0;

	int max_length = 0;
	std :: string max_string = "";

	std :: cout << isLetter('a');
	std :: cout << isLetter('4');
	std :: cout << isLetter('s');
	std :: cout << isLetter('b');
	std :: cout << isLetter('B');
	std :: cout << isLetter(' ');
	std :: cout << isLetter('A');

	std :: string temp;
	int lenght = 0;
	while(std :: cin)
	{
		char symbol;
		symbol = std :: cin.get();
		if (!isLetter(symbol)) {
			if (max_length < lenght) {
				max_length = lenght;
				max_string = temp;
			}
			temp = "";
			lenght = 0;
		} else
		{
			temp += symbol;
			lenght++;
		}
	}

	if (lenght > max_length) {
		max_string = temp;
		max_length = lenght;
	}

	std :: cout << max_string << '\n';
	std :: cout << "самое длинное слово в строке - " << max_length << '\n';
}