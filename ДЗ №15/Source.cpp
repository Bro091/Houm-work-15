#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Задача 1
	const int size = 10;
	int arr[size][size];
	srand(time(NULL));
	int sum_rows[size] = {};
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 100;
			std::cout << arr[i][j] << '\t';

		}
		std::cout << '\n';

	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			sum_rows[i] += arr[i][j];
		}
	}
	std::cout << "\nСумма по строкам!\n";
	for (int i = 0; i < size; i++) {
		std::cout << i + 1 << "-я строка: " << sum_rows[i] << std::endl;
	} std::cout << "\n\n";

	// Задача 2

	std::cout << "Введите число от 0 до 9 -> ";
	std::cin >> m;
	int tmp;
	for (int i = size - 1; i > 0; i--) {
		for (int j = 0; j < i; j++)
			if (arr[m][j] > arr[m][j + 1]) {

				tmp = arr[m][j];
				arr[m][j] = arr[m][j + 1];
				arr[m][j + 1] = tmp;
		}		
		std::cout << arr[m][i] << ' ';
	}
	

	return 0;
}