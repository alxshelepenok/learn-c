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
	double *arr, *newArr;
	int i, j, n, m, count;

	srand(time(NULL));

	printf("Введите размеры матрицы n*m: ");
	scanf("%d %d", &n, &m);

	arr = (double*)malloc(n*m*sizeof(double));
	newArr = (double*)malloc(n*m*sizeof(double));

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
	    		*(arr+i*m+j) = randDouble(1, 9);
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
		for (j = 0; j < m; j++) {
			if (*(arr+i*m+j) - (int)*(arr+i*m+j) > 0.3) {
				*(newArr+count) = *(arr+i*m+j);
				count++;
			}
		}
	}

	if (count != 0) {
		printf("Новый массив: [");
		for (i = 0; i < count; i++) {
			printf(" %lf ", *(newArr+i));
		}
		printf("]\n");
	} else {
		printf("Искомые элементы не найдены\n");
	}

	free(arr);
	free(newArr);

	return 0;
}