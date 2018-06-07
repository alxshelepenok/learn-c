#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Функция randInt получает целочисленное число с заданным интервалом.
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

const int N = 4;
const int M = 4;

int main() {
	int arr[N][M], newArr[N];
	int i, j, count, minValue;

	srand(time(NULL));

	// Получаем рандомные трехначные числа
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
	    		arr[i][j] = randInt(1, 9);
	    	}
	}

	// Вывод массива
	printf("Матрица: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("|\n");
	}

	// Поиск минимального значения на главной диагонали
	minValue = arr[0][0];
	for (i = 0; i < N; i++) {
		if (arr[i][i] < minValue) {
			minValue = arr[i][i];
		}
	}

	// Формируем новый массив
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {		
			if (arr[i][j]%minValue == 0) {
				newArr[count++] = arr[i][j];
			}
		}
	}
	// Вывод нового массива
	if (count != 0) {
		printf("Новый массив: [");
		for (i = 0; i < count; i++) {
			printf(" %d ", newArr[i]);
		}
		printf("]\n");
	} else {
		printf("Кратные числу %d отсутствуют\n", count);
	}

	return 0;
}