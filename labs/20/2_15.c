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
	int i, j, n, m, multipl, lock, count;

	srand(time(NULL));

	printf("Введите размеры матрицы n*m: ");
	scanf("%d %d", &n, &m);

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
			printf("%d(%d) ", *(arr+i*m+j), i+j);
		}
		printf("|\n");
	}

	count = 0;

	for (i = 0; i < m; i++) {
		multipl = 1;
		lock = 1;

		for (j = 0; j < n; j++) {
			if ((i+j) > 0 && *(arr+j*m+i)%(i+j) == 0) {
				multipl *= *(arr+j*m+i);
				lock = 0;
			}
		}

		if (lock	== 0) {
			*(newArr+count) = multipl;
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