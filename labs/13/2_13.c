#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 3;

// Функция randDouble получает вещественное число с заданным интервалом.
double randDouble(double min, double max) {
	return (double)(rand())/RAND_MAX*(max-min)+min;
}

int main() {
	double arr[N];
	int i;
	double sum, avg;

	srand(time(NULL));

	sum = 0;
	avg = 0;

	for (i = 0; i < N; i++) {
	    arr[i] = randDouble(1, 100);
	}

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {
		printf(" %lf ", arr[i]);
     		sum += arr[i];
	}
	printf("]\n");

	avg = sum/N;
	printf("Среднее арифметическое: %lf\n", avg);

	printf("Преобразованный массив: [");
	for (i = 0; i < N; i++) {
		arr[i] = arr[i] - avg;
		printf(" %lf ", arr[i]);
	}
	printf("]\n");

	return 0;
}