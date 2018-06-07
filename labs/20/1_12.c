#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

/**
 * Функция randDouble получает вещественное число с заданным интервалом.
 */
double randDouble(double min, double max) {
	return (double)(rand())/RAND_MAX*(max-min)+min;
}

int main() {
	double max, *arr, *newArr;
	int i, n, count;

	srand(time(NULL));

	printf("Введите размерность: ");
	scanf("%d", &n);

	arr = (double*)malloc(n*sizeof(double));
	newArr = (double*)malloc(n*sizeof(double));

	for (i = 0; i < n; i++) {
	    *(arr+i)  = randDouble(-100, 50);
	}

	max = *(arr+0);
	for (i = 0; i < n; i++) {
		if (*(arr+i) > max) {
			max = *(arr+i);
		}
	}

	count = 0;

	printf("Исходный массив: [");
	for (i = 0; i < n; i++) {

		if (fabs(*(arr+i)) > max) {
			*(newArr+count) = *(arr+i);
			count++;
		}

		printf(" %lf ", *(arr+i));
	}
	printf("]\n");

	printf("Новый массив: [");
	for (i = 0; i < count; i++) {
		printf(" %lf ", *(newArr+i));
	}
	printf("]\n");

	free(arr);
	free(newArr);

	return 0;
}