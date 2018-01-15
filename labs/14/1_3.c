#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 10;
const int M = 20;

int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int arr[N][M];
	int i, j, sum, notEvenCount;
	float avg;

	srand(time(NULL));

	notEvenCount = 0;
	sum = 0;
	avg = 0;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = randInt(1, 9);
		}
	}

	printf("Исходная матрица: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf("%d ", arr[i][j]);

	     		if (arr[i][j]%2 != 0) {
	     			sum += arr[i][j];
	     			notEvenCount++;
	     		}
		}
		printf("|\n");
	}

	if (notEvenCount > 0) {
		avg = (float)sum/notEvenCount;
		printf("Cреднее арифметическое нечётных = %f\n", avg);
	} else {
		printf("Таких значений нет.");
	}

	return 0;
}