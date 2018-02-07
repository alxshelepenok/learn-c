#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 4;
const int M = 6;

int randInt(int min, int max) {
	return min + rand()%max;
}

int main() {
	int arr[N][M];
	int i, j, colsCount;

	srand(time(NULL));

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = 0 + rand()%9;
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

	colsCount = M;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (arr[i][j] == 0) {
				colsCount--;
				break;
			}
		}
	}

	printf("Колличество столбцов: %d\n", colsCount);

	return 0;
}