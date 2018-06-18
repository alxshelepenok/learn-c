#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Функция randInt() получает рандомное целочисленное значение.
 * @param min нижнее значение
 * @param max верхнее значение
 *
 * @return int рандомное целочисленное значение. 
 */
int randInt(int min, int max) {
	return min+rand()%max;
}

int T;

/**
 * Функция sumIntMatrix() вычисляет сумму элементов двумерного массива.
 * @param int* arr адрес объекта
 *
 * @return int целочисленное значение. 
 */
int sumIntMatrix(int* arr) {
	int i, j, s;

	s = 0;

	for (i = 0; i < T; i++) {
		for (j = 0; j < T; j++) {
	    		s += *(arr+i*T+j);
	    	}
	}

	return s;
}

/**
 * Функция lenIntMatrix() получает длину двумерного массива.
 * @param int* arr адрес объекта
 *
 * @return int целочисленное значение. 
 */
int lenIntMatrix(int* arr) {
	int i, j, l;

	l = 0;
	
	for (i = 0; i < T; i++) {
		for (j = 0; j < T; j++) {
	    		l++;
	    	}
	}

	return l;
}

int main() {
	int *arr;
	int i, j;
	int sum, len; 

	srand(time(NULL));

	// Получение порядка двумерного массива рандомно
	T = randInt(4, 8);

	arr = (int*)malloc(T*T*sizeof(int));

	// Заполнение двумерного массива рандомно
	for (i = 0; i < T; i++) {
		for (j = 0; j < T; j++) {
	    		*(arr+i*T+j) = randInt(1, 9);
	    	}
	}

	// Форматированный вывод двумерного массива
	printf("Matrix: \n");
	for (i = 0; i < T; i++) {
		printf("| ");
		for (j = 0; j < T; j++) {
			printf("%d ", *(arr+i*T+j));
		}
		printf("|\n");
	}

	// Вычисление суммы массива и длины
	sum = sumIntMatrix(arr);
	len = lenIntMatrix(arr);

	printf("T = %d\nsum = %d\nlen = %d\n", T, sum, len);

	free(arr);

	return 0;
}