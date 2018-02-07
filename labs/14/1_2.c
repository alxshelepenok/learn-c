#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 6;
const int M = 6;

int main() {
	int arr[N][M];
	int a, b, j, i, multiplication, count;

	printf("Введите интервал А, B: ");
	scanf("%d %d", &a, &b);

	srand(time(NULL));

	multiplication = 1;
	count = 0;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = 1+rand()%9;
		}
	}

	printf("Исходная матрица: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf(" %d ", arr[i][j]);

	     		if (arr[i][j] >= a && arr[i][j] <= b) {
	     			multiplication *= arr[i][j];
	     			count++;
	     		}
		}
		printf("|\n");
	}

	if (count > 0) {
		printf("Произведение = %d\n", multiplication);
	} else {
		printf("Таких значений нет!");
	}

	return 0;
}