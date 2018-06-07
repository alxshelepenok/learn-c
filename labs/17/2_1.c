#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int M = 4;

int main() {
	int arr[M][M], newArr[M];
	int i, j, p, count; 

	srand(time(NULL));

	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			arr[i][j] = 1 + rand() % 3;
	    	}
	}

	printf("Матрица: \n");
	for (i = 0; i < M; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("|\n");
	}

	count = 0;

	// Формируем новый массив
	for (i = 0; i < M; i++) {
		p = 1;

		if (arr[i][i]%2 == 0) {
			for (j = 0; j < M; j++) {		
				p *= arr[i][j];
			}

			newArr[count++] = p;
		}
	}


	// Вывод нового массива
	if (count != 0) {
		printf("Новый массив: [");
		for (i = 0; i < count; i++) {
			printf(" %d ", newArr[i]);
		}
		printf("]\n");
	} else {
		printf("Кратные числу %d отсутствуют\n", count);
	}

	return 0;
}