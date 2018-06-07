#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Строки
const int N = 4;

// Столбцы
const int M = 6;

/*
 * rowsCount - колличество строк.
 * rowAvg - среднее арифметическое строки.
 * rowSum - сумма строки.
 * k - челое число.
 **/
int main() {
	int arr[N][M];
	int i, j, k, rowsCount, rowSum;
	float rowAvg;

	printf("Vvedite k:\n");
	scanf("%d", &k);

	// Получение рандомного значения в зависимости от времени
	srand(time(NULL));

	// Заполняем массив рандомными числами от 1 до 9
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = 1+rand()%9;
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

		// Считаем сумму строки
		for (j = 0; j < M; j++) {
			rowSum += arr[i][j];
		}

		// Считаем среднее арифметическое строки
		rowAvg = (float)rowSum/M;

		// Если среднее меньше к, то увеличиваем колличество на единицу
		if (rowAvg<k) {
			rowsCount++;
		}
	}

	printf("Kollichestvo strok: %d\n", rowsCount);

	return 0;
}