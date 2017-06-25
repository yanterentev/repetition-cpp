//   0   1   2
//0) 1.2 1.2 1.3
//1) 2.1 2.1 2.1
//2) 2.2 3.6 4.5

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

const int N = 10;
const int M = 5;

//5 7
//random from [5;7]
//[0; 1]
double drand() {
	double temp1 = rand(),
		temp2 = rand();
	double temp3 = temp1/temp2;

	return temp3 - floor(temp3);
}

double random(int a, int b) {
	//0 < drand() < 1
	//0 < drand()*(b-a) < b-a
	//a < a + drand()*(b-a) < b - a + a
	//a < a + drand()*(b-a) < b
	return a + drand()*(b - a);
}

void printMas(double mas[N][M], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
		{
			std :: cout << std :: setw(10) << mas[i][j];
		}

		std :: cout << '\n';
	}
}

int main() {
	srand(time(NULL));

	double mas[N][M];

	int a = 10;
	int b = 1000;

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			mas[i][j] = random(a,b);
		}
	}

	printMas(mas, N, M);
}