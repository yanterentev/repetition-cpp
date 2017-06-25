//0 0 0 0 0 x
//0 0 0 0 0 x
//0 0 0 0 0 x
//0 0 0 0 0 x
//0 0 0 0 0 x
//x x x x x

//1 2 6 7 15
//3 5 8 14
//4 9 13
//10 12
//11 

//0 - (0;0) 
//1 - (0;1), (1;0) //(+1; -1)
//2 - (2;0), (1;1), (0;2) //(-1; +1)
//3 - (0;3), (1;2), (2;1), (3;0) //(+1; -1)
//4 - (4;0), (3;1), (2,2), (1;3), (0;4)
//5 - {(0;5)}, (1;4), (2;3), (3;2), (4;1), {(5;0)}
//6 - {(6;0), (5;1)}, (4;2), (3;3), (2;4), {(1;5), (2;6)}
//7 - (3;4)

//x = 6
//y = 0
//size = 5 
//y = 2
//x = 4

#include <iostream>
#include <iomanip>

const int N = 5;

void fillDiagMatrix(int matrix[], int size) {
	int count = 0;
	for (int diag = 0; diag < size*2-1; ++diag) {
		if (diag % 2 == 0) {
			int x = diag, y = 0;

			if (x >= size) {
				y = (x - size) + 1;
				x = size - 1;
			}

			while (x >= 0) {
				if (x < size && y < size) {
					matrix[x*size + y] = ++count;
				}
				--x;++y;
			}
		} else {
			int x = 0, y = diag;
//x = 0
//y = 7
//x = 3
//y = 4
			if (y >= size) {
				x = (y - size) + 1;
				y = size - 1;
			}

			while(y >= 0) {
				if (x < size && y < size) {
					matrix[x*size + y] = ++count;
				}
				++x;--y;
			}		
		}
	}
}

void printMas(int mas[], int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
		{
			std :: cout << std :: setw(5) << mas[i*m + j];
		}
        if(int i = 1; i < size; ++i)
        {

        }
		std :: cout << '\n';
	}
}

int main() {
	int matrix[N*N];

	fillDiagMatrix(matrix,N);
	printMas(matrix,N,N);
}