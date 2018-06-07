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
	int i, c, n, sum, count;

	srand(time(NULL));

	printf("Введите размерность: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));
	newArr = (int*)malloc(n*sizeof(int));

	for (i = 0; i < n; i++) {
	    *(arr+i)  = randInt(100, 899);
	}

	count = 0;

	printf("Исходный массив: [");
	for (i = 0; i < n; i++) {

		sum = 0;
		c = *(arr+i);
		while(c != 0) {
			sum += c%10;
			c = c/10;
		}

		if (i > 0 && sum%i == 0) {
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