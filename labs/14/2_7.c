#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Строки
const int N = 4;

// Столбцы
const int M = 6;

/*
 * rowsCount - колличество строк.
 * rowSum - сумма строки.
 **/
int main() {
	int arr[N][M];
	int i, j, rowsCount, rowSum, lock;

	// Получение рандомного значения в зависимости от времени
	srand(time(NULL));

	// Заполняем массив рандомными числами от -1 до 9
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = -10+rand()%99;
		}
	}

	// Вывод массива
	printf("Massiv: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("|\n");
	}

	// Начальное значение для колличества строк
	rowsCount = 0;

	for (i = 0; i < N; i++) {
		rowSum = 0;
		lock = 1;

		// Считаем сумму строки заранее
		for (j = 0; j < M; j++) {
			rowSum += arr[i][j];

			if (arr[i][j] < 0) {
				lock = 0;
			}
		}

		if (lock == 0) {
			rowsCount++;
			printf("Naidena stroks soderj otricatelnie elementi, sum = %d\n", rowSum);
		}
	}

	if (rowsCount == 0) {
		printf("Stroki s onticatelnimi elementamin ne Naideni!");
	}

	return 0;
}