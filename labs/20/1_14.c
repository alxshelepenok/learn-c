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
	int i, n, m, k, l, count;

	srand(time(NULL));

	printf("Введите размерность: ");
	scanf("%d", &n);

	printf("Введите число M: ");
	scanf("%d", &m);

	printf("Введите интервал, K и L: ");
	scanf("%d %d", &k, &l);

	arr = (int*)malloc(n*sizeof(int));
	newArr = (int*)malloc(n*sizeof(int));

	for (i = 0; i < n; i++) {
	    *(arr+i)  = randInt(1, 100);
	}

	count = 0;

	printf("Исходный массив: [");
	for (i = 0; i < n; i++) {

		if (i > k && i < l && *(arr+i)%m == 0) {
			*(newArr+count) = *(arr+i);
			count++;
		}

		printf(" %d ", *(arr+i));
	}
	printf("]\n");

	printf("Новый массив: [");
	for (i = 0; i < count; i++) {
		printf(" %d ", *(newArr+i));
	}
	printf("]\n");

	free(arr);
	free(newArr);

	return 0;
}