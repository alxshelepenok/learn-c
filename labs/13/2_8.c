#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 3;

int main() {
	int arr[N];
	int a, i, tmp, minInd, maxInd;

	srand(time(NULL));

	for (i = 0; i < N; i++) {
	    arr[i] = 1+rand()%100;
	}

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);	
	}
	printf("]\n");


	// Поиск минимального индекса
	minInd = 0;
	for (i = 0; i < N; i++) {
		if (arr[i] < arr[minInd]) {
			minInd = i;
		}
	}

	// Поиск максимального индекса
	maxInd = 0;
	for (i = 0; i < N; i++) {
		if (arr[i] > arr[maxInd]) {
			maxInd = i;
		}
	}

	// Меняем местами
	tmp = arr[minInd];
	arr[minInd] = arr[maxInd];
	arr[maxInd] = tmp;

	printf("Преобразованый массив: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);	
	}
	printf("]\n");

	return 0;
}