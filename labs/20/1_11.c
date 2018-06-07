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
	double *arr, *newArr;
	int i, n, c, count;

	srand(time(NULL));

	printf("Введите размерность: ");
	scanf("%d", &n);

	printf("Введите цифру: \n");
	scanf("%d", &c);

	arr = (double*)malloc(n*sizeof(double));
	newArr = (double*)malloc(n*sizeof(double));

	for (i = 0; i < n; i++) {
	    *(arr+i)  = randDouble(1, 100);
	}

	count = 0;

	printf("Исходный массив: [");
	for (i = 0; i < n; i++) {

		if ((int)*(arr+i)%10 == c) {
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