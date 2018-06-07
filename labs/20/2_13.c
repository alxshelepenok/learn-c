#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Функция randInt получает целочисленное число с заданным интервалом.
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int *arr, *newArr;
	int i, j, n, m, count, minValue;

	srand(time(NULL));

	printf("Введите порядок: ");
	scanf("%d", &n);
	m = n;

	arr = (int*)malloc(n*m*sizeof(int));
	newArr = (int*)malloc(n*m*sizeof(int));

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
	    		*(arr+i*m+j) = randInt(1, 9);
	    	}
	}

	printf("Матрица: \n");
	for (i = 0; i < n; i++) {
		printf("| ");
		for (j = 0; j < m; j++) {
			printf("%d ", *(arr+i*m+j));
		}
		printf("|\n");
	}

	minValue = *(arr+0);
	for (i = 0; i < n; i++) {
		if (*(arr+i*m+i) < minValue) {
			minValue = *(arr+i*m+i);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {		
			if (*(arr+i*m+j)%minValue == 0) {
				*(newArr+count) = *(arr+i*m+i);
				count++;
			}
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