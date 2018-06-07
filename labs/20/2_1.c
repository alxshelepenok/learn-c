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
	int i, j, p, n, m, count;

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

	count = 0;

	for (i = 0; i < n; i++) {
		p = 1;

		if (arr[i*n+i]%2 == 0) {
			for (j = 0; j < m; j++) {		
				p *= *(arr+i*m+j);
			}

			*(newArr+count) = p;
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
		printf("Кратные числу %d отсутствуют\n", count);
	}
  
	free(arr);
	free(newArr);

	return 0;
}