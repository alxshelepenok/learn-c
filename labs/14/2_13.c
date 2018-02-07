#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 4;
const int M = 4;

int randInt(int min, int max) {
	return min + rand()%max;
}

int main() {
	int arr[N][M];
	int i, j, isFoundCol;

	srand(time(NULL));

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = randInt(0, 9);
		}
	}

	printf("Исходная матрица: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("|\n");
	}

	for (j = 0; j < M; j++) {
		isFoundCol = 0;

		for (i = 0; i < N; i++) {
			if (arr[i][j] == 0) {
				isFoundCol = 1;
				printf("Номер первого из столбцов, где есть 0: %d\n", j);
				break;
			}
		}

		if (isFoundCol == 1) {
			break;
		}
	}

	return 0;
}