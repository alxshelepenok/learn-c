/**
* Заполнить массив из 10 элементов случайными чис-лами в интервале [0..100] и отсортировать первую половину по возрастанию, а вторую – по убыванию.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 10;

/**
 * Функция randInt получает целочисленное число с заданным интервалом.
 *
 * @return int
*/
int randInt(int min, int max) {
	return min + rand() % max;
}

/**
 * Функция swap меняет местами значения двух переменных.
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

int main() {
	int arr[N];
	int i, j, k;

	srand(time(NULL));

	// Рандомный ввод массива
	for (i = 0; i < N; i++) {
	    arr[i] = randInt(1, 100);
	}

	// Вывод исходного массива
	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);
	}
	printf("]\n");

	// Сортировка первой половины
	for(i = 0; i < N/2 - 1; i++) { 
		for(j = 0; j < N/2 - i - 1; j++) {  
			if(arr[j] > arr[j+1]) {  
				swap(&arr[j], &arr[j+1]);
			}
		}
	}

	// Сортировка второй половины
	for(i = N/2; i < N - 1; i++) { 
		for(j = N/2; j < N - i - 1; j++) {  
			if(arr[j] < arr[j+1]) {  
				swap(&arr[j], &arr[j+1]);
			}
		}
	}

	printf("Преобразованный массив: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);
	}
	printf("]\n");

	return 0;
}