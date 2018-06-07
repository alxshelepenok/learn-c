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

/**
 * Функция swap() меняет местами значения двух переменных.
 *
 * @param int *a - указатель для первой переменной.
 * @param int *a - указатель для второй переменной.
 */
void swap (int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// Порядок матрицы
int T;

/**
 * Функция findMaxOfMatrix() получает индекс и значение максимального элемента матрицы.
 *
 * @param int* arr ссылка на массив.
 * @param int *indX указатель на индекс элемента.
 * @param int *indY указатель на индекс элемента.
 * @param int *val указатель на значение элемента.
 */
void findMaxOfMatrix(int* arr, int *indI, int *indJ, int *val) {
	int i, j;

	*indI = 0;
	*indJ = 0;
	*val = *(arr+*indI*T+*indJ);

	for (i = 0; i < T; i++) {
		for (j = 0; j < T; j++) {
	    		if (*val < *(arr+i*T+j)) {
	    			*val = *(arr+i*T+j);
	    			*indI = i;
	    			*indJ = j; 
	    		}
	    	}
	}
}

int main() {
	int *arr;
	int i, j;

	srand(time(NULL));

	// Получение порядка двумерного массива
	T = randInt(2, 4);

	arr = (int*)malloc(T*T*sizeof(int));

	// Заполнение двумерного массива
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

	// Поиск максимального элемента
	int val, indI, indJ;
	findMaxOfMatrix(arr, &indI, &indJ, &val);

	// Меняем местами максимальный и последний
	swap((arr+(T-1)*T+T-1), (arr+indI*T+indJ));

	// Вывод нового массива
	printf("New Matrix: \n");
	for (i = 0; i < T; i++) {
		printf("| ");
		for (j = 0; j < T; j++) {
			printf("%d ", *(arr+i*T+j));
		}
		printf("|\n");
	}	

	free(arr);

	return 0;
}