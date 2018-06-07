#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

/**
 * Функция randInt получает целочисленное число с заданным интервалом.
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int *arr, *newArr;
	int i, j, c, num, n, count;

	srand(time(NULL));

	printf("Введите размерность: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));
	newArr = (int*)malloc(n*sizeof(int));

	for (i = 0; i < n; i++) {
	    *(arr+i) = randInt(1, 99);
	}

	count = 0;

	printf("Исходный массив: [");
	for (i = 0; i < n; i++) {
		j = 0;
		num = 0;
		c = *(arr+i);

		while(c != 0) {
			if (c%10%3 == 0) {
				num = num+(c%10)*pow(10, j);
			}

			c = c/10;
			j++;
		}
		
		*(newArr+count) = *(arr+i) - num;
		count++;

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