#incude <iostream>

int main() {
	int N = 10;

	long res = 1;
	for (int i = 2; i <= N; ++i) {
		res *= i;
	}

	std :: cout << "Факториал " << N << " равен" << res << '\n';
}