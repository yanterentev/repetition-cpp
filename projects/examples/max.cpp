#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
	const int N = 100;
	int mas[N];

	for (int i = 0; i < N; ++i) {
		mas[i] = rand();
	}

	int max = mas[0];
	for (int i = 0; i < N; ++i)
	{
		if (mas[i] > max) {
			max = mas[i];
		}
	}

	std :: cout << "max = " << max << '\n';

	return 0;
}