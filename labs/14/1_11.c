#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

// Строки
const int N = 5;

// Столбцы
const int M = 5;

int main() {
	int arr[N][M];
	int i, j, sum, count;

	// Получение рандомных значений в зависимости от времени
	srand(time(NULL));

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = 1+rand()%9;
		}
	}

	sum = 0;
	count = 0;

	printf("Massiv: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf(" %d ", arr[i][j]);

			// Если текущий элемент массива кратен сумме индексов(i+j), то прибавляем к сумму
			if (i>0 && arr[i][j]%(i+j) == 0) {
				sum += arr[i][j];
				count++;
			}
		}
		printf("|\n");
	}

	// Если колличество не равно нулю, то получаем среднее
	if (count != 0) {
		printf("Srednee = %f\n", (float)sum/count);
	} else {
		printf("Takih znacheniy net.");
	}

	return 0;
}