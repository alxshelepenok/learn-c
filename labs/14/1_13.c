#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

const int N = 5;
const int M = 5;

int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int arr[N][M];
	int i, j, k, sum, q, count;

	srand(time(NULL));

	printf("Введите число k: ");
	scanf("%d", &k);

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = randInt(1, 9);
		}
	}

	sum = 0;
	count = 0;

	printf("Исходная матрица: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf(" %d ", arr[i][j]);

			q = pow(arr[i][j], 2);
			if (q == k) {
				sum += arr[i][j];
				count++;
			}

		}
		printf("|\n");
	}

	if (count != 0) {
		printf("Сумма = %d\n", sum);
	} else {
		printf("Таких значений нет.");
	}

	return 0;
}