#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Функция randDouble получает вещественное число с заданным интервалом.
 */
double randDouble(double min, double max) {
	return (double)(rand())/RAND_MAX*(max-min)+min;
}

int main() {
	double *arr;
	int *newArr, i, j, n, m, k, count, lock;

	srand(time(NULL));

	printf("Введите размеры матрицы n*m: ");
	scanf("%d %d", &n, &m);

	arr = (double*)malloc(n*m*sizeof(double));
	newArr = (int*)malloc(n*m*sizeof(int));

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
	    		*(arr+i*m+j) = randDouble(-2, 9);
	    	}
	}

	printf("Матрица: \n");
	for (i = 0; i < n; i++) {
		printf("| ");
		for (j = 0; j < m; j++) {
			printf("%lf ", *(arr+i*m+j));
		}
		printf("|\n");
	}

	count = 0;

	for (i = 0; i < n; i++) {
		k = 0;
		lock = 1;

		for (j = 0; j < m; j++) {
			if (*(arr+i*m+j) < 0) {
				lock = 0;
				break;
			} else {
				k++;
			}
		}

		if (lock == 0) {
			*(newArr+count) = k;
			count++;
		}
	}

	if (count != 0) {
		printf("Новый массив: [");
		for (i = 0; i < count; i++) {
			printf(" %d ", *(newArr+i));
		}
		printf("]\n");
	} else {
		printf("Искомые элементы не найдены\n");
	}

	free(arr);
	free(newArr);

	return 0;
}